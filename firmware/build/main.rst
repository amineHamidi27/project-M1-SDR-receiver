                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _handle_set_interface_PARM_2
                                     12 	.globl _handle_get_interface_PARM_2
                                     13 	.globl _handle_vendorcommand
                                     14 	.globl _handle_get_descriptor
                                     15 	.globl _handle_set_configuration
                                     16 	.globl _handle_get_configuration
                                     17 	.globl _handle_set_interface
                                     18 	.globl _handle_get_interface
                                     19 	.globl _main
                                     20 	.globl _eeprom_settings_load
                                     21 	.globl _usb_vendor_dispatch
                                     22 	.globl _ad9851_set_frequency
                                     23 	.globl _ad9851_create
                                     24 	.globl _max2771_apply_preset
                                     25 	.globl _max2771_load_defaults
                                     26 	.globl _max2771_create
                                     27 	.globl _board_spi_init
                                     28 	.globl _board_d_write
                                     29 	.globl _board_d_init_output
                                     30 	.globl _handle_hispeed
                                     31 	.globl _handle_setupdata
                                     32 	.globl _delay
                                     33 	.globl _EIPX6
                                     34 	.globl _EIPX5
                                     35 	.globl _EIPX4
                                     36 	.globl _PI2C
                                     37 	.globl _PUSB
                                     38 	.globl _EIEX6
                                     39 	.globl _EIEX5
                                     40 	.globl _EIEX4
                                     41 	.globl _EI2C
                                     42 	.globl _EUSB
                                     43 	.globl _SMOD1
                                     44 	.globl _ERESI
                                     45 	.globl _RESI
                                     46 	.globl _INT6
                                     47 	.globl _CY
                                     48 	.globl _AC
                                     49 	.globl _F0
                                     50 	.globl _RS1
                                     51 	.globl _RS0
                                     52 	.globl _OV
                                     53 	.globl _FL
                                     54 	.globl _P
                                     55 	.globl _TF2
                                     56 	.globl _EXF2
                                     57 	.globl _RCLK
                                     58 	.globl _TCLK
                                     59 	.globl _EXEN2
                                     60 	.globl _TR2
                                     61 	.globl _C_T2
                                     62 	.globl _CP_RL2
                                     63 	.globl _SM01
                                     64 	.globl _SM11
                                     65 	.globl _SM21
                                     66 	.globl _REN1
                                     67 	.globl _TB81
                                     68 	.globl _RB81
                                     69 	.globl _TI1
                                     70 	.globl _RI1
                                     71 	.globl _PS1
                                     72 	.globl _PT2
                                     73 	.globl _PS0
                                     74 	.globl _PT1
                                     75 	.globl _PX1
                                     76 	.globl _PT0
                                     77 	.globl _PX0
                                     78 	.globl _PD7
                                     79 	.globl _PD6
                                     80 	.globl _PD5
                                     81 	.globl _PD4
                                     82 	.globl _PD3
                                     83 	.globl _PD2
                                     84 	.globl _PD1
                                     85 	.globl _PD0
                                     86 	.globl _EA
                                     87 	.globl _ES1
                                     88 	.globl _ET2
                                     89 	.globl _ES0
                                     90 	.globl _ET1
                                     91 	.globl _EX1
                                     92 	.globl _ET0
                                     93 	.globl _EX0
                                     94 	.globl _PC7
                                     95 	.globl _PC6
                                     96 	.globl _PC5
                                     97 	.globl _PC4
                                     98 	.globl _PC3
                                     99 	.globl _PC2
                                    100 	.globl _PC1
                                    101 	.globl _PC0
                                    102 	.globl _SM0
                                    103 	.globl _SM1
                                    104 	.globl _SM2
                                    105 	.globl _REN
                                    106 	.globl _TB8
                                    107 	.globl _RB8
                                    108 	.globl _TI
                                    109 	.globl _RI
                                    110 	.globl _PB7
                                    111 	.globl _PB6
                                    112 	.globl _PB5
                                    113 	.globl _PB4
                                    114 	.globl _PB3
                                    115 	.globl _PB2
                                    116 	.globl _PB1
                                    117 	.globl _PB0
                                    118 	.globl _TF1
                                    119 	.globl _TR1
                                    120 	.globl _TF0
                                    121 	.globl _TR0
                                    122 	.globl _IE1
                                    123 	.globl _IT1
                                    124 	.globl _IE0
                                    125 	.globl _IT0
                                    126 	.globl _PA7
                                    127 	.globl _PA6
                                    128 	.globl _PA5
                                    129 	.globl _PA4
                                    130 	.globl _PA3
                                    131 	.globl _PA2
                                    132 	.globl _PA1
                                    133 	.globl _PA0
                                    134 	.globl _EIP
                                    135 	.globl _B
                                    136 	.globl _EIE
                                    137 	.globl _ACC
                                    138 	.globl _EICON
                                    139 	.globl _PSW
                                    140 	.globl _TH2
                                    141 	.globl _TL2
                                    142 	.globl _RCAP2H
                                    143 	.globl _RCAP2L
                                    144 	.globl _T2CON
                                    145 	.globl _SBUF1
                                    146 	.globl _SCON1
                                    147 	.globl _GPIFSGLDATLNOX
                                    148 	.globl _GPIFSGLDATLX
                                    149 	.globl _GPIFSGLDATH
                                    150 	.globl _GPIFTRIG
                                    151 	.globl _EP01STAT
                                    152 	.globl _IP
                                    153 	.globl _OEE
                                    154 	.globl _OED
                                    155 	.globl _OEC
                                    156 	.globl _OEB
                                    157 	.globl _OEA
                                    158 	.globl _IOE
                                    159 	.globl _IOD
                                    160 	.globl _AUTOPTRSETUP
                                    161 	.globl _EP68FIFOFLGS
                                    162 	.globl _EP24FIFOFLGS
                                    163 	.globl _EP2468STAT
                                    164 	.globl _IE
                                    165 	.globl _INT4CLR
                                    166 	.globl _INT2CLR
                                    167 	.globl _IOC
                                    168 	.globl _AUTOPTRL2
                                    169 	.globl _AUTOPTRH2
                                    170 	.globl _AUTOPTRL1
                                    171 	.globl _AUTOPTRH1
                                    172 	.globl _SBUF0
                                    173 	.globl _SCON0
                                    174 	.globl __XPAGE
                                    175 	.globl _EXIF
                                    176 	.globl _IOB
                                    177 	.globl _CKCON
                                    178 	.globl _TH1
                                    179 	.globl _TH0
                                    180 	.globl _TL1
                                    181 	.globl _TL0
                                    182 	.globl _TMOD
                                    183 	.globl _TCON
                                    184 	.globl _PCON
                                    185 	.globl _DPS
                                    186 	.globl _DPH1
                                    187 	.globl _DPL1
                                    188 	.globl _DPH
                                    189 	.globl _DPL
                                    190 	.globl _SP
                                    191 	.globl _IOA
                                    192 	.globl _g_ad9851
                                    193 	.globl _g_max2771_ch2
                                    194 	.globl _g_max2771_ch1
                                    195 	.globl _GPCR2
                                    196 	.globl _ECC2B2
                                    197 	.globl _ECC2B1
                                    198 	.globl _ECC2B0
                                    199 	.globl _ECC1B2
                                    200 	.globl _ECC1B1
                                    201 	.globl _ECC1B0
                                    202 	.globl _ECCRESET
                                    203 	.globl _ECCCFG
                                    204 	.globl _EP8FIFOBUF
                                    205 	.globl _EP6FIFOBUF
                                    206 	.globl _EP4FIFOBUF
                                    207 	.globl _EP2FIFOBUF
                                    208 	.globl _EP1INBUF
                                    209 	.globl _EP1OUTBUF
                                    210 	.globl _EP0BUF
                                    211 	.globl _UDMACRCQUAL
                                    212 	.globl _UDMACRCL
                                    213 	.globl _UDMACRCH
                                    214 	.globl _GPIFHOLDAMOUNT
                                    215 	.globl _FLOWSTBHPERIOD
                                    216 	.globl _FLOWSTBEDGE
                                    217 	.globl _FLOWSTB
                                    218 	.globl _FLOWHOLDOFF
                                    219 	.globl _FLOWEQ1CTL
                                    220 	.globl _FLOWEQ0CTL
                                    221 	.globl _FLOWLOGIC
                                    222 	.globl _FLOWSTATE
                                    223 	.globl _GPIFABORT
                                    224 	.globl _GPIFREADYSTAT
                                    225 	.globl _GPIFREADYCFG
                                    226 	.globl _XGPIFSGLDATLNOX
                                    227 	.globl _XGPIFSGLDATLX
                                    228 	.globl _XGPIFSGLDATH
                                    229 	.globl _EP8GPIFTRIG
                                    230 	.globl _EP8GPIFPFSTOP
                                    231 	.globl _EP8GPIFFLGSEL
                                    232 	.globl _EP6GPIFTRIG
                                    233 	.globl _EP6GPIFPFSTOP
                                    234 	.globl _EP6GPIFFLGSEL
                                    235 	.globl _EP4GPIFTRIG
                                    236 	.globl _EP4GPIFPFSTOP
                                    237 	.globl _EP4GPIFFLGSEL
                                    238 	.globl _EP2GPIFTRIG
                                    239 	.globl _EP2GPIFPFSTOP
                                    240 	.globl _EP2GPIFFLGSEL
                                    241 	.globl _GPIFTCB0
                                    242 	.globl _GPIFTCB1
                                    243 	.globl _GPIFTCB2
                                    244 	.globl _GPIFTCB3
                                    245 	.globl _GPIFADRL
                                    246 	.globl _GPIFADRH
                                    247 	.globl _GPIFCTLCFG
                                    248 	.globl _GPIFIDLECTL
                                    249 	.globl _GPIFIDLECS
                                    250 	.globl _GPIFWFSELECT
                                    251 	.globl _SETUPDAT
                                    252 	.globl _SUDPTRCTL
                                    253 	.globl _SUDPTRL
                                    254 	.globl _SUDPTRH
                                    255 	.globl _EP8FIFOBCL
                                    256 	.globl _EP8FIFOBCH
                                    257 	.globl _EP6FIFOBCL
                                    258 	.globl _EP6FIFOBCH
                                    259 	.globl _EP4FIFOBCL
                                    260 	.globl _EP4FIFOBCH
                                    261 	.globl _EP2FIFOBCL
                                    262 	.globl _EP2FIFOBCH
                                    263 	.globl _EP8FIFOFLGS
                                    264 	.globl _EP6FIFOFLGS
                                    265 	.globl _EP4FIFOFLGS
                                    266 	.globl _EP2FIFOFLGS
                                    267 	.globl _EP8CS
                                    268 	.globl _EP6CS
                                    269 	.globl _EP4CS
                                    270 	.globl _EP2CS
                                    271 	.globl _EP1INCS
                                    272 	.globl _EP1OUTCS
                                    273 	.globl _EP0CS
                                    274 	.globl _EP8BCL
                                    275 	.globl _EP8BCH
                                    276 	.globl _EP6BCL
                                    277 	.globl _EP6BCH
                                    278 	.globl _EP4BCL
                                    279 	.globl _EP4BCH
                                    280 	.globl _EP2BCL
                                    281 	.globl _EP2BCH
                                    282 	.globl _EP1INBC
                                    283 	.globl _EP1OUTBC
                                    284 	.globl _EP0BCL
                                    285 	.globl _EP0BCH
                                    286 	.globl _FNADDR
                                    287 	.globl _MICROFRAME
                                    288 	.globl _USBFRAMEL
                                    289 	.globl _USBFRAMEH
                                    290 	.globl _TOGCTL
                                    291 	.globl _WAKEUPCS
                                    292 	.globl _SUSPEND
                                    293 	.globl _USBCS
                                    294 	.globl _XAUTODAT2
                                    295 	.globl _XAUTODAT1
                                    296 	.globl _I2CTL
                                    297 	.globl _I2DAT
                                    298 	.globl _I2CS
                                    299 	.globl _PORTECFG
                                    300 	.globl _PORTCCFG
                                    301 	.globl _PORTACFG
                                    302 	.globl _INTSETUP
                                    303 	.globl _INT4IVEC
                                    304 	.globl _INT2IVEC
                                    305 	.globl _CLRERRCNT
                                    306 	.globl _ERRCNTLIM
                                    307 	.globl _USBERRIRQ
                                    308 	.globl _USBERRIE
                                    309 	.globl _GPIFIRQ
                                    310 	.globl _GPIFIE
                                    311 	.globl _EPIRQ
                                    312 	.globl _EPIE
                                    313 	.globl _USBIRQ
                                    314 	.globl _USBIE
                                    315 	.globl _NAKIRQ
                                    316 	.globl _NAKIE
                                    317 	.globl _IBNIRQ
                                    318 	.globl _IBNIE
                                    319 	.globl _EP8FIFOIRQ
                                    320 	.globl _EP8FIFOIE
                                    321 	.globl _EP6FIFOIRQ
                                    322 	.globl _EP6FIFOIE
                                    323 	.globl _EP4FIFOIRQ
                                    324 	.globl _EP4FIFOIE
                                    325 	.globl _EP2FIFOIRQ
                                    326 	.globl _EP2FIFOIE
                                    327 	.globl _OUTPKTEND
                                    328 	.globl _INPKTEND
                                    329 	.globl _EP8ISOINPKTS
                                    330 	.globl _EP6ISOINPKTS
                                    331 	.globl _EP4ISOINPKTS
                                    332 	.globl _EP2ISOINPKTS
                                    333 	.globl _EP8FIFOPFL
                                    334 	.globl _EP8FIFOPFH
                                    335 	.globl _EP6FIFOPFL
                                    336 	.globl _EP6FIFOPFH
                                    337 	.globl _EP4FIFOPFL
                                    338 	.globl _EP4FIFOPFH
                                    339 	.globl _EP2FIFOPFL
                                    340 	.globl _EP2FIFOPFH
                                    341 	.globl _EP8AUTOINLENL
                                    342 	.globl _EP8AUTOINLENH
                                    343 	.globl _EP6AUTOINLENL
                                    344 	.globl _EP6AUTOINLENH
                                    345 	.globl _EP4AUTOINLENL
                                    346 	.globl _EP4AUTOINLENH
                                    347 	.globl _EP2AUTOINLENL
                                    348 	.globl _EP2AUTOINLENH
                                    349 	.globl _EP8FIFOCFG
                                    350 	.globl _EP6FIFOCFG
                                    351 	.globl _EP4FIFOCFG
                                    352 	.globl _EP2FIFOCFG
                                    353 	.globl _EP8CFG
                                    354 	.globl _EP6CFG
                                    355 	.globl _EP4CFG
                                    356 	.globl _EP2CFG
                                    357 	.globl _EP1INCFG
                                    358 	.globl _EP1OUTCFG
                                    359 	.globl _REVCTL
                                    360 	.globl _REVID
                                    361 	.globl _FIFOPINPOLAR
                                    362 	.globl _UART230
                                    363 	.globl _BPADDRL
                                    364 	.globl _BPADDRH
                                    365 	.globl _BREAKPT
                                    366 	.globl _FIFORESET
                                    367 	.globl _PINFLAGSCD
                                    368 	.globl _PINFLAGSAB
                                    369 	.globl _IFCONFIG
                                    370 	.globl _CPUCS
                                    371 	.globl _RES_WAVEDATA_END
                                    372 	.globl _GPIF_WAVE_DATA
                                    373 	.globl _got_sud
                                    374 	.globl _start_bulk_transfer
                                    375 	.globl _stop_bulk_transfer
                                    376 	.globl _device_reset
                                    377 	.globl _sudav_isr
                                    378 	.globl _sof_isr
                                    379 	.globl _usbreset_isr
                                    380 	.globl _hispeed_isr
                                    381 ;--------------------------------------------------------
                                    382 ; special function registers
                                    383 ;--------------------------------------------------------
                                    384 	.area RSEG    (ABS,DATA)
      000000                        385 	.org 0x0000
                           000080   386 _IOA	=	0x0080
                           000081   387 _SP	=	0x0081
                           000082   388 _DPL	=	0x0082
                           000083   389 _DPH	=	0x0083
                           000084   390 _DPL1	=	0x0084
                           000085   391 _DPH1	=	0x0085
                           000086   392 _DPS	=	0x0086
                           000087   393 _PCON	=	0x0087
                           000088   394 _TCON	=	0x0088
                           000089   395 _TMOD	=	0x0089
                           00008A   396 _TL0	=	0x008a
                           00008B   397 _TL1	=	0x008b
                           00008C   398 _TH0	=	0x008c
                           00008D   399 _TH1	=	0x008d
                           00008E   400 _CKCON	=	0x008e
                           000090   401 _IOB	=	0x0090
                           000091   402 _EXIF	=	0x0091
                           000092   403 __XPAGE	=	0x0092
                           000098   404 _SCON0	=	0x0098
                           000099   405 _SBUF0	=	0x0099
                           00009A   406 _AUTOPTRH1	=	0x009a
                           00009B   407 _AUTOPTRL1	=	0x009b
                           00009D   408 _AUTOPTRH2	=	0x009d
                           00009E   409 _AUTOPTRL2	=	0x009e
                           0000A0   410 _IOC	=	0x00a0
                           0000A1   411 _INT2CLR	=	0x00a1
                           0000A2   412 _INT4CLR	=	0x00a2
                           0000A8   413 _IE	=	0x00a8
                           0000AA   414 _EP2468STAT	=	0x00aa
                           0000AB   415 _EP24FIFOFLGS	=	0x00ab
                           0000AC   416 _EP68FIFOFLGS	=	0x00ac
                           0000AF   417 _AUTOPTRSETUP	=	0x00af
                           0000B0   418 _IOD	=	0x00b0
                           0000B1   419 _IOE	=	0x00b1
                           0000B2   420 _OEA	=	0x00b2
                           0000B3   421 _OEB	=	0x00b3
                           0000B4   422 _OEC	=	0x00b4
                           0000B5   423 _OED	=	0x00b5
                           0000B6   424 _OEE	=	0x00b6
                           0000B8   425 _IP	=	0x00b8
                           0000BA   426 _EP01STAT	=	0x00ba
                           0000BB   427 _GPIFTRIG	=	0x00bb
                           0000BD   428 _GPIFSGLDATH	=	0x00bd
                           0000BE   429 _GPIFSGLDATLX	=	0x00be
                           0000BF   430 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   431 _SCON1	=	0x00c0
                           0000C1   432 _SBUF1	=	0x00c1
                           0000C8   433 _T2CON	=	0x00c8
                           0000CA   434 _RCAP2L	=	0x00ca
                           0000CB   435 _RCAP2H	=	0x00cb
                           0000CC   436 _TL2	=	0x00cc
                           0000CD   437 _TH2	=	0x00cd
                           0000D0   438 _PSW	=	0x00d0
                           0000D8   439 _EICON	=	0x00d8
                           0000E0   440 _ACC	=	0x00e0
                           0000E8   441 _EIE	=	0x00e8
                           0000F0   442 _B	=	0x00f0
                           0000F8   443 _EIP	=	0x00f8
                                    444 ;--------------------------------------------------------
                                    445 ; special function bits
                                    446 ;--------------------------------------------------------
                                    447 	.area RSEG    (ABS,DATA)
      000000                        448 	.org 0x0000
                           000080   449 _PA0	=	0x0080
                           000081   450 _PA1	=	0x0081
                           000082   451 _PA2	=	0x0082
                           000083   452 _PA3	=	0x0083
                           000084   453 _PA4	=	0x0084
                           000085   454 _PA5	=	0x0085
                           000086   455 _PA6	=	0x0086
                           000087   456 _PA7	=	0x0087
                           000088   457 _IT0	=	0x0088
                           000089   458 _IE0	=	0x0089
                           00008A   459 _IT1	=	0x008a
                           00008B   460 _IE1	=	0x008b
                           00008C   461 _TR0	=	0x008c
                           00008D   462 _TF0	=	0x008d
                           00008E   463 _TR1	=	0x008e
                           00008F   464 _TF1	=	0x008f
                           000090   465 _PB0	=	0x0090
                           000091   466 _PB1	=	0x0091
                           000092   467 _PB2	=	0x0092
                           000093   468 _PB3	=	0x0093
                           000094   469 _PB4	=	0x0094
                           000095   470 _PB5	=	0x0095
                           000096   471 _PB6	=	0x0096
                           000097   472 _PB7	=	0x0097
                           000098   473 _RI	=	0x0098
                           000099   474 _TI	=	0x0099
                           00009A   475 _RB8	=	0x009a
                           00009B   476 _TB8	=	0x009b
                           00009C   477 _REN	=	0x009c
                           00009D   478 _SM2	=	0x009d
                           00009E   479 _SM1	=	0x009e
                           00009F   480 _SM0	=	0x009f
                           0000A0   481 _PC0	=	0x00a0
                           0000A1   482 _PC1	=	0x00a1
                           0000A2   483 _PC2	=	0x00a2
                           0000A3   484 _PC3	=	0x00a3
                           0000A4   485 _PC4	=	0x00a4
                           0000A5   486 _PC5	=	0x00a5
                           0000A6   487 _PC6	=	0x00a6
                           0000A7   488 _PC7	=	0x00a7
                           0000A8   489 _EX0	=	0x00a8
                           0000A9   490 _ET0	=	0x00a9
                           0000AA   491 _EX1	=	0x00aa
                           0000AB   492 _ET1	=	0x00ab
                           0000AC   493 _ES0	=	0x00ac
                           0000AD   494 _ET2	=	0x00ad
                           0000AE   495 _ES1	=	0x00ae
                           0000AF   496 _EA	=	0x00af
                           0000B0   497 _PD0	=	0x00b0
                           0000B1   498 _PD1	=	0x00b1
                           0000B2   499 _PD2	=	0x00b2
                           0000B3   500 _PD3	=	0x00b3
                           0000B4   501 _PD4	=	0x00b4
                           0000B5   502 _PD5	=	0x00b5
                           0000B6   503 _PD6	=	0x00b6
                           0000B7   504 _PD7	=	0x00b7
                           0000B8   505 _PX0	=	0x00b8
                           0000B9   506 _PT0	=	0x00b9
                           0000BA   507 _PX1	=	0x00ba
                           0000BB   508 _PT1	=	0x00bb
                           0000BC   509 _PS0	=	0x00bc
                           0000BD   510 _PT2	=	0x00bd
                           0000BE   511 _PS1	=	0x00be
                           0000C0   512 _RI1	=	0x00c0
                           0000C1   513 _TI1	=	0x00c1
                           0000C2   514 _RB81	=	0x00c2
                           0000C3   515 _TB81	=	0x00c3
                           0000C4   516 _REN1	=	0x00c4
                           0000C5   517 _SM21	=	0x00c5
                           0000C6   518 _SM11	=	0x00c6
                           0000C7   519 _SM01	=	0x00c7
                           0000C8   520 _CP_RL2	=	0x00c8
                           0000C9   521 _C_T2	=	0x00c9
                           0000CA   522 _TR2	=	0x00ca
                           0000CB   523 _EXEN2	=	0x00cb
                           0000CC   524 _TCLK	=	0x00cc
                           0000CD   525 _RCLK	=	0x00cd
                           0000CE   526 _EXF2	=	0x00ce
                           0000CF   527 _TF2	=	0x00cf
                           0000D0   528 _P	=	0x00d0
                           0000D1   529 _FL	=	0x00d1
                           0000D2   530 _OV	=	0x00d2
                           0000D3   531 _RS0	=	0x00d3
                           0000D4   532 _RS1	=	0x00d4
                           0000D5   533 _F0	=	0x00d5
                           0000D6   534 _AC	=	0x00d6
                           0000D7   535 _CY	=	0x00d7
                           0000DB   536 _INT6	=	0x00db
                           0000DC   537 _RESI	=	0x00dc
                           0000DD   538 _ERESI	=	0x00dd
                           0000DF   539 _SMOD1	=	0x00df
                           0000E8   540 _EUSB	=	0x00e8
                           0000E9   541 _EI2C	=	0x00e9
                           0000EA   542 _EIEX4	=	0x00ea
                           0000EB   543 _EIEX5	=	0x00eb
                           0000EC   544 _EIEX6	=	0x00ec
                           0000F8   545 _PUSB	=	0x00f8
                           0000F9   546 _PI2C	=	0x00f9
                           0000FA   547 _EIPX4	=	0x00fa
                           0000FB   548 _EIPX5	=	0x00fb
                           0000FC   549 _EIPX6	=	0x00fc
                                    550 ;--------------------------------------------------------
                                    551 ; overlayable register banks
                                    552 ;--------------------------------------------------------
                                    553 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        554 	.ds 8
                                    555 	.area REG_BANK_1	(REL,OVR,DATA)
      000008                        556 	.ds 8
                                    557 ;--------------------------------------------------------
                                    558 ; overlayable bit register bank
                                    559 ;--------------------------------------------------------
                                    560 	.area BIT_BANK	(REL,OVR,DATA)
      000021                        561 bits:
      000021                        562 	.ds 1
                           008000   563 	b0 = bits[0]
                           008100   564 	b1 = bits[1]
                           008200   565 	b2 = bits[2]
                           008300   566 	b3 = bits[3]
                           008400   567 	b4 = bits[4]
                           008500   568 	b5 = bits[5]
                           008600   569 	b6 = bits[6]
                           008700   570 	b7 = bits[7]
                                    571 ;--------------------------------------------------------
                                    572 ; internal ram data
                                    573 ;--------------------------------------------------------
                                    574 	.area DSEG    (DATA)
                                    575 ;--------------------------------------------------------
                                    576 ; overlayable items in internal ram
                                    577 ;--------------------------------------------------------
                                    578 	.area	OSEG    (OVR,DATA)
      00001C                        579 _handle_get_interface_PARM_2:
      00001C                        580 	.ds 3
                                    581 	.area	OSEG    (OVR,DATA)
      00001C                        582 _handle_set_interface_PARM_2:
      00001C                        583 	.ds 1
                                    584 	.area	OSEG    (OVR,DATA)
                                    585 ;--------------------------------------------------------
                                    586 ; Stack segment in internal ram
                                    587 ;--------------------------------------------------------
                                    588 	.area SSEG
      00007B                        589 __start__stack:
      00007B                        590 	.ds	1
                                    591 
                                    592 ;--------------------------------------------------------
                                    593 ; indirectly addressable internal ram data
                                    594 ;--------------------------------------------------------
                                    595 	.area ISEG    (DATA)
                                    596 ;--------------------------------------------------------
                                    597 ; absolute internal ram data
                                    598 ;--------------------------------------------------------
                                    599 	.area IABS    (ABS,DATA)
                                    600 	.area IABS    (ABS,DATA)
                                    601 ;--------------------------------------------------------
                                    602 ; bit data
                                    603 ;--------------------------------------------------------
                                    604 	.area BSEG    (BIT)
      000000                        605 _got_sud::
      000000                        606 	.ds 1
                                    607 ;--------------------------------------------------------
                                    608 ; paged external ram data
                                    609 ;--------------------------------------------------------
                                    610 	.area PSEG    (PAG,XDATA)
                                    611 ;--------------------------------------------------------
                                    612 ; uninitialized external ram data
                                    613 ;--------------------------------------------------------
                                    614 	.area XSEG    (XDATA)
                           00E400   615 _GPIF_WAVE_DATA	=	0xe400
                           00E480   616 _RES_WAVEDATA_END	=	0xe480
                           00E600   617 _CPUCS	=	0xe600
                           00E601   618 _IFCONFIG	=	0xe601
                           00E602   619 _PINFLAGSAB	=	0xe602
                           00E603   620 _PINFLAGSCD	=	0xe603
                           00E604   621 _FIFORESET	=	0xe604
                           00E605   622 _BREAKPT	=	0xe605
                           00E606   623 _BPADDRH	=	0xe606
                           00E607   624 _BPADDRL	=	0xe607
                           00E608   625 _UART230	=	0xe608
                           00E609   626 _FIFOPINPOLAR	=	0xe609
                           00E60A   627 _REVID	=	0xe60a
                           00E60B   628 _REVCTL	=	0xe60b
                           00E610   629 _EP1OUTCFG	=	0xe610
                           00E611   630 _EP1INCFG	=	0xe611
                           00E612   631 _EP2CFG	=	0xe612
                           00E613   632 _EP4CFG	=	0xe613
                           00E614   633 _EP6CFG	=	0xe614
                           00E615   634 _EP8CFG	=	0xe615
                           00E618   635 _EP2FIFOCFG	=	0xe618
                           00E619   636 _EP4FIFOCFG	=	0xe619
                           00E61A   637 _EP6FIFOCFG	=	0xe61a
                           00E61B   638 _EP8FIFOCFG	=	0xe61b
                           00E620   639 _EP2AUTOINLENH	=	0xe620
                           00E621   640 _EP2AUTOINLENL	=	0xe621
                           00E622   641 _EP4AUTOINLENH	=	0xe622
                           00E623   642 _EP4AUTOINLENL	=	0xe623
                           00E624   643 _EP6AUTOINLENH	=	0xe624
                           00E625   644 _EP6AUTOINLENL	=	0xe625
                           00E626   645 _EP8AUTOINLENH	=	0xe626
                           00E627   646 _EP8AUTOINLENL	=	0xe627
                           00E630   647 _EP2FIFOPFH	=	0xe630
                           00E631   648 _EP2FIFOPFL	=	0xe631
                           00E632   649 _EP4FIFOPFH	=	0xe632
                           00E633   650 _EP4FIFOPFL	=	0xe633
                           00E634   651 _EP6FIFOPFH	=	0xe634
                           00E635   652 _EP6FIFOPFL	=	0xe635
                           00E636   653 _EP8FIFOPFH	=	0xe636
                           00E637   654 _EP8FIFOPFL	=	0xe637
                           00E640   655 _EP2ISOINPKTS	=	0xe640
                           00E641   656 _EP4ISOINPKTS	=	0xe641
                           00E642   657 _EP6ISOINPKTS	=	0xe642
                           00E643   658 _EP8ISOINPKTS	=	0xe643
                           00E648   659 _INPKTEND	=	0xe648
                           00E649   660 _OUTPKTEND	=	0xe649
                           00E650   661 _EP2FIFOIE	=	0xe650
                           00E651   662 _EP2FIFOIRQ	=	0xe651
                           00E652   663 _EP4FIFOIE	=	0xe652
                           00E653   664 _EP4FIFOIRQ	=	0xe653
                           00E654   665 _EP6FIFOIE	=	0xe654
                           00E655   666 _EP6FIFOIRQ	=	0xe655
                           00E656   667 _EP8FIFOIE	=	0xe656
                           00E657   668 _EP8FIFOIRQ	=	0xe657
                           00E658   669 _IBNIE	=	0xe658
                           00E659   670 _IBNIRQ	=	0xe659
                           00E65A   671 _NAKIE	=	0xe65a
                           00E65B   672 _NAKIRQ	=	0xe65b
                           00E65C   673 _USBIE	=	0xe65c
                           00E65D   674 _USBIRQ	=	0xe65d
                           00E65E   675 _EPIE	=	0xe65e
                           00E65F   676 _EPIRQ	=	0xe65f
                           00E660   677 _GPIFIE	=	0xe660
                           00E661   678 _GPIFIRQ	=	0xe661
                           00E662   679 _USBERRIE	=	0xe662
                           00E663   680 _USBERRIRQ	=	0xe663
                           00E664   681 _ERRCNTLIM	=	0xe664
                           00E665   682 _CLRERRCNT	=	0xe665
                           00E666   683 _INT2IVEC	=	0xe666
                           00E667   684 _INT4IVEC	=	0xe667
                           00E668   685 _INTSETUP	=	0xe668
                           00E670   686 _PORTACFG	=	0xe670
                           00E671   687 _PORTCCFG	=	0xe671
                           00E672   688 _PORTECFG	=	0xe672
                           00E678   689 _I2CS	=	0xe678
                           00E679   690 _I2DAT	=	0xe679
                           00E67A   691 _I2CTL	=	0xe67a
                           00E67B   692 _XAUTODAT1	=	0xe67b
                           00E67C   693 _XAUTODAT2	=	0xe67c
                           00E680   694 _USBCS	=	0xe680
                           00E681   695 _SUSPEND	=	0xe681
                           00E682   696 _WAKEUPCS	=	0xe682
                           00E683   697 _TOGCTL	=	0xe683
                           00E684   698 _USBFRAMEH	=	0xe684
                           00E685   699 _USBFRAMEL	=	0xe685
                           00E686   700 _MICROFRAME	=	0xe686
                           00E687   701 _FNADDR	=	0xe687
                           00E68A   702 _EP0BCH	=	0xe68a
                           00E68B   703 _EP0BCL	=	0xe68b
                           00E68D   704 _EP1OUTBC	=	0xe68d
                           00E68F   705 _EP1INBC	=	0xe68f
                           00E690   706 _EP2BCH	=	0xe690
                           00E691   707 _EP2BCL	=	0xe691
                           00E694   708 _EP4BCH	=	0xe694
                           00E695   709 _EP4BCL	=	0xe695
                           00E698   710 _EP6BCH	=	0xe698
                           00E699   711 _EP6BCL	=	0xe699
                           00E69C   712 _EP8BCH	=	0xe69c
                           00E69D   713 _EP8BCL	=	0xe69d
                           00E6A0   714 _EP0CS	=	0xe6a0
                           00E6A1   715 _EP1OUTCS	=	0xe6a1
                           00E6A2   716 _EP1INCS	=	0xe6a2
                           00E6A3   717 _EP2CS	=	0xe6a3
                           00E6A4   718 _EP4CS	=	0xe6a4
                           00E6A5   719 _EP6CS	=	0xe6a5
                           00E6A6   720 _EP8CS	=	0xe6a6
                           00E6A7   721 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   722 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   723 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   724 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   725 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   726 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   727 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   728 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   729 _EP6FIFOBCH	=	0xe6af
                           00E6B0   730 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   731 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   732 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   733 _SUDPTRH	=	0xe6b3
                           00E6B4   734 _SUDPTRL	=	0xe6b4
                           00E6B5   735 _SUDPTRCTL	=	0xe6b5
                           00E6B8   736 _SETUPDAT	=	0xe6b8
                           00E6C0   737 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   738 _GPIFIDLECS	=	0xe6c1
                           00E6C2   739 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   740 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   741 _GPIFADRH	=	0xe6c4
                           00E6C5   742 _GPIFADRL	=	0xe6c5
                           00E6CE   743 _GPIFTCB3	=	0xe6ce
                           00E6CF   744 _GPIFTCB2	=	0xe6cf
                           00E6D0   745 _GPIFTCB1	=	0xe6d0
                           00E6D1   746 _GPIFTCB0	=	0xe6d1
                           00E6D2   747 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   748 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   749 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   750 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   751 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   752 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   753 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   754 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   755 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   756 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   757 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   758 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   759 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   760 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   761 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   762 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   763 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   764 _GPIFABORT	=	0xe6f5
                           00E6C6   765 _FLOWSTATE	=	0xe6c6
                           00E6C7   766 _FLOWLOGIC	=	0xe6c7
                           00E6C8   767 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   768 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   769 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   770 _FLOWSTB	=	0xe6cb
                           00E6CC   771 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   772 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   773 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   774 _UDMACRCH	=	0xe67d
                           00E67E   775 _UDMACRCL	=	0xe67e
                           00E67F   776 _UDMACRCQUAL	=	0xe67f
                           00E740   777 _EP0BUF	=	0xe740
                           00E780   778 _EP1OUTBUF	=	0xe780
                           00E7C0   779 _EP1INBUF	=	0xe7c0
                           00F000   780 _EP2FIFOBUF	=	0xf000
                           00F400   781 _EP4FIFOBUF	=	0xf400
                           00F800   782 _EP6FIFOBUF	=	0xf800
                           00FC00   783 _EP8FIFOBUF	=	0xfc00
                           00E628   784 _ECCCFG	=	0xe628
                           00E629   785 _ECCRESET	=	0xe629
                           00E62A   786 _ECC1B0	=	0xe62a
                           00E62B   787 _ECC1B1	=	0xe62b
                           00E62C   788 _ECC1B2	=	0xe62c
                           00E62D   789 _ECC2B0	=	0xe62d
                           00E62E   790 _ECC2B1	=	0xe62e
                           00E62F   791 _ECC2B2	=	0xe62f
                           00E50D   792 _GPCR2	=	0xe50d
      003C00                        793 _device_init_regs_20000_100:
      003C00                        794 	.ds 88
                                    795 ;--------------------------------------------------------
                                    796 ; absolute external ram data
                                    797 ;--------------------------------------------------------
                                    798 	.area XABS    (ABS,XDATA)
                                    799 ;--------------------------------------------------------
                                    800 ; initialized external ram data
                                    801 ;--------------------------------------------------------
                                    802 	.area XISEG   (XDATA)
      003CB8                        803 _g_max2771_ch1::
      003CB8                        804 	.ds 3
      003CBB                        805 _g_max2771_ch2::
      003CBB                        806 	.ds 3
      003CBE                        807 _g_ad9851::
      003CBE                        808 	.ds 3
                                    809 	.area HOME    (CODE)
                                    810 	.area GSINIT0 (CODE)
                                    811 	.area GSINIT1 (CODE)
                                    812 	.area GSINIT2 (CODE)
                                    813 	.area GSINIT3 (CODE)
                                    814 	.area GSINIT4 (CODE)
                                    815 	.area GSINIT5 (CODE)
                                    816 	.area GSINIT  (CODE)
                                    817 	.area GSFINAL (CODE)
                                    818 	.area CSEG    (CODE)
                                    819 ;--------------------------------------------------------
                                    820 ; interrupt vector
                                    821 ;--------------------------------------------------------
                                    822 	.area HOME    (CODE)
      000000                        823 __interrupt_vect:
      000000 02 00 C6         [24]  824 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  825 	reti
      000004                        826 	.ds	7
      00000B 32               [24]  827 	reti
      00000C                        828 	.ds	7
      000013 32               [24]  829 	reti
      000014                        830 	.ds	7
      00001B 32               [24]  831 	reti
      00001C                        832 	.ds	7
      000023 32               [24]  833 	reti
      000024                        834 	.ds	7
      00002B 32               [24]  835 	reti
      00002C                        836 	.ds	7
      000033 32               [24]  837 	reti
      000034                        838 	.ds	7
      00003B 32               [24]  839 	reti
      00003C                        840 	.ds	7
      000043 02 3F 00         [24]  841 	ljmp	_usb_isr
      000046                        842 	.ds	5
      00004B 32               [24]  843 	reti
      00004C                        844 	.ds	7
      000053 02 3F 00         [24]  845 	ljmp	_gpif_isr
                                    846 ; restartable atomic support routines
      000056                        847 	.ds	2
      000058                        848 sdcc_atomic_exchange_rollback_start::
      000058 00               [12]  849 	nop
      000059 00               [12]  850 	nop
      00005A                        851 sdcc_atomic_exchange_pdata_impl:
      00005A E2               [24]  852 	movx	a, @r0
      00005B FB               [12]  853 	mov	r3, a
      00005C EA               [12]  854 	mov	a, r2
      00005D F2               [24]  855 	movx	@r0, a
      00005E 80 2C            [24]  856 	sjmp	sdcc_atomic_exchange_exit
      000060 00               [12]  857 	nop
      000061 00               [12]  858 	nop
      000062                        859 sdcc_atomic_exchange_xdata_impl:
      000062 E0               [24]  860 	movx	a, @dptr
      000063 FB               [12]  861 	mov	r3, a
      000064 EA               [12]  862 	mov	a, r2
      000065 F0               [24]  863 	movx	@dptr, a
      000066 80 24            [24]  864 	sjmp	sdcc_atomic_exchange_exit
      000068                        865 sdcc_atomic_compare_exchange_idata_impl:
      000068 E6               [12]  866 	mov	a, @r0
      000069 B5 02 02         [24]  867 	cjne	a, ar2, .+#5
      00006C EB               [12]  868 	mov	a, r3
      00006D F6               [12]  869 	mov	@r0, a
      00006E 22               [24]  870 	ret
      00006F 00               [12]  871 	nop
      000070                        872 sdcc_atomic_compare_exchange_pdata_impl:
      000070 E2               [24]  873 	movx	a, @r0
      000071 B5 02 02         [24]  874 	cjne	a, ar2, .+#5
      000074 EB               [12]  875 	mov	a, r3
      000075 F2               [24]  876 	movx	@r0, a
      000076 22               [24]  877 	ret
      000077 00               [12]  878 	nop
      000078                        879 sdcc_atomic_compare_exchange_xdata_impl:
      000078 E0               [24]  880 	movx	a, @dptr
      000079 B5 02 02         [24]  881 	cjne	a, ar2, .+#5
      00007C EB               [12]  882 	mov	a, r3
      00007D F0               [24]  883 	movx	@dptr, a
      00007E 22               [24]  884 	ret
      00007F                        885 sdcc_atomic_exchange_rollback_end::
                                    886 
      00007F                        887 sdcc_atomic_exchange_gptr_impl::
      00007F 30 F6 E0         [24]  888 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000082 A8 82            [24]  889 	mov	r0, dpl
      000084 20 F5 D3         [24]  890 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000087                        891 sdcc_atomic_exchange_idata_impl:
      000087 EA               [12]  892 	mov	a, r2
      000088 C6               [12]  893 	xch	a, @r0
      000089 F5 82            [12]  894 	mov	dpl, a
      00008B 22               [24]  895 	ret
      00008C                        896 sdcc_atomic_exchange_exit:
      00008C 8B 82            [24]  897 	mov	dpl, r3
      00008E 22               [24]  898 	ret
      00008F                        899 sdcc_atomic_compare_exchange_gptr_impl::
      00008F 30 F6 E6         [24]  900 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000092 A8 82            [24]  901 	mov	r0, dpl
      000094 20 F5 D9         [24]  902 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000097 80 CF            [24]  903 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    904 ;--------------------------------------------------------
                                    905 ; global & static initialisations
                                    906 ;--------------------------------------------------------
                                    907 	.area HOME    (CODE)
                                    908 	.area GSINIT  (CODE)
                                    909 	.area GSFINAL (CODE)
                                    910 	.area GSINIT  (CODE)
                                    911 	.globl __sdcc_gsinit_startup
                                    912 	.globl __sdcc_program_startup
                                    913 	.globl __start__stack
                                    914 	.globl __mcs51_genXINIT
                                    915 	.globl __mcs51_genXRAMCLEAR
                                    916 	.globl __mcs51_genRAMCLEAR
                                    917 ;	build/../main.c:26: volatile __bit got_sud = FALSE;
                                    918 ;	assignBit
      00011F C2 00            [12]  919 	clr	_got_sud
                                    920 	.area GSFINAL (CODE)
      000133 02 00 99         [24]  921 	ljmp	__sdcc_program_startup
                                    922 ;--------------------------------------------------------
                                    923 ; Home
                                    924 ;--------------------------------------------------------
                                    925 	.area HOME    (CODE)
                                    926 	.area HOME    (CODE)
      000099                        927 __sdcc_program_startup:
      000099 02 03 D8         [24]  928 	ljmp	_main
                                    929 ;	return from main will return to caller
                                    930 ;--------------------------------------------------------
                                    931 ; code
                                    932 ;--------------------------------------------------------
                                    933 	.area CSEG    (CODE)
                                    934 ;------------------------------------------------------------
                                    935 ;Allocation info for local variables in function 'start_bulk_transfer'
                                    936 ;------------------------------------------------------------
                                    937 ;	build/../main.c:35: void start_bulk_transfer(void) {
                                    938 ;	-----------------------------------------
                                    939 ;	 function start_bulk_transfer
                                    940 ;	-----------------------------------------
      000136                        941 _start_bulk_transfer:
                           000007   942 	ar7 = 0x07
                           000006   943 	ar6 = 0x06
                           000005   944 	ar5 = 0x05
                           000004   945 	ar4 = 0x04
                           000003   946 	ar3 = 0x03
                           000002   947 	ar2 = 0x02
                           000001   948 	ar1 = 0x01
                           000000   949 	ar0 = 0x00
                                    950 ;	build/../main.c:36: FIFORESET  = 0x80; SYNCDELAY;
      000136 90 E6 04         [24]  951 	mov	dptr,#_FIFORESET
      000139 74 80            [12]  952 	mov	a,#0x80
      00013B F0               [24]  953 	movx	@dptr,a
      00013C 00               [12]  954 	nop	
      00013D 00               [12]  955 	nop	
      00013E 00               [12]  956 	nop	
      00013F 00               [12]  957 	nop	
                                    958 ;	build/../main.c:37: EP6FIFOCFG = 0x00; SYNCDELAY;
      000140 90 E6 1A         [24]  959 	mov	dptr,#_EP6FIFOCFG
      000143 E4               [12]  960 	clr	a
      000144 F0               [24]  961 	movx	@dptr,a
      000145 00               [12]  962 	nop	
      000146 00               [12]  963 	nop	
      000147 00               [12]  964 	nop	
      000148 00               [12]  965 	nop	
                                    966 ;	build/../main.c:38: FIFORESET  = 0x06; SYNCDELAY;
      000149 90 E6 04         [24]  967 	mov	dptr,#_FIFORESET
      00014C 74 06            [12]  968 	mov	a,#0x06
      00014E F0               [24]  969 	movx	@dptr,a
      00014F 00               [12]  970 	nop	
      000150 00               [12]  971 	nop	
      000151 00               [12]  972 	nop	
      000152 00               [12]  973 	nop	
                                    974 ;	build/../main.c:39: EP6FIFOCFG = 0x0C; SYNCDELAY; /* AUTOIN=ON, ZEROLENIN=1, WORDWIDE=BYTE */
      000153 90 E6 1A         [24]  975 	mov	dptr,#_EP6FIFOCFG
      000156 74 0C            [12]  976 	mov	a,#0x0c
      000158 F0               [24]  977 	movx	@dptr,a
      000159 00               [12]  978 	nop	
      00015A 00               [12]  979 	nop	
      00015B 00               [12]  980 	nop	
      00015C 00               [12]  981 	nop	
                                    982 ;	build/../main.c:40: FIFORESET  = 0x00; SYNCDELAY;
      00015D 90 E6 04         [24]  983 	mov	dptr,#_FIFORESET
      000160 E4               [12]  984 	clr	a
      000161 F0               [24]  985 	movx	@dptr,a
      000162 00               [12]  986 	nop	
      000163 00               [12]  987 	nop	
      000164 00               [12]  988 	nop	
      000165 00               [12]  989 	nop	
                                    990 ;	build/../main.c:41: }
      000166 22               [24]  991 	ret
                                    992 ;------------------------------------------------------------
                                    993 ;Allocation info for local variables in function 'stop_bulk_transfer'
                                    994 ;------------------------------------------------------------
                                    995 ;	build/../main.c:43: void stop_bulk_transfer(void) {
                                    996 ;	-----------------------------------------
                                    997 ;	 function stop_bulk_transfer
                                    998 ;	-----------------------------------------
      000167                        999 _stop_bulk_transfer:
                                   1000 ;	build/../main.c:44: EP6FIFOCFG = 0x04; SYNCDELAY; /* AUTOIN=OFF */
      000167 90 E6 1A         [24] 1001 	mov	dptr,#_EP6FIFOCFG
      00016A 74 04            [12] 1002 	mov	a,#0x04
      00016C F0               [24] 1003 	movx	@dptr,a
      00016D 00               [12] 1004 	nop	
      00016E 00               [12] 1005 	nop	
      00016F 00               [12] 1006 	nop	
      000170 00               [12] 1007 	nop	
                                   1008 ;	build/../main.c:45: }
      000171 22               [24] 1009 	ret
                                   1010 ;------------------------------------------------------------
                                   1011 ;Allocation info for local variables in function 'device_reset'
                                   1012 ;------------------------------------------------------------
                                   1013 ;	build/../main.c:47: void device_reset(void) {
                                   1014 ;	-----------------------------------------
                                   1015 ;	 function device_reset
                                   1016 ;	-----------------------------------------
      000172                       1017 _device_reset:
                                   1018 ;	build/../main.c:48: device_init();
                                   1019 ;	build/../main.c:49: }
      000172 02 01 75         [24] 1020 	ljmp	_device_init
                                   1021 ;------------------------------------------------------------
                                   1022 ;Allocation info for local variables in function 'device_init'
                                   1023 ;------------------------------------------------------------
                                   1024 ;ad9851_freq   Allocated to registers 
                                   1025 ;regs          Allocated with name '_device_init_regs_20000_100'
                                   1026 ;------------------------------------------------------------
                                   1027 ;	build/../main.c:51: static void device_init(void) {
                                   1028 ;	-----------------------------------------
                                   1029 ;	 function device_init
                                   1030 ;	-----------------------------------------
      000175                       1031 _device_init:
                                   1032 ;	build/../main.c:54: CPUCS      = 0x12; SYNCDELAY; /* 48MHz, CLKOE=FLOAT */
      000175 90 E6 00         [24] 1033 	mov	dptr,#_CPUCS
      000178 74 12            [12] 1034 	mov	a,#0x12
      00017A F0               [24] 1035 	movx	@dptr,a
      00017B 00               [12] 1036 	nop	
      00017C 00               [12] 1037 	nop	
      00017D 00               [12] 1038 	nop	
      00017E 00               [12] 1039 	nop	
                                   1040 ;	build/../main.c:55: IFCONFIG   = 0x53; SYNCDELAY; /* IFCLK=EXT, SLAVE_FIFO */
      00017F 90 E6 01         [24] 1041 	mov	dptr,#_IFCONFIG
      000182 74 53            [12] 1042 	mov	a,#0x53
      000184 F0               [24] 1043 	movx	@dptr,a
      000185 00               [12] 1044 	nop	
      000186 00               [12] 1045 	nop	
      000187 00               [12] 1046 	nop	
      000188 00               [12] 1047 	nop	
                                   1048 ;	build/../main.c:56: REVCTL     = 0x03; SYNCDELAY;
      000189 90 E6 0B         [24] 1049 	mov	dptr,#_REVCTL
      00018C 74 03            [12] 1050 	mov	a,#0x03
      00018E F0               [24] 1051 	movx	@dptr,a
      00018F 00               [12] 1052 	nop	
      000190 00               [12] 1053 	nop	
      000191 00               [12] 1054 	nop	
      000192 00               [12] 1055 	nop	
                                   1056 ;	build/../main.c:58: usb_endpoint_init();
      000193 12 02 94         [24] 1057 	lcall	_usb_endpoint_init
                                   1058 ;	build/../main.c:61: board_spi_init();
      000196 12 06 DA         [24] 1059 	lcall	_board_spi_init
                                   1060 ;	build/../main.c:64: g_max2771_ch1 = max2771_create(MAX2771_CH1);
      000199 75 82 00         [24] 1061 	mov	dpl, #0x00
      00019C 12 08 6C         [24] 1062 	lcall	_max2771_create
      00019F AD 82            [24] 1063 	mov	r5, dpl
      0001A1 AE 83            [24] 1064 	mov	r6, dph
      0001A3 AF F0            [24] 1065 	mov	r7, b
      0001A5 90 3C B8         [24] 1066 	mov	dptr,#_g_max2771_ch1
      0001A8 ED               [12] 1067 	mov	a,r5
      0001A9 F0               [24] 1068 	movx	@dptr,a
      0001AA EE               [12] 1069 	mov	a,r6
      0001AB A3               [24] 1070 	inc	dptr
      0001AC F0               [24] 1071 	movx	@dptr,a
      0001AD EF               [12] 1072 	mov	a,r7
      0001AE A3               [24] 1073 	inc	dptr
      0001AF F0               [24] 1074 	movx	@dptr,a
                                   1075 ;	build/../main.c:65: g_max2771_ch2 = max2771_create(MAX2771_CH2);
      0001B0 75 82 01         [24] 1076 	mov	dpl, #0x01
      0001B3 12 08 6C         [24] 1077 	lcall	_max2771_create
      0001B6 AD 82            [24] 1078 	mov	r5, dpl
      0001B8 AE 83            [24] 1079 	mov	r6, dph
      0001BA AF F0            [24] 1080 	mov	r7, b
      0001BC 90 3C BB         [24] 1081 	mov	dptr,#_g_max2771_ch2
      0001BF ED               [12] 1082 	mov	a,r5
      0001C0 F0               [24] 1083 	movx	@dptr,a
      0001C1 EE               [12] 1084 	mov	a,r6
      0001C2 A3               [24] 1085 	inc	dptr
      0001C3 F0               [24] 1086 	movx	@dptr,a
      0001C4 EF               [12] 1087 	mov	a,r7
      0001C5 A3               [24] 1088 	inc	dptr
      0001C6 F0               [24] 1089 	movx	@dptr,a
                                   1090 ;	build/../main.c:66: g_ad9851      = ad9851_create(7); /* PA7 = FQ_UD */
      0001C7 75 82 07         [24] 1091 	mov	dpl, #0x07
      0001CA 12 04 DD         [24] 1092 	lcall	_ad9851_create
      0001CD AD 82            [24] 1093 	mov	r5, dpl
      0001CF AE 83            [24] 1094 	mov	r6, dph
      0001D1 AF F0            [24] 1095 	mov	r7, b
      0001D3 90 3C BE         [24] 1096 	mov	dptr,#_g_ad9851
      0001D6 ED               [12] 1097 	mov	a,r5
      0001D7 F0               [24] 1098 	movx	@dptr,a
      0001D8 EE               [12] 1099 	mov	a,r6
      0001D9 A3               [24] 1100 	inc	dptr
      0001DA F0               [24] 1101 	movx	@dptr,a
      0001DB EF               [12] 1102 	mov	a,r7
      0001DC A3               [24] 1103 	inc	dptr
      0001DD F0               [24] 1104 	movx	@dptr,a
                                   1105 ;	build/../main.c:69: ad9851_set_frequency(g_ad9851, ad9851_freq, 0x01);
      0001DE 75 10 8F         [24] 1106 	mov	_ad9851_set_frequency_PARM_2,#0x8f
      0001E1 75 11 C2         [24] 1107 	mov	(_ad9851_set_frequency_PARM_2 + 1),#0xc2
      0001E4 75 12 F5         [24] 1108 	mov	(_ad9851_set_frequency_PARM_2 + 2),#0xf5
      0001E7 75 13 28         [24] 1109 	mov	(_ad9851_set_frequency_PARM_2 + 3),#0x28
      0001EA 75 14 01         [24] 1110 	mov	_ad9851_set_frequency_PARM_3,#0x01
      0001ED 8D 82            [24] 1111 	mov	dpl, r5
      0001EF 8E 83            [24] 1112 	mov	dph, r6
      0001F1 8F F0            [24] 1113 	mov	b, r7
      0001F3 12 04 FD         [24] 1114 	lcall	_ad9851_set_frequency
                                   1115 ;	build/../main.c:74: if (eeprom_settings_load(regs, MAX2771_MAX_REGISTERS * 2) == EEPROM_OK) {
      0001F6 75 22 16         [24] 1116 	mov	_eeprom_settings_load_PARM_2,#0x16
      0001F9 75 23 00         [24] 1117 	mov	(_eeprom_settings_load_PARM_2 + 1),#0x00
      0001FC 90 3C 00         [24] 1118 	mov	dptr,#_device_init_regs_20000_100
      0001FF 75 F0 00         [24] 1119 	mov	b, #0x00
      000202 12 07 29         [24] 1120 	lcall	_eeprom_settings_load
      000205 E5 82            [12] 1121 	mov	a, dpl
      000207 70 42            [24] 1122 	jnz	00102$
                                   1123 ;	build/../main.c:75: max2771_apply_preset(g_max2771_ch1, &regs[0], MAX2771_MAX_REGISTERS);
      000209 90 3C B8         [24] 1124 	mov	dptr,#_g_max2771_ch1
      00020C E0               [24] 1125 	movx	a,@dptr
      00020D FD               [12] 1126 	mov	r5,a
      00020E A3               [24] 1127 	inc	dptr
      00020F E0               [24] 1128 	movx	a,@dptr
      000210 FE               [12] 1129 	mov	r6,a
      000211 A3               [24] 1130 	inc	dptr
      000212 E0               [24] 1131 	movx	a,@dptr
      000213 FF               [12] 1132 	mov	r7,a
      000214 75 40 00         [24] 1133 	mov	_max2771_apply_preset_PARM_2,#_device_init_regs_20000_100
      000217 75 41 3C         [24] 1134 	mov	(_max2771_apply_preset_PARM_2 + 1),#(_device_init_regs_20000_100 >> 8)
      00021A 75 42 00         [24] 1135 	mov	(_max2771_apply_preset_PARM_2 + 2),#0x00
      00021D 75 43 0B         [24] 1136 	mov	_max2771_apply_preset_PARM_3,#0x0b
      000220 8D 82            [24] 1137 	mov	dpl, r5
      000222 8E 83            [24] 1138 	mov	dph, r6
      000224 8F F0            [24] 1139 	mov	b, r7
      000226 12 0B 4E         [24] 1140 	lcall	_max2771_apply_preset
                                   1141 ;	build/../main.c:76: max2771_apply_preset(g_max2771_ch2, &regs[MAX2771_MAX_REGISTERS], MAX2771_MAX_REGISTERS);
      000229 90 3C BB         [24] 1142 	mov	dptr,#_g_max2771_ch2
      00022C E0               [24] 1143 	movx	a,@dptr
      00022D FD               [12] 1144 	mov	r5,a
      00022E A3               [24] 1145 	inc	dptr
      00022F E0               [24] 1146 	movx	a,@dptr
      000230 FE               [12] 1147 	mov	r6,a
      000231 A3               [24] 1148 	inc	dptr
      000232 E0               [24] 1149 	movx	a,@dptr
      000233 FF               [12] 1150 	mov	r7,a
      000234 75 40 2C         [24] 1151 	mov	_max2771_apply_preset_PARM_2,#(_device_init_regs_20000_100 + 0x002c)
      000237 75 41 3C         [24] 1152 	mov	(_max2771_apply_preset_PARM_2 + 1),#((_device_init_regs_20000_100 + 0x002c) >> 8)
      00023A 75 42 00         [24] 1153 	mov	(_max2771_apply_preset_PARM_2 + 2),#0x00
      00023D 75 43 0B         [24] 1154 	mov	_max2771_apply_preset_PARM_3,#0x0b
      000240 8D 82            [24] 1155 	mov	dpl, r5
      000242 8E 83            [24] 1156 	mov	dph, r6
      000244 8F F0            [24] 1157 	mov	b, r7
      000246 12 0B 4E         [24] 1158 	lcall	_max2771_apply_preset
      000249 80 28            [24] 1159 	sjmp	00103$
      00024B                       1160 00102$:
                                   1161 ;	build/../main.c:79: max2771_load_defaults(g_max2771_ch1);
      00024B 90 3C B8         [24] 1162 	mov	dptr,#_g_max2771_ch1
      00024E E0               [24] 1163 	movx	a,@dptr
      00024F FD               [12] 1164 	mov	r5,a
      000250 A3               [24] 1165 	inc	dptr
      000251 E0               [24] 1166 	movx	a,@dptr
      000252 FE               [12] 1167 	mov	r6,a
      000253 A3               [24] 1168 	inc	dptr
      000254 E0               [24] 1169 	movx	a,@dptr
      000255 FF               [12] 1170 	mov	r7,a
      000256 8D 82            [24] 1171 	mov	dpl, r5
      000258 8E 83            [24] 1172 	mov	dph, r6
      00025A 8F F0            [24] 1173 	mov	b, r7
      00025C 12 0A D7         [24] 1174 	lcall	_max2771_load_defaults
                                   1175 ;	build/../main.c:80: max2771_load_defaults(g_max2771_ch2);
      00025F 90 3C BB         [24] 1176 	mov	dptr,#_g_max2771_ch2
      000262 E0               [24] 1177 	movx	a,@dptr
      000263 FD               [12] 1178 	mov	r5,a
      000264 A3               [24] 1179 	inc	dptr
      000265 E0               [24] 1180 	movx	a,@dptr
      000266 FE               [12] 1181 	mov	r6,a
      000267 A3               [24] 1182 	inc	dptr
      000268 E0               [24] 1183 	movx	a,@dptr
      000269 FF               [12] 1184 	mov	r7,a
      00026A 8D 82            [24] 1185 	mov	dpl, r5
      00026C 8E 83            [24] 1186 	mov	dph, r6
      00026E 8F F0            [24] 1187 	mov	b, r7
      000270 12 0A D7         [24] 1188 	lcall	_max2771_load_defaults
      000273                       1189 00103$:
                                   1190 ;	build/../main.c:85: board_d_init_output(LED1_PIN);
      000273 75 82 06         [24] 1191 	mov	dpl, #0x06
      000276 12 06 21         [24] 1192 	lcall	_board_d_init_output
                                   1193 ;	build/../main.c:86: board_d_init_output(LED2_PIN);
      000279 75 82 07         [24] 1194 	mov	dpl, #0x07
      00027C 12 06 21         [24] 1195 	lcall	_board_d_init_output
                                   1196 ;	build/../main.c:87: board_d_write(LED1_PIN, PIN_LOW);
      00027F 75 1C 00         [24] 1197 	mov	_board_d_write_PARM_2,#0x00
      000282 75 82 06         [24] 1198 	mov	dpl, #0x06
      000285 12 06 33         [24] 1199 	lcall	_board_d_write
                                   1200 ;	build/../main.c:88: board_d_write(LED2_PIN, PIN_LOW);
      000288 75 1C 00         [24] 1201 	mov	_board_d_write_PARM_2,#0x00
      00028B 75 82 07         [24] 1202 	mov	dpl, #0x07
      00028E 12 06 33         [24] 1203 	lcall	_board_d_write
                                   1204 ;	build/../main.c:90: start_bulk_transfer();
                                   1205 ;	build/../main.c:91: }
      000291 02 01 36         [24] 1206 	ljmp	_start_bulk_transfer
                                   1207 ;------------------------------------------------------------
                                   1208 ;Allocation info for local variables in function 'usb_endpoint_init'
                                   1209 ;------------------------------------------------------------
                                   1210 ;	build/../main.c:93: static void usb_endpoint_init(void) {
                                   1211 ;	-----------------------------------------
                                   1212 ;	 function usb_endpoint_init
                                   1213 ;	-----------------------------------------
      000294                       1214 _usb_endpoint_init:
                                   1215 ;	build/../main.c:94: EP2FIFOCFG = 0x00; SYNCDELAY;
      000294 90 E6 18         [24] 1216 	mov	dptr,#_EP2FIFOCFG
      000297 E4               [12] 1217 	clr	a
      000298 F0               [24] 1218 	movx	@dptr,a
      000299 00               [12] 1219 	nop	
      00029A 00               [12] 1220 	nop	
      00029B 00               [12] 1221 	nop	
      00029C 00               [12] 1222 	nop	
                                   1223 ;	build/../main.c:95: EP4FIFOCFG = 0x00; SYNCDELAY;
      00029D 90 E6 19         [24] 1224 	mov	dptr,#_EP4FIFOCFG
      0002A0 E4               [12] 1225 	clr	a
      0002A1 F0               [24] 1226 	movx	@dptr,a
      0002A2 00               [12] 1227 	nop	
      0002A3 00               [12] 1228 	nop	
      0002A4 00               [12] 1229 	nop	
      0002A5 00               [12] 1230 	nop	
                                   1231 ;	build/../main.c:96: EP6FIFOCFG = 0x00; SYNCDELAY;
      0002A6 90 E6 1A         [24] 1232 	mov	dptr,#_EP6FIFOCFG
      0002A9 E4               [12] 1233 	clr	a
      0002AA F0               [24] 1234 	movx	@dptr,a
      0002AB 00               [12] 1235 	nop	
      0002AC 00               [12] 1236 	nop	
      0002AD 00               [12] 1237 	nop	
      0002AE 00               [12] 1238 	nop	
                                   1239 ;	build/../main.c:97: EP8FIFOCFG = 0x00; SYNCDELAY;
      0002AF 90 E6 1B         [24] 1240 	mov	dptr,#_EP8FIFOCFG
      0002B2 E4               [12] 1241 	clr	a
      0002B3 F0               [24] 1242 	movx	@dptr,a
      0002B4 00               [12] 1243 	nop	
      0002B5 00               [12] 1244 	nop	
      0002B6 00               [12] 1245 	nop	
      0002B7 00               [12] 1246 	nop	
                                   1247 ;	build/../main.c:99: EP2CFG = 0x20; SYNCDELAY; /* OFF, OUT, BULK */
      0002B8 90 E6 12         [24] 1248 	mov	dptr,#_EP2CFG
      0002BB 74 20            [12] 1249 	mov	a,#0x20
      0002BD F0               [24] 1250 	movx	@dptr,a
      0002BE 00               [12] 1251 	nop	
      0002BF 00               [12] 1252 	nop	
      0002C0 00               [12] 1253 	nop	
      0002C1 00               [12] 1254 	nop	
                                   1255 ;	build/../main.c:100: EP4CFG = 0x20; SYNCDELAY;
      0002C2 90 E6 13         [24] 1256 	mov	dptr,#_EP4CFG
      0002C5 74 20            [12] 1257 	mov	a,#0x20
      0002C7 F0               [24] 1258 	movx	@dptr,a
      0002C8 00               [12] 1259 	nop	
      0002C9 00               [12] 1260 	nop	
      0002CA 00               [12] 1261 	nop	
      0002CB 00               [12] 1262 	nop	
                                   1263 ;	build/../main.c:101: EP6CFG = 0xE0; SYNCDELAY; /* ON, IN, BULK, 512B, 4x */
      0002CC 90 E6 14         [24] 1264 	mov	dptr,#_EP6CFG
      0002CF 74 E0            [12] 1265 	mov	a,#0xe0
      0002D1 F0               [24] 1266 	movx	@dptr,a
      0002D2 00               [12] 1267 	nop	
      0002D3 00               [12] 1268 	nop	
      0002D4 00               [12] 1269 	nop	
      0002D5 00               [12] 1270 	nop	
                                   1271 ;	build/../main.c:102: EP8CFG = 0x60; SYNCDELAY; /* OFF, IN, BULK */
      0002D6 90 E6 15         [24] 1272 	mov	dptr,#_EP8CFG
      0002D9 74 60            [12] 1273 	mov	a,#0x60
      0002DB F0               [24] 1274 	movx	@dptr,a
      0002DC 00               [12] 1275 	nop	
      0002DD 00               [12] 1276 	nop	
      0002DE 00               [12] 1277 	nop	
      0002DF 00               [12] 1278 	nop	
                                   1279 ;	build/../main.c:104: FIFOPINPOLAR  = 0x00; SYNCDELAY;
      0002E0 90 E6 09         [24] 1280 	mov	dptr,#_FIFOPINPOLAR
      0002E3 E4               [12] 1281 	clr	a
      0002E4 F0               [24] 1282 	movx	@dptr,a
      0002E5 00               [12] 1283 	nop	
      0002E6 00               [12] 1284 	nop	
      0002E7 00               [12] 1285 	nop	
      0002E8 00               [12] 1286 	nop	
                                   1287 ;	build/../main.c:105: EP6AUTOINLENH = 0x02; SYNCDELAY;
      0002E9 90 E6 24         [24] 1288 	mov	dptr,#_EP6AUTOINLENH
      0002EC 74 02            [12] 1289 	mov	a,#0x02
      0002EE F0               [24] 1290 	movx	@dptr,a
      0002EF 00               [12] 1291 	nop	
      0002F0 00               [12] 1292 	nop	
      0002F1 00               [12] 1293 	nop	
      0002F2 00               [12] 1294 	nop	
                                   1295 ;	build/../main.c:106: EP6AUTOINLENL = 0x00; SYNCDELAY;
      0002F3 90 E6 25         [24] 1296 	mov	dptr,#_EP6AUTOINLENL
      0002F6 E4               [12] 1297 	clr	a
      0002F7 F0               [24] 1298 	movx	@dptr,a
      0002F8 00               [12] 1299 	nop	
      0002F9 00               [12] 1300 	nop	
      0002FA 00               [12] 1301 	nop	
      0002FB 00               [12] 1302 	nop	
                                   1303 ;	build/../main.c:108: FIFORESET = 0x86; SYNCDELAY;
      0002FC 90 E6 04         [24] 1304 	mov	dptr,#_FIFORESET
      0002FF 74 86            [12] 1305 	mov	a,#0x86
      000301 F0               [24] 1306 	movx	@dptr,a
      000302 00               [12] 1307 	nop	
      000303 00               [12] 1308 	nop	
      000304 00               [12] 1309 	nop	
      000305 00               [12] 1310 	nop	
                                   1311 ;	build/../main.c:109: FIFORESET = 0x00; SYNCDELAY;
      000306 90 E6 04         [24] 1312 	mov	dptr,#_FIFORESET
      000309 E4               [12] 1313 	clr	a
      00030A F0               [24] 1314 	movx	@dptr,a
      00030B 00               [12] 1315 	nop	
      00030C 00               [12] 1316 	nop	
      00030D 00               [12] 1317 	nop	
      00030E 00               [12] 1318 	nop	
                                   1319 ;	build/../main.c:110: }
      00030F 22               [24] 1320 	ret
                                   1321 ;------------------------------------------------------------
                                   1322 ;Allocation info for local variables in function 'sudav_isr'
                                   1323 ;------------------------------------------------------------
                                   1324 ;	build/../main.c:113: void sudav_isr(void) __interrupt (SUDAV_ISR) {
                                   1325 ;	-----------------------------------------
                                   1326 ;	 function sudav_isr
                                   1327 ;	-----------------------------------------
      000310                       1328 _sudav_isr:
      000310 C0 E0            [24] 1329 	push	acc
      000312 C0 82            [24] 1330 	push	dpl
      000314 C0 83            [24] 1331 	push	dph
                                   1332 ;	build/../main.c:114: got_sud = TRUE;
                                   1333 ;	assignBit
      000316 D2 00            [12] 1334 	setb	_got_sud
                                   1335 ;	build/../main.c:115: CLEAR_SUDAV();
      000318 53 91 EF         [24] 1336 	anl	_EXIF,#0xef
      00031B 90 E6 5D         [24] 1337 	mov	dptr,#_USBIRQ
      00031E 74 01            [12] 1338 	mov	a,#0x01
      000320 F0               [24] 1339 	movx	@dptr,a
                                   1340 ;	build/../main.c:116: }
      000321 D0 83            [24] 1341 	pop	dph
      000323 D0 82            [24] 1342 	pop	dpl
      000325 D0 E0            [24] 1343 	pop	acc
      000327 32               [24] 1344 	reti
                                   1345 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1346 ;	eliminated unneeded push/pop not_psw
                                   1347 ;	eliminated unneeded push/pop b
                                   1348 ;------------------------------------------------------------
                                   1349 ;Allocation info for local variables in function 'sof_isr'
                                   1350 ;------------------------------------------------------------
                                   1351 ;	build/../main.c:118: void sof_isr(void) __interrupt (SOF_ISR) __using (1) {
                                   1352 ;	-----------------------------------------
                                   1353 ;	 function sof_isr
                                   1354 ;	-----------------------------------------
      000328                       1355 _sof_isr:
                           00000F  1356 	ar7 = 0x0f
                           00000E  1357 	ar6 = 0x0e
                           00000D  1358 	ar5 = 0x0d
                           00000C  1359 	ar4 = 0x0c
                           00000B  1360 	ar3 = 0x0b
                           00000A  1361 	ar2 = 0x0a
                           000009  1362 	ar1 = 0x09
                           000008  1363 	ar0 = 0x08
      000328 C0 E0            [24] 1364 	push	acc
      00032A C0 82            [24] 1365 	push	dpl
      00032C C0 83            [24] 1366 	push	dph
                                   1367 ;	build/../main.c:119: CLEAR_SOF();
      00032E 53 91 EF         [24] 1368 	anl	_EXIF,#0xef
      000331 90 E6 5D         [24] 1369 	mov	dptr,#_USBIRQ
      000334 74 02            [12] 1370 	mov	a,#0x02
      000336 F0               [24] 1371 	movx	@dptr,a
                                   1372 ;	build/../main.c:120: }
      000337 D0 83            [24] 1373 	pop	dph
      000339 D0 82            [24] 1374 	pop	dpl
      00033B D0 E0            [24] 1375 	pop	acc
      00033D 32               [24] 1376 	reti
                                   1377 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1378 ;	eliminated unneeded push/pop not_psw
                                   1379 ;	eliminated unneeded push/pop b
                                   1380 ;------------------------------------------------------------
                                   1381 ;Allocation info for local variables in function 'usbreset_isr'
                                   1382 ;------------------------------------------------------------
                                   1383 ;	build/../main.c:122: void usbreset_isr(void) __interrupt (USBRESET_ISR) {
                                   1384 ;	-----------------------------------------
                                   1385 ;	 function usbreset_isr
                                   1386 ;	-----------------------------------------
      00033E                       1387 _usbreset_isr:
                           000007  1388 	ar7 = 0x07
                           000006  1389 	ar6 = 0x06
                           000005  1390 	ar5 = 0x05
                           000004  1391 	ar4 = 0x04
                           000003  1392 	ar3 = 0x03
                           000002  1393 	ar2 = 0x02
                           000001  1394 	ar1 = 0x01
                           000000  1395 	ar0 = 0x00
      00033E C0 21            [24] 1396 	push	bits
      000340 C0 E0            [24] 1397 	push	acc
      000342 C0 F0            [24] 1398 	push	b
      000344 C0 82            [24] 1399 	push	dpl
      000346 C0 83            [24] 1400 	push	dph
      000348 C0 07            [24] 1401 	push	(0+7)
      00034A C0 06            [24] 1402 	push	(0+6)
      00034C C0 05            [24] 1403 	push	(0+5)
      00034E C0 04            [24] 1404 	push	(0+4)
      000350 C0 03            [24] 1405 	push	(0+3)
      000352 C0 02            [24] 1406 	push	(0+2)
      000354 C0 01            [24] 1407 	push	(0+1)
      000356 C0 00            [24] 1408 	push	(0+0)
      000358 C0 D0            [24] 1409 	push	psw
      00035A 75 D0 00         [24] 1410 	mov	psw,#0x00
                                   1411 ;	build/../main.c:123: handle_hispeed(FALSE);
      00035D 75 82 00         [24] 1412 	mov	dpl, #0x00
      000360 12 16 79         [24] 1413 	lcall	_handle_hispeed
                                   1414 ;	build/../main.c:124: CLEAR_USBRESET();
      000363 53 91 EF         [24] 1415 	anl	_EXIF,#0xef
      000366 90 E6 5D         [24] 1416 	mov	dptr,#_USBIRQ
      000369 74 10            [12] 1417 	mov	a,#0x10
      00036B F0               [24] 1418 	movx	@dptr,a
                                   1419 ;	build/../main.c:125: }
      00036C D0 D0            [24] 1420 	pop	psw
      00036E D0 00            [24] 1421 	pop	(0+0)
      000370 D0 01            [24] 1422 	pop	(0+1)
      000372 D0 02            [24] 1423 	pop	(0+2)
      000374 D0 03            [24] 1424 	pop	(0+3)
      000376 D0 04            [24] 1425 	pop	(0+4)
      000378 D0 05            [24] 1426 	pop	(0+5)
      00037A D0 06            [24] 1427 	pop	(0+6)
      00037C D0 07            [24] 1428 	pop	(0+7)
      00037E D0 83            [24] 1429 	pop	dph
      000380 D0 82            [24] 1430 	pop	dpl
      000382 D0 F0            [24] 1431 	pop	b
      000384 D0 E0            [24] 1432 	pop	acc
      000386 D0 21            [24] 1433 	pop	bits
      000388 02 00 9C         [24] 1434 	ljmp	sdcc_atomic_maybe_rollback
                                   1435 ;------------------------------------------------------------
                                   1436 ;Allocation info for local variables in function 'hispeed_isr'
                                   1437 ;------------------------------------------------------------
                                   1438 ;	build/../main.c:127: void hispeed_isr(void) __interrupt (HISPEED_ISR) {
                                   1439 ;	-----------------------------------------
                                   1440 ;	 function hispeed_isr
                                   1441 ;	-----------------------------------------
      00038B                       1442 _hispeed_isr:
      00038B C0 21            [24] 1443 	push	bits
      00038D C0 E0            [24] 1444 	push	acc
      00038F C0 F0            [24] 1445 	push	b
      000391 C0 82            [24] 1446 	push	dpl
      000393 C0 83            [24] 1447 	push	dph
      000395 C0 07            [24] 1448 	push	(0+7)
      000397 C0 06            [24] 1449 	push	(0+6)
      000399 C0 05            [24] 1450 	push	(0+5)
      00039B C0 04            [24] 1451 	push	(0+4)
      00039D C0 03            [24] 1452 	push	(0+3)
      00039F C0 02            [24] 1453 	push	(0+2)
      0003A1 C0 01            [24] 1454 	push	(0+1)
      0003A3 C0 00            [24] 1455 	push	(0+0)
      0003A5 C0 D0            [24] 1456 	push	psw
      0003A7 75 D0 00         [24] 1457 	mov	psw,#0x00
                                   1458 ;	build/../main.c:128: handle_hispeed(TRUE);
      0003AA 75 82 01         [24] 1459 	mov	dpl, #0x01
      0003AD 12 16 79         [24] 1460 	lcall	_handle_hispeed
                                   1461 ;	build/../main.c:129: CLEAR_HISPEED();
      0003B0 53 91 EF         [24] 1462 	anl	_EXIF,#0xef
      0003B3 90 E6 5D         [24] 1463 	mov	dptr,#_USBIRQ
      0003B6 74 20            [12] 1464 	mov	a,#0x20
      0003B8 F0               [24] 1465 	movx	@dptr,a
                                   1466 ;	build/../main.c:130: }
      0003B9 D0 D0            [24] 1467 	pop	psw
      0003BB D0 00            [24] 1468 	pop	(0+0)
      0003BD D0 01            [24] 1469 	pop	(0+1)
      0003BF D0 02            [24] 1470 	pop	(0+2)
      0003C1 D0 03            [24] 1471 	pop	(0+3)
      0003C3 D0 04            [24] 1472 	pop	(0+4)
      0003C5 D0 05            [24] 1473 	pop	(0+5)
      0003C7 D0 06            [24] 1474 	pop	(0+6)
      0003C9 D0 07            [24] 1475 	pop	(0+7)
      0003CB D0 83            [24] 1476 	pop	dph
      0003CD D0 82            [24] 1477 	pop	dpl
      0003CF D0 F0            [24] 1478 	pop	b
      0003D1 D0 E0            [24] 1479 	pop	acc
      0003D3 D0 21            [24] 1480 	pop	bits
      0003D5 02 00 9C         [24] 1481 	ljmp	sdcc_atomic_maybe_rollback
                                   1482 ;------------------------------------------------------------
                                   1483 ;Allocation info for local variables in function 'main'
                                   1484 ;------------------------------------------------------------
                                   1485 ;	build/../main.c:133: void main(void) {
                                   1486 ;	-----------------------------------------
                                   1487 ;	 function main
                                   1488 ;	-----------------------------------------
      0003D8                       1489 _main:
                                   1490 ;	build/../main.c:134: got_sud = FALSE;
                                   1491 ;	assignBit
      0003D8 C2 00            [12] 1492 	clr	_got_sud
                                   1493 ;	build/../main.c:136: RENUMERATE_UNCOND();
      0003DA 90 E6 80         [24] 1494 	mov	dptr,#_USBCS
      0003DD E0               [24] 1495 	movx	a,@dptr
      0003DE 43 E0 0A         [24] 1496 	orl	acc,#0x0a
      0003E1 F0               [24] 1497 	movx	@dptr,a
      0003E2 90 05 DC         [24] 1498 	mov	dptr,#0x05dc
      0003E5 12 17 AD         [24] 1499 	lcall	_delay
      0003E8 90 E6 80         [24] 1500 	mov	dptr,#_USBCS
      0003EB E0               [24] 1501 	movx	a,@dptr
      0003EC 53 E0 F7         [24] 1502 	anl	acc,#0xf7
      0003EF F0               [24] 1503 	movx	@dptr,a
                                   1504 ;	build/../main.c:137: SETCPUFREQ(CLK_48M);
      0003F0 90 E6 00         [24] 1505 	mov	dptr,#_CPUCS
      0003F3 E0               [24] 1506 	movx	a,@dptr
      0003F4 54 E7            [12] 1507 	anl	a,#0xe7
      0003F6 44 10            [12] 1508 	orl	a,#0x10
      0003F8 F0               [24] 1509 	movx	@dptr,a
                                   1510 ;	build/../main.c:138: SETIF48MHZ();
      0003F9 90 E6 01         [24] 1511 	mov	dptr,#_IFCONFIG
      0003FC E0               [24] 1512 	movx	a,@dptr
      0003FD 43 E0 40         [24] 1513 	orl	acc,#0x40
      000400 F0               [24] 1514 	movx	@dptr,a
                                   1515 ;	build/../main.c:140: USE_USB_INTS();
                                   1516 ;	assignBit
      000401 D2 E8            [12] 1517 	setb	_EUSB
      000403 90 E6 68         [24] 1518 	mov	dptr,#_INTSETUP
      000406 E0               [24] 1519 	movx	a,@dptr
      000407 43 E0 08         [24] 1520 	orl	acc,#0x08
      00040A F0               [24] 1521 	movx	@dptr,a
                                   1522 ;	build/../main.c:141: ENABLE_SUDAV();
      00040B 90 E6 5C         [24] 1523 	mov	dptr,#_USBIE
      00040E E0               [24] 1524 	movx	a,@dptr
      00040F 43 E0 01         [24] 1525 	orl	acc,#0x01
      000412 F0               [24] 1526 	movx	@dptr,a
                                   1527 ;	build/../main.c:142: ENABLE_SOF();
      000413 90 E6 5C         [24] 1528 	mov	dptr,#_USBIE
      000416 E0               [24] 1529 	movx	a,@dptr
      000417 43 E0 02         [24] 1530 	orl	acc,#0x02
      00041A F0               [24] 1531 	movx	@dptr,a
                                   1532 ;	build/../main.c:143: ENABLE_HISPEED();
      00041B 90 E6 5C         [24] 1533 	mov	dptr,#_USBIE
      00041E E0               [24] 1534 	movx	a,@dptr
      00041F 43 E0 20         [24] 1535 	orl	acc,#0x20
      000422 F0               [24] 1536 	movx	@dptr,a
                                   1537 ;	build/../main.c:144: ENABLE_USBRESET();
      000423 90 E6 5C         [24] 1538 	mov	dptr,#_USBIE
      000426 E0               [24] 1539 	movx	a,@dptr
      000427 43 E0 10         [24] 1540 	orl	acc,#0x10
      00042A F0               [24] 1541 	movx	@dptr,a
                                   1542 ;	build/../main.c:146: EA = 1;
                                   1543 ;	assignBit
      00042B D2 AF            [12] 1544 	setb	_EA
                                   1545 ;	build/../main.c:148: device_init();
      00042D 12 01 75         [24] 1546 	lcall	_device_init
                                   1547 ;	build/../main.c:150: while (TRUE) {
      000430                       1548 00104$:
                                   1549 ;	build/../main.c:151: if (got_sud) {
      000430 30 00 FD         [24] 1550 	jnb	_got_sud,00104$
                                   1551 ;	build/../main.c:152: handle_setupdata();
      000433 12 13 7B         [24] 1552 	lcall	_handle_setupdata
                                   1553 ;	build/../main.c:153: got_sud = FALSE;
                                   1554 ;	assignBit
      000436 C2 00            [12] 1555 	clr	_got_sud
                                   1556 ;	build/../main.c:156: }
      000438 80 F6            [24] 1557 	sjmp	00104$
                                   1558 ;------------------------------------------------------------
                                   1559 ;Allocation info for local variables in function 'handle_get_interface'
                                   1560 ;------------------------------------------------------------
                                   1561 ;alt_ifc       Allocated with name '_handle_get_interface_PARM_2'
                                   1562 ;ifc           Allocated to registers r7 
                                   1563 ;------------------------------------------------------------
                                   1564 ;	build/../main.c:159: BOOL handle_get_interface(BYTE ifc, BYTE* alt_ifc) {
                                   1565 ;	-----------------------------------------
                                   1566 ;	 function handle_get_interface
                                   1567 ;	-----------------------------------------
      00043A                       1568 _handle_get_interface:
                                   1569 ;	build/../main.c:160: if (ifc == 0) {
      00043A E5 82            [12] 1570 	mov	a,dpl
      00043C 70 14            [24] 1571 	jnz	00102$
                                   1572 ;	build/../main.c:161: *alt_ifc = 0;
      00043E AD 1C            [24] 1573 	mov	r5,_handle_get_interface_PARM_2
      000440 AE 1D            [24] 1574 	mov	r6,(_handle_get_interface_PARM_2 + 1)
      000442 AF 1E            [24] 1575 	mov	r7,(_handle_get_interface_PARM_2 + 2)
      000444 8D 82            [24] 1576 	mov	dpl,r5
      000446 8E 83            [24] 1577 	mov	dph,r6
      000448 8F F0            [24] 1578 	mov	b,r7
      00044A E4               [12] 1579 	clr	a
      00044B 12 17 7B         [24] 1580 	lcall	__gptrput
                                   1581 ;	build/../main.c:162: return TRUE;
      00044E 75 82 01         [24] 1582 	mov	dpl, #0x01
      000451 22               [24] 1583 	ret
      000452                       1584 00102$:
                                   1585 ;	build/../main.c:164: return FALSE;
      000452 75 82 00         [24] 1586 	mov	dpl, #0x00
                                   1587 ;	build/../main.c:165: }
      000455 22               [24] 1588 	ret
                                   1589 ;------------------------------------------------------------
                                   1590 ;Allocation info for local variables in function 'handle_set_interface'
                                   1591 ;------------------------------------------------------------
                                   1592 ;alt_ifc       Allocated with name '_handle_set_interface_PARM_2'
                                   1593 ;ifc           Allocated to registers r7 
                                   1594 ;x             Allocated to registers 
                                   1595 ;x             Allocated to registers 
                                   1596 ;------------------------------------------------------------
                                   1597 ;	build/../main.c:167: BOOL handle_set_interface(BYTE ifc, BYTE alt_ifc) {
                                   1598 ;	-----------------------------------------
                                   1599 ;	 function handle_set_interface
                                   1600 ;	-----------------------------------------
      000456                       1601 _handle_set_interface:
                                   1602 ;	build/../main.c:168: if (ifc == 0 && alt_ifc == 0) {
      000456 E5 82            [12] 1603 	mov	a,dpl
      000458 FF               [12] 1604 	mov	r7,a
      000459 70 65            [24] 1605 	jnz	00112$
      00045B E5 1C            [12] 1606 	mov	a,_handle_set_interface_PARM_2
      00045D 70 61            [24] 1607 	jnz	00112$
                                   1608 ;	build/../main.c:169: RESETTOGGLE(0x02);
      00045F 90 E6 83         [24] 1609 	mov	dptr,#_TOGCTL
      000462 74 02            [12] 1610 	mov	a,#0x02
      000464 F0               [24] 1611 	movx	@dptr,a
      000465 74 22            [12] 1612 	mov	a,#0x22
      000467 F0               [24] 1613 	movx	@dptr,a
                                   1614 ;	build/../main.c:170: RESETTOGGLE(0x86);
      000468 74 16            [12] 1615 	mov	a,#0x16
      00046A F0               [24] 1616 	movx	@dptr,a
      00046B 74 36            [12] 1617 	mov	a,#0x36
      00046D F0               [24] 1618 	movx	@dptr,a
                                   1619 ;	build/../main.c:171: RESETFIFO(0x02);
      00046E 90 E6 04         [24] 1620 	mov	dptr,#_FIFORESET
      000471 74 80            [12] 1621 	mov	a,#0x80
      000473 F0               [24] 1622 	movx	@dptr,a
      000474 00               [12] 1623 	nop	
      000475 00               [12] 1624 	nop	
      000476 00               [12] 1625 	nop	
      000477 00               [12] 1626 	nop	
      000478 90 E6 04         [24] 1627 	mov	dptr,#_FIFORESET
      00047B 74 82            [12] 1628 	mov	a,#0x82
      00047D F0               [24] 1629 	movx	@dptr,a
      00047E 00               [12] 1630 	nop	
      00047F 00               [12] 1631 	nop	
      000480 00               [12] 1632 	nop	
      000481 00               [12] 1633 	nop	
      000482 90 E6 04         [24] 1634 	mov	dptr,#_FIFORESET
      000485 E4               [12] 1635 	clr	a
      000486 F0               [24] 1636 	movx	@dptr,a
      000487 00               [12] 1637 	nop	
      000488 00               [12] 1638 	nop	
      000489 00               [12] 1639 	nop	
      00048A 00               [12] 1640 	nop	
                                   1641 ;	build/../main.c:172: EP2BCL = 0x80; SYNCDELAY;
      00048B 90 E6 91         [24] 1642 	mov	dptr,#_EP2BCL
      00048E 74 80            [12] 1643 	mov	a,#0x80
      000490 F0               [24] 1644 	movx	@dptr,a
      000491 00               [12] 1645 	nop	
      000492 00               [12] 1646 	nop	
      000493 00               [12] 1647 	nop	
      000494 00               [12] 1648 	nop	
                                   1649 ;	build/../main.c:173: EP2BCL = 0x80; SYNCDELAY;
      000495 90 E6 91         [24] 1650 	mov	dptr,#_EP2BCL
      000498 74 80            [12] 1651 	mov	a,#0x80
      00049A F0               [24] 1652 	movx	@dptr,a
      00049B 00               [12] 1653 	nop	
      00049C 00               [12] 1654 	nop	
      00049D 00               [12] 1655 	nop	
      00049E 00               [12] 1656 	nop	
                                   1657 ;	build/../main.c:174: RESETFIFO(0x86);
      00049F 90 E6 04         [24] 1658 	mov	dptr,#_FIFORESET
      0004A2 74 80            [12] 1659 	mov	a,#0x80
      0004A4 F0               [24] 1660 	movx	@dptr,a
      0004A5 00               [12] 1661 	nop	
      0004A6 00               [12] 1662 	nop	
      0004A7 00               [12] 1663 	nop	
      0004A8 00               [12] 1664 	nop	
      0004A9 90 E6 04         [24] 1665 	mov	dptr,#_FIFORESET
      0004AC 74 86            [12] 1666 	mov	a,#0x86
      0004AE F0               [24] 1667 	movx	@dptr,a
      0004AF 00               [12] 1668 	nop	
      0004B0 00               [12] 1669 	nop	
      0004B1 00               [12] 1670 	nop	
      0004B2 00               [12] 1671 	nop	
      0004B3 90 E6 04         [24] 1672 	mov	dptr,#_FIFORESET
      0004B6 E4               [12] 1673 	clr	a
      0004B7 F0               [24] 1674 	movx	@dptr,a
      0004B8 00               [12] 1675 	nop	
      0004B9 00               [12] 1676 	nop	
      0004BA 00               [12] 1677 	nop	
      0004BB 00               [12] 1678 	nop	
                                   1679 ;	build/../main.c:175: return TRUE;
      0004BC 75 82 01         [24] 1680 	mov	dpl, #0x01
      0004BF 22               [24] 1681 	ret
      0004C0                       1682 00112$:
                                   1683 ;	build/../main.c:177: return FALSE;
      0004C0 75 82 00         [24] 1684 	mov	dpl, #0x00
                                   1685 ;	build/../main.c:178: }
      0004C3 22               [24] 1686 	ret
                                   1687 ;------------------------------------------------------------
                                   1688 ;Allocation info for local variables in function 'handle_get_configuration'
                                   1689 ;------------------------------------------------------------
                                   1690 ;	build/../main.c:180: BYTE handle_get_configuration(void) {
                                   1691 ;	-----------------------------------------
                                   1692 ;	 function handle_get_configuration
                                   1693 ;	-----------------------------------------
      0004C4                       1694 _handle_get_configuration:
                                   1695 ;	build/../main.c:181: return 1;
      0004C4 75 82 01         [24] 1696 	mov	dpl, #0x01
                                   1697 ;	build/../main.c:182: }
      0004C7 22               [24] 1698 	ret
                                   1699 ;------------------------------------------------------------
                                   1700 ;Allocation info for local variables in function 'handle_set_configuration'
                                   1701 ;------------------------------------------------------------
                                   1702 ;cfg           Allocated to registers r7 
                                   1703 ;------------------------------------------------------------
                                   1704 ;	build/../main.c:184: BOOL handle_set_configuration(BYTE cfg) {
                                   1705 ;	-----------------------------------------
                                   1706 ;	 function handle_set_configuration
                                   1707 ;	-----------------------------------------
      0004C8                       1708 _handle_set_configuration:
      0004C8 AF 82            [24] 1709 	mov	r7, dpl
                                   1710 ;	build/../main.c:185: return (cfg == 1) ? TRUE : FALSE;
      0004CA BF 01 04         [24] 1711 	cjne	r7,#0x01,00103$
      0004CD 7F 01            [12] 1712 	mov	r7,#0x01
      0004CF 80 02            [24] 1713 	sjmp	00104$
      0004D1                       1714 00103$:
      0004D1 7F 00            [12] 1715 	mov	r7,#0x00
      0004D3                       1716 00104$:
      0004D3 8F 82            [24] 1717 	mov	dpl,r7
                                   1718 ;	build/../main.c:186: }
      0004D5 22               [24] 1719 	ret
                                   1720 ;------------------------------------------------------------
                                   1721 ;Allocation info for local variables in function 'handle_get_descriptor'
                                   1722 ;------------------------------------------------------------
                                   1723 ;	build/../main.c:188: BOOL handle_get_descriptor(void) {
                                   1724 ;	-----------------------------------------
                                   1725 ;	 function handle_get_descriptor
                                   1726 ;	-----------------------------------------
      0004D6                       1727 _handle_get_descriptor:
                                   1728 ;	build/../main.c:189: return FALSE;
      0004D6 75 82 00         [24] 1729 	mov	dpl, #0x00
                                   1730 ;	build/../main.c:190: }
      0004D9 22               [24] 1731 	ret
                                   1732 ;------------------------------------------------------------
                                   1733 ;Allocation info for local variables in function 'handle_vendorcommand'
                                   1734 ;------------------------------------------------------------
                                   1735 ;cmd           Allocated to registers r7 
                                   1736 ;------------------------------------------------------------
                                   1737 ;	build/../main.c:192: BOOL handle_vendorcommand(BYTE cmd) {
                                   1738 ;	-----------------------------------------
                                   1739 ;	 function handle_vendorcommand
                                   1740 ;	-----------------------------------------
      0004DA                       1741 _handle_vendorcommand:
                                   1742 ;	build/../main.c:193: return usb_vendor_dispatch(cmd);
                                   1743 ;	build/../main.c:194: }
      0004DA 02 0F 4D         [24] 1744 	ljmp	_usb_vendor_dispatch
                                   1745 	.area CSEG    (CODE)
                                   1746 	.area CONST   (CODE)
                                   1747 	.area XINIT   (CODE)
      001885                       1748 __xinit__g_max2771_ch1:
                                   1749 ; generic printIvalPtr
      001885 00 00 00              1750 	.byte #0x00,#0x00,#0x00
      001888                       1751 __xinit__g_max2771_ch2:
                                   1752 ; generic printIvalPtr
      001888 00 00 00              1753 	.byte #0x00,#0x00,#0x00
      00188B                       1754 __xinit__g_ad9851:
                                   1755 ; generic printIvalPtr
      00188B 00 00 00              1756 	.byte #0x00,#0x00,#0x00
                                   1757 	.area CABS    (ABS,CODE)
