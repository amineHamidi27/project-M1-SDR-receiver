#!/usr/bin/env python3
"""
GPS L1 C/A Signal Acquisition — with plots for report
Dependencies: numpy, matplotlib  (no PocketSDR)

Usage:
    python3 gps_acquisition_gra.py <file.bin> [options]

Options:
    -f  MHz      Sampling frequency          [4.0]
    -fi MHz      IF frequency (0 = zero-IF)  [0.0]
    -prn str     PRN list/range              [1-32]
    -d  Hz       Max Doppler search          [5000]
    -t  ms       Non-coherent integration    [10]
    --save DIR   Save all figures as PNG (300 DPI) in DIR
    --noshow     Do not display figures interactively
    --csv FILE   Save acquisition results to CSV
"""

import os, time, argparse
import numpy as np
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec
from matplotlib.patches import Patch

# ─────────────────────────────────────────────────────────────────────────────
#  1. GPS L1 C/A CODE GENERATION
# ─────────────────────────────────────────────────────────────────────────────
_G2_DELAY = [
      5,   6,   7,   8,  17,  18, 139, 140, 141, 251,
    252, 254, 255, 256, 257, 258, 469, 470, 471, 472,
    473, 474, 509, 512, 513, 514, 515, 516, 859, 860,
    861, 862,
]

def _lfsr(taps, n=1023):
    reg, seq = [1]*10, []
    for _ in range(n):
        seq.append(reg[9])
        fb = 0
        for t in taps:
            fb ^= reg[t]
        reg = [fb] + reg[:9]
    return seq

_G1 = _lfsr([2, 9])
_G2 = _lfsr([1, 2, 5, 7, 8, 9])

def ca_code(prn):
    delay = _G2_DELAY[prn - 1]
    bits  = [_G1[i] ^ _G2[(i - delay) % 1023] for i in range(1023)]
    return np.array([1 - 2*b for b in bits], dtype=np.float32)

def upsample(code, N):
    return code[np.arange(N) * 1023 // N]

# ─────────────────────────────────────────────────────────────────────────────
#  2. IF DATA READER
# ─────────────────────────────────────────────────────────────────────────────
def read_if(path, fs, iq, duration_s):
    n_bytes = int(fs * duration_s * iq)
    with open(path, 'rb') as f:
        raw = np.frombuffer(f.read(n_bytes), dtype=np.int8)
    if iq == 2:
        return (raw[0::2].astype(np.float32)
                - 1j * raw[1::2].astype(np.float32)).astype(np.complex64)
    return raw.astype(np.complex64)

# ─────────────────────────────────────────────────────────────────────────────
#  3. ACQUISITION CORE
# ─────────────────────────────────────────────────────────────────────────────
T_CODE = 1e-3
THRES  = 37.0

def dop_grid(max_dop):
    step = 0.5 / T_CODE
    return np.arange(-max_dop, max_dop + step, step, dtype=np.float64)

def fine_dop(P_col, fds, i_peak):
    if i_peak <= 0 or i_peak >= len(fds) - 1:
        return float(fds[i_peak])
    p0, p1, p2 = P_col[i_peak-1], P_col[i_peak], P_col[i_peak+1]
    denom = p0 - 2*p1 + p2
    if denom == 0:
        return float(fds[i_peak])
    return float(fds[i_peak]) + 0.5*(p0 - p2)/denom * (fds[1]-fds[0])

def cn0_estimate(P, P_peak):
    mu = np.mean(P)
    if mu <= 0:
        return 0.0
    return 10.0 * np.log10(max((P_peak/mu - 1.0) / T_CODE, 1.0))

def acquire(prn, data, fs, fi, fds, N, n_coh, return_map=False):
    code_up  = upsample(ca_code(prn), N).astype(np.complex64)
    code_fft = np.conj(np.fft.fft(code_up))
    t        = np.arange(N, dtype=np.float64) / fs
    carriers = np.exp(-1j * 2*np.pi
                      * np.outer(fds + fi, t)).astype(np.complex64)

    P   = np.zeros((len(fds), N), dtype=np.float32)
    cnt = min(n_coh, len(data) // N)
    for k in range(cnt):
        seg      = data[k*N : k*N + N]
        wiped    = carriers * seg
        sig_fft  = np.fft.fft(wiped, axis=1)
        corr     = np.fft.ifft(sig_fft * code_fft, axis=1)
        P       += np.abs(corr).astype(np.float32)**2

    i_fd, i_co = np.unravel_index(np.argmax(P), P.shape)
    P_peak     = float(P[i_fd, i_co])
    coff = float(i_co) / fs * 1e3
    dop  = fine_dop(P[:, i_co], fds, i_fd)
    cn0  = cn0_estimate(P, P_peak)

    if return_map:
        return coff, dop, cn0, P / P_peak, int(i_fd), int(i_co)
    return coff, dop, cn0

# ─────────────────────────────────────────────────────────────────────────────
#  4. PLOT HELPERS
# ─────────────────────────────────────────────────────────────────────────────
matplotlib.rcParams.update({
    'font.size'        : 10,
    'axes.titlesize'   : 11,
    'axes.labelsize'   : 10,
    'legend.fontsize'  : 9,
    'figure.facecolor' : 'white',
    'axes.facecolor'   : '#F8F9FA',
    'axes.grid'        : True,
    'grid.alpha'       : 0.4,
    'grid.linewidth'   : 0.5,
})

C_SIG  = '#1565C0'   # dark blue  — detected signal
C_NOI  = '#90A4AE'   # steel gray — noise floor
C_THR  = '#C62828'   # dark red   — threshold
C_PEAK = '#E65100'   # orange     — peak marker
C_DOP  = '#6A1B9A'   # purple     — Doppler profile


def _save(fig, path):
    if path:
        fig.savefig(path, dpi=300, bbox_inches='tight')
        print(f'  Saved : {path}')


# ── Figure 1 : Signal time domain + PSD ──────────────────────────────────────
def plot_signal_psd(data, fs, filename=None):
    """
    Top    : first 3 ms of I and Q in time domain
    Bottom : power spectral density (average over 5 ms)
    """
    seg_n = int(fs * 1e-3)            # samples per 1 ms
    n_avg = min(5, len(data) // seg_n) # number of 1-ms segments to average

    # PSD (averaged periodogram)
    psd = np.zeros(seg_n, dtype=np.float64)
    for k in range(n_avg):
        seg = data[k*seg_n : (k+1)*seg_n]
        psd += np.abs(np.fft.fftshift(np.fft.fft(seg, seg_n)))**2
    psd /= n_avg
    freqs_mhz = np.fft.fftshift(np.fft.fftfreq(seg_n, 1.0/fs)) / 1e6
    psd_db    = 10 * np.log10(psd + 1e-12)

    # Time-domain: first 3 ms
    n_td  = min(3 * seg_n, len(data))
    t_ms  = np.arange(n_td) / fs * 1e3
    I_sig = data[:n_td].real
    Q_sig = data[:n_td].imag

    fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(12, 7))
    fig.suptitle('Signal IF brut — Domaine temporel et spectral', fontsize=13, fontweight='bold')

    # Time domain
    ax1.plot(t_ms, I_sig, lw=0.6, color=C_SIG,  label='I (en phase)',    alpha=0.85)
    ax1.plot(t_ms, Q_sig, lw=0.6, color=C_PEAK, label='Q (quadrature)', alpha=0.85)
    ax1.set_xlabel('Temps (ms)')
    ax1.set_ylabel('Amplitude (ADC int8)')
    ax1.set_title(f'Signal I/Q  —  3 premières ms  (fs = {fs/1e6:.1f} MHz)')
    ax1.legend(loc='upper right')
    ax1.set_xlim([0, t_ms[-1]])

    # PSD
    ax2.plot(freqs_mhz, psd_db, lw=0.9, color=C_DOP)
    ax2.fill_between(freqs_mhz, psd_db.min() - 3, psd_db,
                     alpha=0.15, color=C_DOP)
    ax2.set_xlabel('Fréquence (MHz)')
    ax2.set_ylabel('DSP (dB)')
    ax2.set_title(f'Densité Spectrale de Puissance  —  moyenne sur {n_avg} ms')
    ax2.set_xlim([freqs_mhz[0], freqs_mhz[-1]])

    fig.tight_layout()
    _save(fig, filename)
    return fig


# ── Figure 2 : C/N0 bar chart ─────────────────────────────────────────────────
def plot_cn0_bar(results, filename=None):
    prns   = [r['prn'] for r in results]
    cn0s   = [r['cn0'] for r in results]
    colors = [C_SIG if c >= THRES else C_NOI for c in cn0s]

    fig, ax = plt.subplots(figsize=(14, 5))
    ax.bar(prns, cn0s, color=colors, width=0.7, edgecolor='white', linewidth=0.4)
    ax.axhline(THRES, color=C_THR, lw=1.8, ls='--', zorder=5)
    ax.text(prns[-1] + 0.6, THRES + 0.3, f'Seuil = {THRES:.0f} dB-Hz',
            color=C_THR, fontsize=9, va='bottom')

    for r in results:
        if r['cn0'] >= THRES:
            ax.annotate(f"PRN {r['prn']}\n{r['cn0']:.1f}",
                        xy=(r['prn'], r['cn0']),
                        xytext=(0, 6), textcoords='offset points',
                        ha='center', fontsize=8, color=C_SIG, fontweight='bold')

    ax.set_xlabel('Numéro PRN')
    ax.set_ylabel('C/N0 (dB-Hz)')
    ax.set_title('Résultats d\'acquisition GPS L1 C/A — C/N0 par PRN')
    ax.set_xticks(prns)
    ax.set_ylim([28, max(cn0s) + 8])
    ax.legend(handles=[
        Patch(facecolor=C_SIG, label='Satellite détecté'),
        Patch(facecolor=C_NOI, label='Plancher de bruit'),
    ], loc='upper left')

    fig.tight_layout()
    _save(fig, filename)
    return fig


# ── Figure 3+ : Per-satellite acquisition details ────────────────────────────
def plot_satellite(prn, P_norm, fds, N, fs, coff_ms, dop_hz, cn0, filename=None):
    """
    Row 0 (full width) : 2D acquisition map (Doppler × code offset)
    Row 1 left         : correlation peak vs code offset
    Row 1 right        : Doppler profile at peak code offset
    """
    coffs = np.arange(N) / fs * 1e3   # code offsets in ms
    i_fd  = int(np.argmin(np.abs(fds - dop_hz)))
    i_co  = int(round(coff_ms * 1e-3 * fs)) % N

    fig = plt.figure(figsize=(14, 9))
    fig.suptitle(
        f'PRN {prn:02d}  ·  Doppler = {dop_hz:+.0f} Hz  ·  '
        f'Code offset = {coff_ms:.5f} ms  ·  C/N0 = {cn0:.1f} dB-Hz',
        fontsize=12, fontweight='bold')

    gs = gridspec.GridSpec(2, 2, figure=fig, hspace=0.45, wspace=0.35,
                           top=0.91, bottom=0.08)

    # ── 2D acquisition map ───────────────────────────────────────────────────
    ax0 = fig.add_subplot(gs[0, :])
    im  = ax0.imshow(
        P_norm, aspect='auto', origin='lower', cmap='viridis',
        extent=[coffs[0], coffs[-1], fds[0], fds[-1]],
        vmin=0, vmax=1)
    cbar = fig.colorbar(im, ax=ax0, fraction=0.025, pad=0.01)
    cbar.set_label('Puissance de corrélation normalisée')
    ax0.set_xlabel('Décalage de code (ms)')
    ax0.set_ylabel('Fréquence Doppler (Hz)')
    ax0.set_title(f'Carte d\'acquisition 2D  —  PRN {prn:02d}')

    # ── Correlation peak vs code offset ──────────────────────────────────────
    ax1 = fig.add_subplot(gs[1, 0])
    corr_slice = P_norm[i_fd, :]
    ax1.plot(coffs, corr_slice, lw=1.2, color=C_SIG)
    ax1.fill_between(coffs, 0, corr_slice, alpha=0.18, color=C_SIG)
    ax1.axvline(coff_ms, color=C_PEAK, lw=1.8, ls='--',
                label=f'COFF = {coff_ms:.5f} ms')
    ax1.axhline(np.mean(corr_slice), color='gray', lw=0.8, ls=':',
                label=f'Moyenne = {np.mean(corr_slice):.3f}')
    ax1.set_xlabel('Décalage de code (ms)')
    ax1.set_ylabel('Puissance normalisée')
    ax1.set_title(f'Pic de corrélation  (bin Doppler = {fds[i_fd]:+.0f} Hz)')
    ax1.set_xlim([0, coffs[-1]])
    ax1.set_ylim([-0.02, 1.1])
    ax1.legend()

    # Inset: zoom ±10 samples around peak
    ax1_ins = ax1.inset_axes([0.55, 0.45, 0.42, 0.48])
    zoom = 20
    lo = max(0,   i_co - zoom)
    hi = min(N-1, i_co + zoom)
    ax1_ins.plot(coffs[lo:hi+1], corr_slice[lo:hi+1], lw=1.2, color=C_SIG)
    ax1_ins.axvline(coff_ms, color=C_PEAK, lw=1.2, ls='--')
    ax1_ins.set_title('Zoom pic', fontsize=8)
    ax1_ins.tick_params(labelsize=7)

    # ── Doppler profile at peak code offset ───────────────────────────────────
    ax2 = fig.add_subplot(gs[1, 1])
    dop_slice = P_norm[:, i_co]
    ax2.plot(fds, dop_slice, lw=1.2, color=C_DOP)
    ax2.fill_between(fds, 0, dop_slice, alpha=0.18, color=C_DOP)
    ax2.axvline(dop_hz, color=C_PEAK, lw=1.8, ls='--',
                label=f'DOP = {dop_hz:+.0f} Hz')
    ax2.axvline(fds[i_fd], color='gray', lw=0.8, ls=':',
                label=f'Bin = {fds[i_fd]:+.0f} Hz')
    ax2.set_xlabel('Fréquence Doppler (Hz)')
    ax2.set_ylabel('Puissance normalisée')
    ax2.set_title(f'Profil Doppler  (COFF = {coff_ms:.5f} ms)')
    ax2.set_xlim([fds[0], fds[-1]])
    ax2.set_ylim([-0.02, 1.1])
    ax2.legend()

    _save(fig, filename)
    return fig


# ─────────────────────────────────────────────────────────────────────────────
#  5. TEXT OUTPUT
# ─────────────────────────────────────────────────────────────────────────────
_B  = '\033[1m'
_BL = '\033[34m'
_GR = '\033[32m'
_R  = '\033[0m'

def print_table(results, elapsed, path, fs_mhz):
    detected = [r for r in results if r['cn0'] >= THRES]
    hdr = (f"  {'PRN':>4}  {'Doppler (Hz)':>14}  "
           f"{'C/N0 (dB-Hz)':>13}  {'Code Off (ms)':>13}")
    print()
    print(_B + "=" * 65 + _R)
    print(_B + f"  GPS L1 C/A  ·  {os.path.basename(path)}  ·  fs={fs_mhz} MHz" + _R)
    print(_B + "=" * 65 + _R)
    print(_B + hdr + _R)
    print("─" * 65)
    for r in results:
        locked = r['cn0'] >= THRES
        c, e   = (_BL, _R) if locked else ('', '')
        mark   = '  ◄' if locked else ''
        print(f"{c}  {r['prn']:>4}  {r['dop_hz']:>+14.0f}"
              f"  {r['cn0']:>13.1f}  {r['coff_ms']:>13.5f}{mark}{e}")
    print("=" * 65)
    print(f"  Elapsed : {elapsed:.3f} s   |   Detected : {len(detected)} / {len(results)}")
    print()
    if detected:
        print(_B + f"  Satellites détectés  (C/N0 ≥ {THRES:.0f} dB-Hz) :" + _R)
        print(_B + hdr + _R)
        print("─" * 52)
        for r in detected:
            print(f"{_GR}  {r['prn']:>4}  {r['dop_hz']:>+14.0f}"
                  f"  {r['cn0']:>13.1f}  {r['coff_ms']:>13.5f}{_R}")
    print()

def save_csv(results, path):
    with open(path, 'w') as f:
        f.write("PRN,Doppler_Hz,CN0_dBHz,CodeOffset_ms,Detected\n")
        for r in results:
            f.write(f"{r['prn']},{r['dop_hz']:.0f},{r['cn0']:.1f},"
                    f"{r['coff_ms']:.5f},{int(r['cn0'] >= THRES)}\n")
    print(f"  CSV → {path}")

# ─────────────────────────────────────────────────────────────────────────────
#  6. ENTRY POINT
# ─────────────────────────────────────────────────────────────────────────────
def parse_prns(s):
    prns = []
    for tok in s.split(','):
        tok = tok.strip()
        if '-' in tok:
            a, b = tok.split('-')
            prns.extend(range(int(a), int(b)+1))
        else:
            prns.append(int(tok))
    return prns

def main():
    ap = argparse.ArgumentParser(
        description='GPS L1 C/A acquisition with plots — no PocketSDR',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__)
    ap.add_argument('file')
    ap.add_argument('-f',       type=float, default=4.0,    metavar='MHz')
    ap.add_argument('-fi',      type=float, default=0.0,    metavar='MHz')
    ap.add_argument('-prn',     type=str,   default='1-32')
    ap.add_argument('-d',       type=float, default=5000.0, metavar='Hz')
    ap.add_argument('-t',       type=float, default=10.0,   metavar='ms')
    ap.add_argument('--csv',    type=str,   default=None,   metavar='FILE')
    ap.add_argument('--save',   type=str,   default=None,   metavar='DIR',
                    help='Save figures as PNG in DIR')
    ap.add_argument('--noshow', action='store_true',
                    help='Do not display figures interactively')
    args = ap.parse_args()

    if args.noshow:
        plt.switch_backend('Agg')

    fs    = args.f  * 1e6
    fi    = args.fi * 1e6
    iq    = 2 if fi == 0.0 else 1
    N     = int(fs * T_CODE)
    n_coh = int(args.t * 1e-3 / T_CODE)
    fds   = dop_grid(args.d)
    prns  = parse_prns(args.prn)

    if args.save:
        os.makedirs(args.save, exist_ok=True)

    duration = (n_coh + 1) * T_CODE
    print(f"\nFile     : {args.file}")
    print(f"fs       : {args.f} MHz  |  mode : {'IQ' if iq==2 else 'Real'}  |  N : {N} samp/ms")
    print(f"Doppler  : ±{args.d:.0f} Hz  ({len(fds)} bins)  "
          f"|  Integration : {args.t:.0f} ms  ({n_coh} periods)")

    data = read_if(args.file, fs, iq, duration)
    print(f"Samples  : {len(data)}\n")

    # ── Phase 1 : acquisition (tous PRNs) ────────────────────────────────────
    results = []
    t0 = time.time()
    for prn in prns:
        coff, dop, cn0 = acquire(prn, data, fs, fi, fds, N, n_coh)
        results.append({'prn': prn, 'coff_ms': coff, 'dop_hz': dop, 'cn0': cn0})
        mark = '  ◄ DETECTED' if cn0 >= THRES else ''
        print(f"  PRN {prn:>2} : DOP={dop:>+7.0f} Hz  C/N0={cn0:>5.1f} dB-Hz"
              f"  COFF={coff:.5f} ms{mark}")
    elapsed = time.time() - t0

    print_table(results, elapsed, args.file, args.f)
    if args.csv:
        save_csv(results, args.csv)

    # ── Figures ───────────────────────────────────────────────────────────────
    detected = [r for r in results if r['cn0'] >= THRES]
    idx = 1

    def spath(name):
        return os.path.join(args.save, name) if args.save else None

    print("  Generating figures...")

    # Fig 1 : Signal time domain + PSD
    plot_signal_psd(data, fs, filename=spath(f'fig_{idx:02d}_signal_psd.png'))
    idx += 1

    # Fig 2 : C/N0 bar chart
    plot_cn0_bar(results, filename=spath(f'fig_{idx:02d}_cn0_bar.png'))
    idx += 1

    # Fig 3+ : per detected satellite (re-run acquisition to get P matrix)
    if detected:
        print("  Computing acquisition maps for detected satellites...")
        for r in detected:
            coff, dop, cn0, P_norm, i_fd, i_co = acquire(
                r['prn'], data, fs, fi, fds, N, n_coh, return_map=True)
            plot_satellite(
                r['prn'], P_norm, fds, N, fs, coff, dop, cn0,
                filename=spath(f'fig_{idx:02d}_prn{r["prn"]:02d}.png'))
            idx += 1

    print(f"\n  {idx-1} figure(s) generated.")
    if args.save:
        print(f"  All saved in : {args.save}/")

    if not args.noshow:
        plt.show()

if __name__ == '__main__':
    main()
