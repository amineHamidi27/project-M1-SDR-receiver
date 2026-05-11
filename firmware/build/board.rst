                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module board
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _board_a_write_PARM_2
                                     12 	.globl _board_d_write_PARM_2
                                     13 	.globl _EIPX6
                                     14 	.globl _EIPX5
                                     15 	.globl _EIPX4
                                     16 	.globl _PI2C
                                     17 	.globl _PUSB
                                     18 	.globl _EIEX6
                                     19 	.globl _EIEX5
                                     20 	.globl _EIEX4
                                     21 	.globl _EI2C
                                     22 	.globl _EUSB
                                     23 	.globl _SMOD1
                                     24 	.globl _ERESI
                                     25 	.globl _RESI
                                     26 	.globl _INT6
                                     27 	.globl _CY
                                     28 	.globl _AC
                                     29 	.globl _F0
                                     30 	.globl _RS1
                                     31 	.globl _RS0
                                     32 	.globl _OV
                                     33 	.globl _FL
                                     34 	.globl _P
                                     35 	.globl _TF2
                                     36 	.globl _EXF2
                                     37 	.globl _RCLK
                                     38 	.globl _TCLK
                                     39 	.globl _EXEN2
                                     40 	.globl _TR2
                                     41 	.globl _C_T2
                                     42 	.globl _CP_RL2
                                     43 	.globl _SM01
                                     44 	.globl _SM11
                                     45 	.globl _SM21
                                     46 	.globl _REN1
                                     47 	.globl _TB81
                                     48 	.globl _RB81
                                     49 	.globl _TI1
                                     50 	.globl _RI1
                                     51 	.globl _PS1
                                     52 	.globl _PT2
                                     53 	.globl _PS0
                                     54 	.globl _PT1
                                     55 	.globl _PX1
                                     56 	.globl _PT0
                                     57 	.globl _PX0
                                     58 	.globl _PD7
                                     59 	.globl _PD6
                                     60 	.globl _PD5
                                     61 	.globl _PD4
                                     62 	.globl _PD3
                                     63 	.globl _PD2
                                     64 	.globl _PD1
                                     65 	.globl _PD0
                                     66 	.globl _EA
                                     67 	.globl _ES1
                                     68 	.globl _ET2
                                     69 	.globl _ES0
                                     70 	.globl _ET1
                                     71 	.globl _EX1
                                     72 	.globl _ET0
                                     73 	.globl _EX0
                                     74 	.globl _PC7
                                     75 	.globl _PC6
                                     76 	.globl _PC5
                                     77 	.globl _PC4
                                     78 	.globl _PC3
                                     79 	.globl _PC2
                                     80 	.globl _PC1
                                     81 	.globl _PC0
                                     82 	.globl _SM0
                                     83 	.globl _SM1
                                     84 	.globl _SM2
                                     85 	.globl _REN
                                     86 	.globl _TB8
                                     87 	.globl _RB8
                                     88 	.globl _TI
                                     89 	.globl _RI
                                     90 	.globl _PB7
                                     91 	.globl _PB6
                                     92 	.globl _PB5
                                     93 	.globl _PB4
                                     94 	.globl _PB3
                                     95 	.globl _PB2
                                     96 	.globl _PB1
                                     97 	.globl _PB0
                                     98 	.globl _TF1
                                     99 	.globl _TR1
                                    100 	.globl _TF0
                                    101 	.globl _TR0
                                    102 	.globl _IE1
                                    103 	.globl _IT1
                                    104 	.globl _IE0
                                    105 	.globl _IT0
                                    106 	.globl _PA7
                                    107 	.globl _PA6
                                    108 	.globl _PA5
                                    109 	.globl _PA4
                                    110 	.globl _PA3
                                    111 	.globl _PA2
                                    112 	.globl _PA1
                                    113 	.globl _PA0
                                    114 	.globl _EIP
                                    115 	.globl _B
                                    116 	.globl _EIE
                                    117 	.globl _ACC
                                    118 	.globl _EICON
                                    119 	.globl _PSW
                                    120 	.globl _TH2
                                    121 	.globl _TL2
                                    122 	.globl _RCAP2H
                                    123 	.globl _RCAP2L
                                    124 	.globl _T2CON
                                    125 	.globl _SBUF1
                                    126 	.globl _SCON1
                                    127 	.globl _GPIFSGLDATLNOX
                                    128 	.globl _GPIFSGLDATLX
                                    129 	.globl _GPIFSGLDATH
                                    130 	.globl _GPIFTRIG
                                    131 	.globl _EP01STAT
                                    132 	.globl _IP
                                    133 	.globl _OEE
                                    134 	.globl _OED
                                    135 	.globl _OEC
                                    136 	.globl _OEB
                                    137 	.globl _OEA
                                    138 	.globl _IOE
                                    139 	.globl _IOD
                                    140 	.globl _AUTOPTRSETUP
                                    141 	.globl _EP68FIFOFLGS
                                    142 	.globl _EP24FIFOFLGS
                                    143 	.globl _EP2468STAT
                                    144 	.globl _IE
                                    145 	.globl _INT4CLR
                                    146 	.globl _INT2CLR
                                    147 	.globl _IOC
                                    148 	.globl _AUTOPTRL2
                                    149 	.globl _AUTOPTRH2
                                    150 	.globl _AUTOPTRL1
                                    151 	.globl _AUTOPTRH1
                                    152 	.globl _SBUF0
                                    153 	.globl _SCON0
                                    154 	.globl __XPAGE
                                    155 	.globl _EXIF
                                    156 	.globl _IOB
                                    157 	.globl _CKCON
                                    158 	.globl _TH1
                                    159 	.globl _TH0
                                    160 	.globl _TL1
                                    161 	.globl _TL0
                                    162 	.globl _TMOD
                                    163 	.globl _TCON
                                    164 	.globl _PCON
                                    165 	.globl _DPS
                                    166 	.globl _DPH1
                                    167 	.globl _DPL1
                                    168 	.globl _DPH
                                    169 	.globl _DPL
                                    170 	.globl _SP
                                    171 	.globl _IOA
                                    172 	.globl _GPCR2
                                    173 	.globl _ECC2B2
                                    174 	.globl _ECC2B1
                                    175 	.globl _ECC2B0
                                    176 	.globl _ECC1B2
                                    177 	.globl _ECC1B1
                                    178 	.globl _ECC1B0
                                    179 	.globl _ECCRESET
                                    180 	.globl _ECCCFG
                                    181 	.globl _EP8FIFOBUF
                                    182 	.globl _EP6FIFOBUF
                                    183 	.globl _EP4FIFOBUF
                                    184 	.globl _EP2FIFOBUF
                                    185 	.globl _EP1INBUF
                                    186 	.globl _EP1OUTBUF
                                    187 	.globl _EP0BUF
                                    188 	.globl _UDMACRCQUAL
                                    189 	.globl _UDMACRCL
                                    190 	.globl _UDMACRCH
                                    191 	.globl _GPIFHOLDAMOUNT
                                    192 	.globl _FLOWSTBHPERIOD
                                    193 	.globl _FLOWSTBEDGE
                                    194 	.globl _FLOWSTB
                                    195 	.globl _FLOWHOLDOFF
                                    196 	.globl _FLOWEQ1CTL
                                    197 	.globl _FLOWEQ0CTL
                                    198 	.globl _FLOWLOGIC
                                    199 	.globl _FLOWSTATE
                                    200 	.globl _GPIFABORT
                                    201 	.globl _GPIFREADYSTAT
                                    202 	.globl _GPIFREADYCFG
                                    203 	.globl _XGPIFSGLDATLNOX
                                    204 	.globl _XGPIFSGLDATLX
                                    205 	.globl _XGPIFSGLDATH
                                    206 	.globl _EP8GPIFTRIG
                                    207 	.globl _EP8GPIFPFSTOP
                                    208 	.globl _EP8GPIFFLGSEL
                                    209 	.globl _EP6GPIFTRIG
                                    210 	.globl _EP6GPIFPFSTOP
                                    211 	.globl _EP6GPIFFLGSEL
                                    212 	.globl _EP4GPIFTRIG
                                    213 	.globl _EP4GPIFPFSTOP
                                    214 	.globl _EP4GPIFFLGSEL
                                    215 	.globl _EP2GPIFTRIG
                                    216 	.globl _EP2GPIFPFSTOP
                                    217 	.globl _EP2GPIFFLGSEL
                                    218 	.globl _GPIFTCB0
                                    219 	.globl _GPIFTCB1
                                    220 	.globl _GPIFTCB2
                                    221 	.globl _GPIFTCB3
                                    222 	.globl _GPIFADRL
                                    223 	.globl _GPIFADRH
                                    224 	.globl _GPIFCTLCFG
                                    225 	.globl _GPIFIDLECTL
                                    226 	.globl _GPIFIDLECS
                                    227 	.globl _GPIFWFSELECT
                                    228 	.globl _SETUPDAT
                                    229 	.globl _SUDPTRCTL
                                    230 	.globl _SUDPTRL
                                    231 	.globl _SUDPTRH
                                    232 	.globl _EP8FIFOBCL
                                    233 	.globl _EP8FIFOBCH
                                    234 	.globl _EP6FIFOBCL
                                    235 	.globl _EP6FIFOBCH
                                    236 	.globl _EP4FIFOBCL
                                    237 	.globl _EP4FIFOBCH
                                    238 	.globl _EP2FIFOBCL
                                    239 	.globl _EP2FIFOBCH
                                    240 	.globl _EP8FIFOFLGS
                                    241 	.globl _EP6FIFOFLGS
                                    242 	.globl _EP4FIFOFLGS
                                    243 	.globl _EP2FIFOFLGS
                                    244 	.globl _EP8CS
                                    245 	.globl _EP6CS
                                    246 	.globl _EP4CS
                                    247 	.globl _EP2CS
                                    248 	.globl _EP1INCS
                                    249 	.globl _EP1OUTCS
                                    250 	.globl _EP0CS
                                    251 	.globl _EP8BCL
                                    252 	.globl _EP8BCH
                                    253 	.globl _EP6BCL
                                    254 	.globl _EP6BCH
                                    255 	.globl _EP4BCL
                                    256 	.globl _EP4BCH
                                    257 	.globl _EP2BCL
                                    258 	.globl _EP2BCH
                                    259 	.globl _EP1INBC
                                    260 	.globl _EP1OUTBC
                                    261 	.globl _EP0BCL
                                    262 	.globl _EP0BCH
                                    263 	.globl _FNADDR
                                    264 	.globl _MICROFRAME
                                    265 	.globl _USBFRAMEL
                                    266 	.globl _USBFRAMEH
                                    267 	.globl _TOGCTL
                                    268 	.globl _WAKEUPCS
                                    269 	.globl _SUSPEND
                                    270 	.globl _USBCS
                                    271 	.globl _XAUTODAT2
                                    272 	.globl _XAUTODAT1
                                    273 	.globl _I2CTL
                                    274 	.globl _I2DAT
                                    275 	.globl _I2CS
                                    276 	.globl _PORTECFG
                                    277 	.globl _PORTCCFG
                                    278 	.globl _PORTACFG
                                    279 	.globl _INTSETUP
                                    280 	.globl _INT4IVEC
                                    281 	.globl _INT2IVEC
                                    282 	.globl _CLRERRCNT
                                    283 	.globl _ERRCNTLIM
                                    284 	.globl _USBERRIRQ
                                    285 	.globl _USBERRIE
                                    286 	.globl _GPIFIRQ
                                    287 	.globl _GPIFIE
                                    288 	.globl _EPIRQ
                                    289 	.globl _EPIE
                                    290 	.globl _USBIRQ
                                    291 	.globl _USBIE
                                    292 	.globl _NAKIRQ
                                    293 	.globl _NAKIE
                                    294 	.globl _IBNIRQ
                                    295 	.globl _IBNIE
                                    296 	.globl _EP8FIFOIRQ
                                    297 	.globl _EP8FIFOIE
                                    298 	.globl _EP6FIFOIRQ
                                    299 	.globl _EP6FIFOIE
                                    300 	.globl _EP4FIFOIRQ
                                    301 	.globl _EP4FIFOIE
                                    302 	.globl _EP2FIFOIRQ
                                    303 	.globl _EP2FIFOIE
                                    304 	.globl _OUTPKTEND
                                    305 	.globl _INPKTEND
                                    306 	.globl _EP8ISOINPKTS
                                    307 	.globl _EP6ISOINPKTS
                                    308 	.globl _EP4ISOINPKTS
                                    309 	.globl _EP2ISOINPKTS
                                    310 	.globl _EP8FIFOPFL
                                    311 	.globl _EP8FIFOPFH
                                    312 	.globl _EP6FIFOPFL
                                    313 	.globl _EP6FIFOPFH
                                    314 	.globl _EP4FIFOPFL
                                    315 	.globl _EP4FIFOPFH
                                    316 	.globl _EP2FIFOPFL
                                    317 	.globl _EP2FIFOPFH
                                    318 	.globl _EP8AUTOINLENL
                                    319 	.globl _EP8AUTOINLENH
                                    320 	.globl _EP6AUTOINLENL
                                    321 	.globl _EP6AUTOINLENH
                                    322 	.globl _EP4AUTOINLENL
                                    323 	.globl _EP4AUTOINLENH
                                    324 	.globl _EP2AUTOINLENL
                                    325 	.globl _EP2AUTOINLENH
                                    326 	.globl _EP8FIFOCFG
                                    327 	.globl _EP6FIFOCFG
                                    328 	.globl _EP4FIFOCFG
                                    329 	.globl _EP2FIFOCFG
                                    330 	.globl _EP8CFG
                                    331 	.globl _EP6CFG
                                    332 	.globl _EP4CFG
                                    333 	.globl _EP2CFG
                                    334 	.globl _EP1INCFG
                                    335 	.globl _EP1OUTCFG
                                    336 	.globl _REVCTL
                                    337 	.globl _REVID
                                    338 	.globl _FIFOPINPOLAR
                                    339 	.globl _UART230
                                    340 	.globl _BPADDRL
                                    341 	.globl _BPADDRH
                                    342 	.globl _BREAKPT
                                    343 	.globl _FIFORESET
                                    344 	.globl _PINFLAGSCD
                                    345 	.globl _PINFLAGSAB
                                    346 	.globl _IFCONFIG
                                    347 	.globl _CPUCS
                                    348 	.globl _RES_WAVEDATA_END
                                    349 	.globl _GPIF_WAVE_DATA
                                    350 	.globl _board_d_init_output
                                    351 	.globl _board_d_write
                                    352 	.globl _board_d_read
                                    353 	.globl _board_a_init_output
                                    354 	.globl _board_a_write
                                    355 	.globl _board_delay_cycles
                                    356 	.globl _board_spi_init
                                    357 	.globl _board_spi_sclk_pulse
                                    358 	.globl _board_spi_write_bit
                                    359 	.globl _board_spi_read_bit
                                    360 ;--------------------------------------------------------
                                    361 ; special function registers
                                    362 ;--------------------------------------------------------
                                    363 	.area RSEG    (ABS,DATA)
      000000                        364 	.org 0x0000
                           000080   365 _IOA	=	0x0080
                           000081   366 _SP	=	0x0081
                           000082   367 _DPL	=	0x0082
                           000083   368 _DPH	=	0x0083
                           000084   369 _DPL1	=	0x0084
                           000085   370 _DPH1	=	0x0085
                           000086   371 _DPS	=	0x0086
                           000087   372 _PCON	=	0x0087
                           000088   373 _TCON	=	0x0088
                           000089   374 _TMOD	=	0x0089
                           00008A   375 _TL0	=	0x008a
                           00008B   376 _TL1	=	0x008b
                           00008C   377 _TH0	=	0x008c
                           00008D   378 _TH1	=	0x008d
                           00008E   379 _CKCON	=	0x008e
                           000090   380 _IOB	=	0x0090
                           000091   381 _EXIF	=	0x0091
                           000092   382 __XPAGE	=	0x0092
                           000098   383 _SCON0	=	0x0098
                           000099   384 _SBUF0	=	0x0099
                           00009A   385 _AUTOPTRH1	=	0x009a
                           00009B   386 _AUTOPTRL1	=	0x009b
                           00009D   387 _AUTOPTRH2	=	0x009d
                           00009E   388 _AUTOPTRL2	=	0x009e
                           0000A0   389 _IOC	=	0x00a0
                           0000A1   390 _INT2CLR	=	0x00a1
                           0000A2   391 _INT4CLR	=	0x00a2
                           0000A8   392 _IE	=	0x00a8
                           0000AA   393 _EP2468STAT	=	0x00aa
                           0000AB   394 _EP24FIFOFLGS	=	0x00ab
                           0000AC   395 _EP68FIFOFLGS	=	0x00ac
                           0000AF   396 _AUTOPTRSETUP	=	0x00af
                           0000B0   397 _IOD	=	0x00b0
                           0000B1   398 _IOE	=	0x00b1
                           0000B2   399 _OEA	=	0x00b2
                           0000B3   400 _OEB	=	0x00b3
                           0000B4   401 _OEC	=	0x00b4
                           0000B5   402 _OED	=	0x00b5
                           0000B6   403 _OEE	=	0x00b6
                           0000B8   404 _IP	=	0x00b8
                           0000BA   405 _EP01STAT	=	0x00ba
                           0000BB   406 _GPIFTRIG	=	0x00bb
                           0000BD   407 _GPIFSGLDATH	=	0x00bd
                           0000BE   408 _GPIFSGLDATLX	=	0x00be
                           0000BF   409 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   410 _SCON1	=	0x00c0
                           0000C1   411 _SBUF1	=	0x00c1
                           0000C8   412 _T2CON	=	0x00c8
                           0000CA   413 _RCAP2L	=	0x00ca
                           0000CB   414 _RCAP2H	=	0x00cb
                           0000CC   415 _TL2	=	0x00cc
                           0000CD   416 _TH2	=	0x00cd
                           0000D0   417 _PSW	=	0x00d0
                           0000D8   418 _EICON	=	0x00d8
                           0000E0   419 _ACC	=	0x00e0
                           0000E8   420 _EIE	=	0x00e8
                           0000F0   421 _B	=	0x00f0
                           0000F8   422 _EIP	=	0x00f8
                                    423 ;--------------------------------------------------------
                                    424 ; special function bits
                                    425 ;--------------------------------------------------------
                                    426 	.area RSEG    (ABS,DATA)
      000000                        427 	.org 0x0000
                           000080   428 _PA0	=	0x0080
                           000081   429 _PA1	=	0x0081
                           000082   430 _PA2	=	0x0082
                           000083   431 _PA3	=	0x0083
                           000084   432 _PA4	=	0x0084
                           000085   433 _PA5	=	0x0085
                           000086   434 _PA6	=	0x0086
                           000087   435 _PA7	=	0x0087
                           000088   436 _IT0	=	0x0088
                           000089   437 _IE0	=	0x0089
                           00008A   438 _IT1	=	0x008a
                           00008B   439 _IE1	=	0x008b
                           00008C   440 _TR0	=	0x008c
                           00008D   441 _TF0	=	0x008d
                           00008E   442 _TR1	=	0x008e
                           00008F   443 _TF1	=	0x008f
                           000090   444 _PB0	=	0x0090
                           000091   445 _PB1	=	0x0091
                           000092   446 _PB2	=	0x0092
                           000093   447 _PB3	=	0x0093
                           000094   448 _PB4	=	0x0094
                           000095   449 _PB5	=	0x0095
                           000096   450 _PB6	=	0x0096
                           000097   451 _PB7	=	0x0097
                           000098   452 _RI	=	0x0098
                           000099   453 _TI	=	0x0099
                           00009A   454 _RB8	=	0x009a
                           00009B   455 _TB8	=	0x009b
                           00009C   456 _REN	=	0x009c
                           00009D   457 _SM2	=	0x009d
                           00009E   458 _SM1	=	0x009e
                           00009F   459 _SM0	=	0x009f
                           0000A0   460 _PC0	=	0x00a0
                           0000A1   461 _PC1	=	0x00a1
                           0000A2   462 _PC2	=	0x00a2
                           0000A3   463 _PC3	=	0x00a3
                           0000A4   464 _PC4	=	0x00a4
                           0000A5   465 _PC5	=	0x00a5
                           0000A6   466 _PC6	=	0x00a6
                           0000A7   467 _PC7	=	0x00a7
                           0000A8   468 _EX0	=	0x00a8
                           0000A9   469 _ET0	=	0x00a9
                           0000AA   470 _EX1	=	0x00aa
                           0000AB   471 _ET1	=	0x00ab
                           0000AC   472 _ES0	=	0x00ac
                           0000AD   473 _ET2	=	0x00ad
                           0000AE   474 _ES1	=	0x00ae
                           0000AF   475 _EA	=	0x00af
                           0000B0   476 _PD0	=	0x00b0
                           0000B1   477 _PD1	=	0x00b1
                           0000B2   478 _PD2	=	0x00b2
                           0000B3   479 _PD3	=	0x00b3
                           0000B4   480 _PD4	=	0x00b4
                           0000B5   481 _PD5	=	0x00b5
                           0000B6   482 _PD6	=	0x00b6
                           0000B7   483 _PD7	=	0x00b7
                           0000B8   484 _PX0	=	0x00b8
                           0000B9   485 _PT0	=	0x00b9
                           0000BA   486 _PX1	=	0x00ba
                           0000BB   487 _PT1	=	0x00bb
                           0000BC   488 _PS0	=	0x00bc
                           0000BD   489 _PT2	=	0x00bd
                           0000BE   490 _PS1	=	0x00be
                           0000C0   491 _RI1	=	0x00c0
                           0000C1   492 _TI1	=	0x00c1
                           0000C2   493 _RB81	=	0x00c2
                           0000C3   494 _TB81	=	0x00c3
                           0000C4   495 _REN1	=	0x00c4
                           0000C5   496 _SM21	=	0x00c5
                           0000C6   497 _SM11	=	0x00c6
                           0000C7   498 _SM01	=	0x00c7
                           0000C8   499 _CP_RL2	=	0x00c8
                           0000C9   500 _C_T2	=	0x00c9
                           0000CA   501 _TR2	=	0x00ca
                           0000CB   502 _EXEN2	=	0x00cb
                           0000CC   503 _TCLK	=	0x00cc
                           0000CD   504 _RCLK	=	0x00cd
                           0000CE   505 _EXF2	=	0x00ce
                           0000CF   506 _TF2	=	0x00cf
                           0000D0   507 _P	=	0x00d0
                           0000D1   508 _FL	=	0x00d1
                           0000D2   509 _OV	=	0x00d2
                           0000D3   510 _RS0	=	0x00d3
                           0000D4   511 _RS1	=	0x00d4
                           0000D5   512 _F0	=	0x00d5
                           0000D6   513 _AC	=	0x00d6
                           0000D7   514 _CY	=	0x00d7
                           0000DB   515 _INT6	=	0x00db
                           0000DC   516 _RESI	=	0x00dc
                           0000DD   517 _ERESI	=	0x00dd
                           0000DF   518 _SMOD1	=	0x00df
                           0000E8   519 _EUSB	=	0x00e8
                           0000E9   520 _EI2C	=	0x00e9
                           0000EA   521 _EIEX4	=	0x00ea
                           0000EB   522 _EIEX5	=	0x00eb
                           0000EC   523 _EIEX6	=	0x00ec
                           0000F8   524 _PUSB	=	0x00f8
                           0000F9   525 _PI2C	=	0x00f9
                           0000FA   526 _EIPX4	=	0x00fa
                           0000FB   527 _EIPX5	=	0x00fb
                           0000FC   528 _EIPX6	=	0x00fc
                                    529 ;--------------------------------------------------------
                                    530 ; overlayable register banks
                                    531 ;--------------------------------------------------------
                                    532 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        533 	.ds 8
                                    534 ;--------------------------------------------------------
                                    535 ; internal ram data
                                    536 ;--------------------------------------------------------
                                    537 	.area DSEG    (DATA)
                                    538 ;--------------------------------------------------------
                                    539 ; overlayable items in internal ram
                                    540 ;--------------------------------------------------------
                                    541 	.area	OSEG    (OVR,DATA)
                                    542 	.area	OSEG    (OVR,DATA)
      00001C                        543 _board_d_write_PARM_2:
      00001C                        544 	.ds 1
                                    545 	.area	OSEG    (OVR,DATA)
                                    546 	.area	OSEG    (OVR,DATA)
                                    547 	.area	OSEG    (OVR,DATA)
      00001C                        548 _board_a_write_PARM_2:
      00001C                        549 	.ds 1
                                    550 	.area	OSEG    (OVR,DATA)
      00001C                        551 _board_delay_cycles_i_10000_26:
      00001C                        552 	.ds 1
                                    553 ;--------------------------------------------------------
                                    554 ; indirectly addressable internal ram data
                                    555 ;--------------------------------------------------------
                                    556 	.area ISEG    (DATA)
                                    557 ;--------------------------------------------------------
                                    558 ; absolute internal ram data
                                    559 ;--------------------------------------------------------
                                    560 	.area IABS    (ABS,DATA)
                                    561 	.area IABS    (ABS,DATA)
                                    562 ;--------------------------------------------------------
                                    563 ; bit data
                                    564 ;--------------------------------------------------------
                                    565 	.area BSEG    (BIT)
                                    566 ;--------------------------------------------------------
                                    567 ; paged external ram data
                                    568 ;--------------------------------------------------------
                                    569 	.area PSEG    (PAG,XDATA)
                                    570 ;--------------------------------------------------------
                                    571 ; uninitialized external ram data
                                    572 ;--------------------------------------------------------
                                    573 	.area XSEG    (XDATA)
                           00E400   574 _GPIF_WAVE_DATA	=	0xe400
                           00E480   575 _RES_WAVEDATA_END	=	0xe480
                           00E600   576 _CPUCS	=	0xe600
                           00E601   577 _IFCONFIG	=	0xe601
                           00E602   578 _PINFLAGSAB	=	0xe602
                           00E603   579 _PINFLAGSCD	=	0xe603
                           00E604   580 _FIFORESET	=	0xe604
                           00E605   581 _BREAKPT	=	0xe605
                           00E606   582 _BPADDRH	=	0xe606
                           00E607   583 _BPADDRL	=	0xe607
                           00E608   584 _UART230	=	0xe608
                           00E609   585 _FIFOPINPOLAR	=	0xe609
                           00E60A   586 _REVID	=	0xe60a
                           00E60B   587 _REVCTL	=	0xe60b
                           00E610   588 _EP1OUTCFG	=	0xe610
                           00E611   589 _EP1INCFG	=	0xe611
                           00E612   590 _EP2CFG	=	0xe612
                           00E613   591 _EP4CFG	=	0xe613
                           00E614   592 _EP6CFG	=	0xe614
                           00E615   593 _EP8CFG	=	0xe615
                           00E618   594 _EP2FIFOCFG	=	0xe618
                           00E619   595 _EP4FIFOCFG	=	0xe619
                           00E61A   596 _EP6FIFOCFG	=	0xe61a
                           00E61B   597 _EP8FIFOCFG	=	0xe61b
                           00E620   598 _EP2AUTOINLENH	=	0xe620
                           00E621   599 _EP2AUTOINLENL	=	0xe621
                           00E622   600 _EP4AUTOINLENH	=	0xe622
                           00E623   601 _EP4AUTOINLENL	=	0xe623
                           00E624   602 _EP6AUTOINLENH	=	0xe624
                           00E625   603 _EP6AUTOINLENL	=	0xe625
                           00E626   604 _EP8AUTOINLENH	=	0xe626
                           00E627   605 _EP8AUTOINLENL	=	0xe627
                           00E630   606 _EP2FIFOPFH	=	0xe630
                           00E631   607 _EP2FIFOPFL	=	0xe631
                           00E632   608 _EP4FIFOPFH	=	0xe632
                           00E633   609 _EP4FIFOPFL	=	0xe633
                           00E634   610 _EP6FIFOPFH	=	0xe634
                           00E635   611 _EP6FIFOPFL	=	0xe635
                           00E636   612 _EP8FIFOPFH	=	0xe636
                           00E637   613 _EP8FIFOPFL	=	0xe637
                           00E640   614 _EP2ISOINPKTS	=	0xe640
                           00E641   615 _EP4ISOINPKTS	=	0xe641
                           00E642   616 _EP6ISOINPKTS	=	0xe642
                           00E643   617 _EP8ISOINPKTS	=	0xe643
                           00E648   618 _INPKTEND	=	0xe648
                           00E649   619 _OUTPKTEND	=	0xe649
                           00E650   620 _EP2FIFOIE	=	0xe650
                           00E651   621 _EP2FIFOIRQ	=	0xe651
                           00E652   622 _EP4FIFOIE	=	0xe652
                           00E653   623 _EP4FIFOIRQ	=	0xe653
                           00E654   624 _EP6FIFOIE	=	0xe654
                           00E655   625 _EP6FIFOIRQ	=	0xe655
                           00E656   626 _EP8FIFOIE	=	0xe656
                           00E657   627 _EP8FIFOIRQ	=	0xe657
                           00E658   628 _IBNIE	=	0xe658
                           00E659   629 _IBNIRQ	=	0xe659
                           00E65A   630 _NAKIE	=	0xe65a
                           00E65B   631 _NAKIRQ	=	0xe65b
                           00E65C   632 _USBIE	=	0xe65c
                           00E65D   633 _USBIRQ	=	0xe65d
                           00E65E   634 _EPIE	=	0xe65e
                           00E65F   635 _EPIRQ	=	0xe65f
                           00E660   636 _GPIFIE	=	0xe660
                           00E661   637 _GPIFIRQ	=	0xe661
                           00E662   638 _USBERRIE	=	0xe662
                           00E663   639 _USBERRIRQ	=	0xe663
                           00E664   640 _ERRCNTLIM	=	0xe664
                           00E665   641 _CLRERRCNT	=	0xe665
                           00E666   642 _INT2IVEC	=	0xe666
                           00E667   643 _INT4IVEC	=	0xe667
                           00E668   644 _INTSETUP	=	0xe668
                           00E670   645 _PORTACFG	=	0xe670
                           00E671   646 _PORTCCFG	=	0xe671
                           00E672   647 _PORTECFG	=	0xe672
                           00E678   648 _I2CS	=	0xe678
                           00E679   649 _I2DAT	=	0xe679
                           00E67A   650 _I2CTL	=	0xe67a
                           00E67B   651 _XAUTODAT1	=	0xe67b
                           00E67C   652 _XAUTODAT2	=	0xe67c
                           00E680   653 _USBCS	=	0xe680
                           00E681   654 _SUSPEND	=	0xe681
                           00E682   655 _WAKEUPCS	=	0xe682
                           00E683   656 _TOGCTL	=	0xe683
                           00E684   657 _USBFRAMEH	=	0xe684
                           00E685   658 _USBFRAMEL	=	0xe685
                           00E686   659 _MICROFRAME	=	0xe686
                           00E687   660 _FNADDR	=	0xe687
                           00E68A   661 _EP0BCH	=	0xe68a
                           00E68B   662 _EP0BCL	=	0xe68b
                           00E68D   663 _EP1OUTBC	=	0xe68d
                           00E68F   664 _EP1INBC	=	0xe68f
                           00E690   665 _EP2BCH	=	0xe690
                           00E691   666 _EP2BCL	=	0xe691
                           00E694   667 _EP4BCH	=	0xe694
                           00E695   668 _EP4BCL	=	0xe695
                           00E698   669 _EP6BCH	=	0xe698
                           00E699   670 _EP6BCL	=	0xe699
                           00E69C   671 _EP8BCH	=	0xe69c
                           00E69D   672 _EP8BCL	=	0xe69d
                           00E6A0   673 _EP0CS	=	0xe6a0
                           00E6A1   674 _EP1OUTCS	=	0xe6a1
                           00E6A2   675 _EP1INCS	=	0xe6a2
                           00E6A3   676 _EP2CS	=	0xe6a3
                           00E6A4   677 _EP4CS	=	0xe6a4
                           00E6A5   678 _EP6CS	=	0xe6a5
                           00E6A6   679 _EP8CS	=	0xe6a6
                           00E6A7   680 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   681 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   682 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   683 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   684 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   685 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   686 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   687 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   688 _EP6FIFOBCH	=	0xe6af
                           00E6B0   689 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   690 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   691 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   692 _SUDPTRH	=	0xe6b3
                           00E6B4   693 _SUDPTRL	=	0xe6b4
                           00E6B5   694 _SUDPTRCTL	=	0xe6b5
                           00E6B8   695 _SETUPDAT	=	0xe6b8
                           00E6C0   696 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   697 _GPIFIDLECS	=	0xe6c1
                           00E6C2   698 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   699 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   700 _GPIFADRH	=	0xe6c4
                           00E6C5   701 _GPIFADRL	=	0xe6c5
                           00E6CE   702 _GPIFTCB3	=	0xe6ce
                           00E6CF   703 _GPIFTCB2	=	0xe6cf
                           00E6D0   704 _GPIFTCB1	=	0xe6d0
                           00E6D1   705 _GPIFTCB0	=	0xe6d1
                           00E6D2   706 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   707 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   708 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   709 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   710 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   711 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   712 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   713 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   714 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   715 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   716 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   717 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   718 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   719 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   720 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   721 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   722 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   723 _GPIFABORT	=	0xe6f5
                           00E6C6   724 _FLOWSTATE	=	0xe6c6
                           00E6C7   725 _FLOWLOGIC	=	0xe6c7
                           00E6C8   726 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   727 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   728 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   729 _FLOWSTB	=	0xe6cb
                           00E6CC   730 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   731 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   732 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   733 _UDMACRCH	=	0xe67d
                           00E67E   734 _UDMACRCL	=	0xe67e
                           00E67F   735 _UDMACRCQUAL	=	0xe67f
                           00E740   736 _EP0BUF	=	0xe740
                           00E780   737 _EP1OUTBUF	=	0xe780
                           00E7C0   738 _EP1INBUF	=	0xe7c0
                           00F000   739 _EP2FIFOBUF	=	0xf000
                           00F400   740 _EP4FIFOBUF	=	0xf400
                           00F800   741 _EP6FIFOBUF	=	0xf800
                           00FC00   742 _EP8FIFOBUF	=	0xfc00
                           00E628   743 _ECCCFG	=	0xe628
                           00E629   744 _ECCRESET	=	0xe629
                           00E62A   745 _ECC1B0	=	0xe62a
                           00E62B   746 _ECC1B1	=	0xe62b
                           00E62C   747 _ECC1B2	=	0xe62c
                           00E62D   748 _ECC2B0	=	0xe62d
                           00E62E   749 _ECC2B1	=	0xe62e
                           00E62F   750 _ECC2B2	=	0xe62f
                           00E50D   751 _GPCR2	=	0xe50d
                                    752 ;--------------------------------------------------------
                                    753 ; absolute external ram data
                                    754 ;--------------------------------------------------------
                                    755 	.area XABS    (ABS,XDATA)
                                    756 ;--------------------------------------------------------
                                    757 ; initialized external ram data
                                    758 ;--------------------------------------------------------
                                    759 	.area XISEG   (XDATA)
                                    760 	.area HOME    (CODE)
                                    761 	.area GSINIT0 (CODE)
                                    762 	.area GSINIT1 (CODE)
                                    763 	.area GSINIT2 (CODE)
                                    764 	.area GSINIT3 (CODE)
                                    765 	.area GSINIT4 (CODE)
                                    766 	.area GSINIT5 (CODE)
                                    767 	.area GSINIT  (CODE)
                                    768 	.area GSFINAL (CODE)
                                    769 	.area CSEG    (CODE)
                                    770 ;--------------------------------------------------------
                                    771 ; global & static initialisations
                                    772 ;--------------------------------------------------------
                                    773 	.area HOME    (CODE)
                                    774 	.area GSINIT  (CODE)
                                    775 	.area GSFINAL (CODE)
                                    776 	.area GSINIT  (CODE)
                                    777 ;--------------------------------------------------------
                                    778 ; Home
                                    779 ;--------------------------------------------------------
                                    780 	.area HOME    (CODE)
                                    781 	.area HOME    (CODE)
                                    782 ;--------------------------------------------------------
                                    783 ; code
                                    784 ;--------------------------------------------------------
                                    785 	.area CSEG    (CODE)
                                    786 ;------------------------------------------------------------
                                    787 ;Allocation info for local variables in function 'board_d_init_output'
                                    788 ;------------------------------------------------------------
                                    789 ;pin           Allocated to registers r7 
                                    790 ;------------------------------------------------------------
                                    791 ;	build/../board.c:3: void board_d_init_output(uint8_t pin) {
                                    792 ;	-----------------------------------------
                                    793 ;	 function board_d_init_output
                                    794 ;	-----------------------------------------
      000621                        795 _board_d_init_output:
                           000007   796 	ar7 = 0x07
                           000006   797 	ar6 = 0x06
                           000005   798 	ar5 = 0x05
                           000004   799 	ar4 = 0x04
                           000003   800 	ar3 = 0x03
                           000002   801 	ar2 = 0x02
                           000001   802 	ar1 = 0x01
                           000000   803 	ar0 = 0x00
      000621 AF 82            [24]  804 	mov	r7, dpl
                                    805 ;	build/../board.c:4: OED |= (1U << pin);
      000623 8F F0            [24]  806 	mov	b,r7
      000625 05 F0            [12]  807 	inc	b
      000627 74 01            [12]  808 	mov	a,#0x01
      000629 80 02            [24]  809 	sjmp	00104$
      00062B                        810 00103$:
      00062B 25 E0            [12]  811 	add	a,acc
      00062D                        812 00104$:
      00062D D5 F0 FB         [24]  813 	djnz	b,00103$
      000630 42 B5            [12]  814 	orl	_OED,a
                                    815 ;	build/../board.c:5: }
      000632 22               [24]  816 	ret
                                    817 ;------------------------------------------------------------
                                    818 ;Allocation info for local variables in function 'board_d_write'
                                    819 ;------------------------------------------------------------
                                    820 ;state         Allocated with name '_board_d_write_PARM_2'
                                    821 ;pin           Allocated to registers r7 
                                    822 ;------------------------------------------------------------
                                    823 ;	build/../board.c:7: void board_d_write(uint8_t pin, pin_state_t state) {
                                    824 ;	-----------------------------------------
                                    825 ;	 function board_d_write
                                    826 ;	-----------------------------------------
      000633                        827 _board_d_write:
      000633 AF 82            [24]  828 	mov	r7, dpl
                                    829 ;	build/../board.c:8: if (state == PIN_HIGH) {
      000635 E5 1C            [12]  830 	mov	a,_board_d_write_PARM_2
      000637 60 10            [24]  831 	jz	00102$
                                    832 ;	build/../board.c:9: IOD |= (1U << pin);
      000639 8F F0            [24]  833 	mov	b,r7
      00063B 05 F0            [12]  834 	inc	b
      00063D 74 01            [12]  835 	mov	a,#0x01
      00063F 80 02            [24]  836 	sjmp	00114$
      000641                        837 00113$:
      000641 25 E0            [12]  838 	add	a,acc
      000643                        839 00114$:
      000643 D5 F0 FB         [24]  840 	djnz	b,00113$
      000646 42 B0            [12]  841 	orl	_IOD,a
      000648 22               [24]  842 	ret
      000649                        843 00102$:
                                    844 ;	build/../board.c:11: IOD &= ~(1U << pin);
      000649 8F F0            [24]  845 	mov	b,r7
      00064B 05 F0            [12]  846 	inc	b
      00064D 74 01            [12]  847 	mov	a,#0x01
      00064F 80 02            [24]  848 	sjmp	00116$
      000651                        849 00115$:
      000651 25 E0            [12]  850 	add	a,acc
      000653                        851 00116$:
      000653 D5 F0 FB         [24]  852 	djnz	b,00115$
      000656 F4               [12]  853 	cpl	a
      000657 52 B0            [12]  854 	anl	_IOD,a
                                    855 ;	build/../board.c:13: }
      000659 22               [24]  856 	ret
                                    857 ;------------------------------------------------------------
                                    858 ;Allocation info for local variables in function 'board_d_read'
                                    859 ;------------------------------------------------------------
                                    860 ;pin           Allocated to registers r7 
                                    861 ;------------------------------------------------------------
                                    862 ;	build/../board.c:15: pin_state_t board_d_read(uint8_t pin) {
                                    863 ;	-----------------------------------------
                                    864 ;	 function board_d_read
                                    865 ;	-----------------------------------------
      00065A                        866 _board_d_read:
      00065A AF 82            [24]  867 	mov	r7, dpl
                                    868 ;	build/../board.c:16: OED &= ~(1U << pin);
      00065C 8F F0            [24]  869 	mov	b,r7
      00065E 05 F0            [12]  870 	inc	b
      000660 74 01            [12]  871 	mov	a,#0x01
      000662 80 02            [24]  872 	sjmp	00104$
      000664                        873 00103$:
      000664 25 E0            [12]  874 	add	a,acc
      000666                        875 00104$:
      000666 D5 F0 FB         [24]  876 	djnz	b,00103$
      000669 F4               [12]  877 	cpl	a
      00066A 52 B5            [12]  878 	anl	_OED,a
                                    879 ;	build/../board.c:17: return (IOD & (1U << pin)) ? PIN_HIGH : PIN_LOW;
      00066C 8F F0            [24]  880 	mov	b,r7
      00066E 05 F0            [12]  881 	inc	b
      000670 7F 01            [12]  882 	mov	r7,#0x01
      000672 7E 00            [12]  883 	mov	r6,#0x00
      000674 80 06            [24]  884 	sjmp	00106$
      000676                        885 00105$:
      000676 EF               [12]  886 	mov	a,r7
      000677 2F               [12]  887 	add	a,r7
      000678 FF               [12]  888 	mov	r7,a
      000679 EE               [12]  889 	mov	a,r6
      00067A 33               [12]  890 	rlc	a
      00067B FE               [12]  891 	mov	r6,a
      00067C                        892 00106$:
      00067C D5 F0 F7         [24]  893 	djnz	b,00105$
      00067F AC B0            [24]  894 	mov	r4,_IOD
      000681 7D 00            [12]  895 	mov	r5,#0x00
      000683 EC               [12]  896 	mov	a,r4
      000684 52 07            [12]  897 	anl	ar7,a
      000686 ED               [12]  898 	mov	a,r5
      000687 52 06            [12]  899 	anl	ar6,a
                                    900 ;	assignBit
      000689 EF               [12]  901 	mov	a,r7
      00068A 4E               [12]  902 	orl	a,r6
      00068B 24 FF            [12]  903 	add	a,#0xff
      00068D E4               [12]  904 	clr	a
      00068E 33               [12]  905 	rlc	a
      00068F F5 82            [12]  906 	mov	dpl,a
                                    907 ;	build/../board.c:18: }
      000691 22               [24]  908 	ret
                                    909 ;------------------------------------------------------------
                                    910 ;Allocation info for local variables in function 'board_a_init_output'
                                    911 ;------------------------------------------------------------
                                    912 ;pin           Allocated to registers r7 
                                    913 ;------------------------------------------------------------
                                    914 ;	build/../board.c:20: void board_a_init_output(uint8_t pin) {
                                    915 ;	-----------------------------------------
                                    916 ;	 function board_a_init_output
                                    917 ;	-----------------------------------------
      000692                        918 _board_a_init_output:
      000692 AF 82            [24]  919 	mov	r7, dpl
                                    920 ;	build/../board.c:21: OEA |= (1U << pin);
      000694 8F F0            [24]  921 	mov	b,r7
      000696 05 F0            [12]  922 	inc	b
      000698 74 01            [12]  923 	mov	a,#0x01
      00069A 80 02            [24]  924 	sjmp	00104$
      00069C                        925 00103$:
      00069C 25 E0            [12]  926 	add	a,acc
      00069E                        927 00104$:
      00069E D5 F0 FB         [24]  928 	djnz	b,00103$
      0006A1 42 B2            [12]  929 	orl	_OEA,a
                                    930 ;	build/../board.c:22: }
      0006A3 22               [24]  931 	ret
                                    932 ;------------------------------------------------------------
                                    933 ;Allocation info for local variables in function 'board_a_write'
                                    934 ;------------------------------------------------------------
                                    935 ;state         Allocated with name '_board_a_write_PARM_2'
                                    936 ;pin           Allocated to registers r7 
                                    937 ;------------------------------------------------------------
                                    938 ;	build/../board.c:24: void board_a_write(uint8_t pin, pin_state_t state) {
                                    939 ;	-----------------------------------------
                                    940 ;	 function board_a_write
                                    941 ;	-----------------------------------------
      0006A4                        942 _board_a_write:
      0006A4 AF 82            [24]  943 	mov	r7, dpl
                                    944 ;	build/../board.c:25: if (state == PIN_HIGH) {
      0006A6 E5 1C            [12]  945 	mov	a,_board_a_write_PARM_2
      0006A8 60 10            [24]  946 	jz	00102$
                                    947 ;	build/../board.c:26: IOA |= (1U << pin);
      0006AA 8F F0            [24]  948 	mov	b,r7
      0006AC 05 F0            [12]  949 	inc	b
      0006AE 74 01            [12]  950 	mov	a,#0x01
      0006B0 80 02            [24]  951 	sjmp	00114$
      0006B2                        952 00113$:
      0006B2 25 E0            [12]  953 	add	a,acc
      0006B4                        954 00114$:
      0006B4 D5 F0 FB         [24]  955 	djnz	b,00113$
      0006B7 42 80            [12]  956 	orl	_IOA,a
      0006B9 22               [24]  957 	ret
      0006BA                        958 00102$:
                                    959 ;	build/../board.c:28: IOA &= ~(1U << pin);
      0006BA 8F F0            [24]  960 	mov	b,r7
      0006BC 05 F0            [12]  961 	inc	b
      0006BE 74 01            [12]  962 	mov	a,#0x01
      0006C0 80 02            [24]  963 	sjmp	00116$
      0006C2                        964 00115$:
      0006C2 25 E0            [12]  965 	add	a,acc
      0006C4                        966 00116$:
      0006C4 D5 F0 FB         [24]  967 	djnz	b,00115$
      0006C7 F4               [12]  968 	cpl	a
      0006C8 52 80            [12]  969 	anl	_IOA,a
                                    970 ;	build/../board.c:30: }
      0006CA 22               [24]  971 	ret
                                    972 ;------------------------------------------------------------
                                    973 ;Allocation info for local variables in function 'board_delay_cycles'
                                    974 ;------------------------------------------------------------
                                    975 ;cycles        Allocated to registers 
                                    976 ;i             Allocated with name '_board_delay_cycles_i_10000_26'
                                    977 ;------------------------------------------------------------
                                    978 ;	build/../board.c:32: void board_delay_cycles(uint8_t cycles) {
                                    979 ;	-----------------------------------------
                                    980 ;	 function board_delay_cycles
                                    981 ;	-----------------------------------------
      0006CB                        982 _board_delay_cycles:
      0006CB 85 82 1C         [24]  983 	mov	_board_delay_cycles_i_10000_26,dpl
                                    984 ;	build/../board.c:34: for (i = cycles; i > 0; i--) {
      0006CE                        985 00103$:
      0006CE E5 1C            [12]  986 	mov	a,_board_delay_cycles_i_10000_26
      0006D0 60 07            [24]  987 	jz	00105$
      0006D2 E5 1C            [12]  988 	mov	a,_board_delay_cycles_i_10000_26
      0006D4 14               [12]  989 	dec	a
      0006D5 F5 1C            [12]  990 	mov	_board_delay_cycles_i_10000_26,a
      0006D7 80 F5            [24]  991 	sjmp	00103$
      0006D9                        992 00105$:
                                    993 ;	build/../board.c:37: }
      0006D9 22               [24]  994 	ret
                                    995 ;------------------------------------------------------------
                                    996 ;Allocation info for local variables in function 'board_spi_init'
                                    997 ;------------------------------------------------------------
                                    998 ;	build/../board.c:39: void board_spi_init(void) {
                                    999 ;	-----------------------------------------
                                   1000 ;	 function board_spi_init
                                   1001 ;	-----------------------------------------
      0006DA                       1002 _board_spi_init:
                                   1003 ;	build/../board.c:40: OED |= (1U << 2) | (1U << 3); /* SCLK and SDATA as output */
      0006DA 43 B5 0C         [24] 1004 	orl	_OED,#0x0c
                                   1005 ;	build/../board.c:41: board_d_write(2, PIN_LOW); /* SCLK default low */
      0006DD 75 1C 00         [24] 1006 	mov	_board_d_write_PARM_2,#0x00
      0006E0 75 82 02         [24] 1007 	mov	dpl, #0x02
                                   1008 ;	build/../board.c:42: }
      0006E3 02 06 33         [24] 1009 	ljmp	_board_d_write
                                   1010 ;------------------------------------------------------------
                                   1011 ;Allocation info for local variables in function 'board_spi_sclk_pulse'
                                   1012 ;------------------------------------------------------------
                                   1013 ;	build/../board.c:44: void board_spi_sclk_pulse(void) {
                                   1014 ;	-----------------------------------------
                                   1015 ;	 function board_spi_sclk_pulse
                                   1016 ;	-----------------------------------------
      0006E6                       1017 _board_spi_sclk_pulse:
                                   1018 ;	build/../board.c:45: OED |= (1U << 2); /* Ensure SCLK is output */
      0006E6 43 B5 04         [24] 1019 	orl	_OED,#0x04
                                   1020 ;	build/../board.c:46: board_d_write(2, PIN_HIGH);
      0006E9 75 1C 01         [24] 1021 	mov	_board_d_write_PARM_2,#0x01
      0006EC 75 82 02         [24] 1022 	mov	dpl, #0x02
      0006EF 12 06 33         [24] 1023 	lcall	_board_d_write
                                   1024 ;	build/../board.c:47: board_delay_cycles(SCLK_DELAY_CYCLES);
      0006F2 75 82 03         [24] 1025 	mov	dpl, #0x03
      0006F5 12 06 CB         [24] 1026 	lcall	_board_delay_cycles
                                   1027 ;	build/../board.c:48: board_d_write(2, PIN_LOW);
      0006F8 75 1C 00         [24] 1028 	mov	_board_d_write_PARM_2,#0x00
      0006FB 75 82 02         [24] 1029 	mov	dpl, #0x02
      0006FE 12 06 33         [24] 1030 	lcall	_board_d_write
                                   1031 ;	build/../board.c:49: board_delay_cycles(SCLK_DELAY_CYCLES);
      000701 75 82 03         [24] 1032 	mov	dpl, #0x03
                                   1033 ;	build/../board.c:50: }
      000704 02 06 CB         [24] 1034 	ljmp	_board_delay_cycles
                                   1035 ;------------------------------------------------------------
                                   1036 ;Allocation info for local variables in function 'board_spi_write_bit'
                                   1037 ;------------------------------------------------------------
                                   1038 ;bit           Allocated to registers r7 
                                   1039 ;------------------------------------------------------------
                                   1040 ;	build/../board.c:52: void board_spi_write_bit(pin_state_t bit) {
                                   1041 ;	-----------------------------------------
                                   1042 ;	 function board_spi_write_bit
                                   1043 ;	-----------------------------------------
      000707                       1044 _board_spi_write_bit:
      000707 AF 82            [24] 1045 	mov	r7, dpl
                                   1046 ;	build/../board.c:53: OED |= (1U << 3); /* Ensure SDATA is output */
      000709 43 B5 08         [24] 1047 	orl	_OED,#0x08
                                   1048 ;	build/../board.c:54: board_d_write(3, bit); /* SDATA */
      00070C 8F 1C            [24] 1049 	mov	_board_d_write_PARM_2,r7
      00070E 75 82 03         [24] 1050 	mov	dpl, #0x03
      000711 12 06 33         [24] 1051 	lcall	_board_d_write
                                   1052 ;	build/../board.c:55: board_spi_sclk_pulse();
                                   1053 ;	build/../board.c:56: }
      000714 02 06 E6         [24] 1054 	ljmp	_board_spi_sclk_pulse
                                   1055 ;------------------------------------------------------------
                                   1056 ;Allocation info for local variables in function 'board_spi_read_bit'
                                   1057 ;------------------------------------------------------------
                                   1058 ;bit           Allocated to registers r7 
                                   1059 ;------------------------------------------------------------
                                   1060 ;	build/../board.c:58: pin_state_t board_spi_read_bit(void) {
                                   1061 ;	-----------------------------------------
                                   1062 ;	 function board_spi_read_bit
                                   1063 ;	-----------------------------------------
      000717                       1064 _board_spi_read_bit:
                                   1065 ;	build/../board.c:59: pin_state_t bit = board_d_read(3); /* SDATA */
      000717 75 82 03         [24] 1066 	mov	dpl, #0x03
      00071A 12 06 5A         [24] 1067 	lcall	_board_d_read
      00071D AF 82            [24] 1068 	mov	r7, dpl
                                   1069 ;	build/../board.c:60: board_spi_sclk_pulse();
      00071F C0 07            [24] 1070 	push	ar7
      000721 12 06 E6         [24] 1071 	lcall	_board_spi_sclk_pulse
      000724 D0 07            [24] 1072 	pop	ar7
                                   1073 ;	build/../board.c:61: return bit;
      000726 8F 82            [24] 1074 	mov	dpl, r7
                                   1075 ;	build/../board.c:62: }
      000728 22               [24] 1076 	ret
                                   1077 	.area CSEG    (CODE)
                                   1078 	.area CONST   (CODE)
                                   1079 	.area XINIT   (CODE)
                                   1080 	.area CABS    (ABS,CODE)
