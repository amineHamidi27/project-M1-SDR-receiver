                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module usb_vendor
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _device_reset
                                     12 	.globl _stop_bulk_transfer
                                     13 	.globl _start_bulk_transfer
                                     14 	.globl _eeprom_settings_save
                                     15 	.globl _ad9851_set_frequency
                                     16 	.globl _max2771_get_lock_status
                                     17 	.globl _max2771_read_register
                                     18 	.globl _max2771_write_register
                                     19 	.globl _EIPX6
                                     20 	.globl _EIPX5
                                     21 	.globl _EIPX4
                                     22 	.globl _PI2C
                                     23 	.globl _PUSB
                                     24 	.globl _EIEX6
                                     25 	.globl _EIEX5
                                     26 	.globl _EIEX4
                                     27 	.globl _EI2C
                                     28 	.globl _EUSB
                                     29 	.globl _SMOD1
                                     30 	.globl _ERESI
                                     31 	.globl _RESI
                                     32 	.globl _INT6
                                     33 	.globl _CY
                                     34 	.globl _AC
                                     35 	.globl _F0
                                     36 	.globl _RS1
                                     37 	.globl _RS0
                                     38 	.globl _OV
                                     39 	.globl _FL
                                     40 	.globl _P
                                     41 	.globl _TF2
                                     42 	.globl _EXF2
                                     43 	.globl _RCLK
                                     44 	.globl _TCLK
                                     45 	.globl _EXEN2
                                     46 	.globl _TR2
                                     47 	.globl _C_T2
                                     48 	.globl _CP_RL2
                                     49 	.globl _SM01
                                     50 	.globl _SM11
                                     51 	.globl _SM21
                                     52 	.globl _REN1
                                     53 	.globl _TB81
                                     54 	.globl _RB81
                                     55 	.globl _TI1
                                     56 	.globl _RI1
                                     57 	.globl _PS1
                                     58 	.globl _PT2
                                     59 	.globl _PS0
                                     60 	.globl _PT1
                                     61 	.globl _PX1
                                     62 	.globl _PT0
                                     63 	.globl _PX0
                                     64 	.globl _PD7
                                     65 	.globl _PD6
                                     66 	.globl _PD5
                                     67 	.globl _PD4
                                     68 	.globl _PD3
                                     69 	.globl _PD2
                                     70 	.globl _PD1
                                     71 	.globl _PD0
                                     72 	.globl _EA
                                     73 	.globl _ES1
                                     74 	.globl _ET2
                                     75 	.globl _ES0
                                     76 	.globl _ET1
                                     77 	.globl _EX1
                                     78 	.globl _ET0
                                     79 	.globl _EX0
                                     80 	.globl _PC7
                                     81 	.globl _PC6
                                     82 	.globl _PC5
                                     83 	.globl _PC4
                                     84 	.globl _PC3
                                     85 	.globl _PC2
                                     86 	.globl _PC1
                                     87 	.globl _PC0
                                     88 	.globl _SM0
                                     89 	.globl _SM1
                                     90 	.globl _SM2
                                     91 	.globl _REN
                                     92 	.globl _TB8
                                     93 	.globl _RB8
                                     94 	.globl _TI
                                     95 	.globl _RI
                                     96 	.globl _PB7
                                     97 	.globl _PB6
                                     98 	.globl _PB5
                                     99 	.globl _PB4
                                    100 	.globl _PB3
                                    101 	.globl _PB2
                                    102 	.globl _PB1
                                    103 	.globl _PB0
                                    104 	.globl _TF1
                                    105 	.globl _TR1
                                    106 	.globl _TF0
                                    107 	.globl _TR0
                                    108 	.globl _IE1
                                    109 	.globl _IT1
                                    110 	.globl _IE0
                                    111 	.globl _IT0
                                    112 	.globl _PA7
                                    113 	.globl _PA6
                                    114 	.globl _PA5
                                    115 	.globl _PA4
                                    116 	.globl _PA3
                                    117 	.globl _PA2
                                    118 	.globl _PA1
                                    119 	.globl _PA0
                                    120 	.globl _EIP
                                    121 	.globl _B
                                    122 	.globl _EIE
                                    123 	.globl _ACC
                                    124 	.globl _EICON
                                    125 	.globl _PSW
                                    126 	.globl _TH2
                                    127 	.globl _TL2
                                    128 	.globl _RCAP2H
                                    129 	.globl _RCAP2L
                                    130 	.globl _T2CON
                                    131 	.globl _SBUF1
                                    132 	.globl _SCON1
                                    133 	.globl _GPIFSGLDATLNOX
                                    134 	.globl _GPIFSGLDATLX
                                    135 	.globl _GPIFSGLDATH
                                    136 	.globl _GPIFTRIG
                                    137 	.globl _EP01STAT
                                    138 	.globl _IP
                                    139 	.globl _OEE
                                    140 	.globl _OED
                                    141 	.globl _OEC
                                    142 	.globl _OEB
                                    143 	.globl _OEA
                                    144 	.globl _IOE
                                    145 	.globl _IOD
                                    146 	.globl _AUTOPTRSETUP
                                    147 	.globl _EP68FIFOFLGS
                                    148 	.globl _EP24FIFOFLGS
                                    149 	.globl _EP2468STAT
                                    150 	.globl _IE
                                    151 	.globl _INT4CLR
                                    152 	.globl _INT2CLR
                                    153 	.globl _IOC
                                    154 	.globl _AUTOPTRL2
                                    155 	.globl _AUTOPTRH2
                                    156 	.globl _AUTOPTRL1
                                    157 	.globl _AUTOPTRH1
                                    158 	.globl _SBUF0
                                    159 	.globl _SCON0
                                    160 	.globl __XPAGE
                                    161 	.globl _EXIF
                                    162 	.globl _IOB
                                    163 	.globl _CKCON
                                    164 	.globl _TH1
                                    165 	.globl _TH0
                                    166 	.globl _TL1
                                    167 	.globl _TL0
                                    168 	.globl _TMOD
                                    169 	.globl _TCON
                                    170 	.globl _PCON
                                    171 	.globl _DPS
                                    172 	.globl _DPH1
                                    173 	.globl _DPL1
                                    174 	.globl _DPH
                                    175 	.globl _DPL
                                    176 	.globl _SP
                                    177 	.globl _IOA
                                    178 	.globl _GPCR2
                                    179 	.globl _ECC2B2
                                    180 	.globl _ECC2B1
                                    181 	.globl _ECC2B0
                                    182 	.globl _ECC1B2
                                    183 	.globl _ECC1B1
                                    184 	.globl _ECC1B0
                                    185 	.globl _ECCRESET
                                    186 	.globl _ECCCFG
                                    187 	.globl _EP8FIFOBUF
                                    188 	.globl _EP6FIFOBUF
                                    189 	.globl _EP4FIFOBUF
                                    190 	.globl _EP2FIFOBUF
                                    191 	.globl _EP1INBUF
                                    192 	.globl _EP1OUTBUF
                                    193 	.globl _EP0BUF
                                    194 	.globl _UDMACRCQUAL
                                    195 	.globl _UDMACRCL
                                    196 	.globl _UDMACRCH
                                    197 	.globl _GPIFHOLDAMOUNT
                                    198 	.globl _FLOWSTBHPERIOD
                                    199 	.globl _FLOWSTBEDGE
                                    200 	.globl _FLOWSTB
                                    201 	.globl _FLOWHOLDOFF
                                    202 	.globl _FLOWEQ1CTL
                                    203 	.globl _FLOWEQ0CTL
                                    204 	.globl _FLOWLOGIC
                                    205 	.globl _FLOWSTATE
                                    206 	.globl _GPIFABORT
                                    207 	.globl _GPIFREADYSTAT
                                    208 	.globl _GPIFREADYCFG
                                    209 	.globl _XGPIFSGLDATLNOX
                                    210 	.globl _XGPIFSGLDATLX
                                    211 	.globl _XGPIFSGLDATH
                                    212 	.globl _EP8GPIFTRIG
                                    213 	.globl _EP8GPIFPFSTOP
                                    214 	.globl _EP8GPIFFLGSEL
                                    215 	.globl _EP6GPIFTRIG
                                    216 	.globl _EP6GPIFPFSTOP
                                    217 	.globl _EP6GPIFFLGSEL
                                    218 	.globl _EP4GPIFTRIG
                                    219 	.globl _EP4GPIFPFSTOP
                                    220 	.globl _EP4GPIFFLGSEL
                                    221 	.globl _EP2GPIFTRIG
                                    222 	.globl _EP2GPIFPFSTOP
                                    223 	.globl _EP2GPIFFLGSEL
                                    224 	.globl _GPIFTCB0
                                    225 	.globl _GPIFTCB1
                                    226 	.globl _GPIFTCB2
                                    227 	.globl _GPIFTCB3
                                    228 	.globl _GPIFADRL
                                    229 	.globl _GPIFADRH
                                    230 	.globl _GPIFCTLCFG
                                    231 	.globl _GPIFIDLECTL
                                    232 	.globl _GPIFIDLECS
                                    233 	.globl _GPIFWFSELECT
                                    234 	.globl _SETUPDAT
                                    235 	.globl _SUDPTRCTL
                                    236 	.globl _SUDPTRL
                                    237 	.globl _SUDPTRH
                                    238 	.globl _EP8FIFOBCL
                                    239 	.globl _EP8FIFOBCH
                                    240 	.globl _EP6FIFOBCL
                                    241 	.globl _EP6FIFOBCH
                                    242 	.globl _EP4FIFOBCL
                                    243 	.globl _EP4FIFOBCH
                                    244 	.globl _EP2FIFOBCL
                                    245 	.globl _EP2FIFOBCH
                                    246 	.globl _EP8FIFOFLGS
                                    247 	.globl _EP6FIFOFLGS
                                    248 	.globl _EP4FIFOFLGS
                                    249 	.globl _EP2FIFOFLGS
                                    250 	.globl _EP8CS
                                    251 	.globl _EP6CS
                                    252 	.globl _EP4CS
                                    253 	.globl _EP2CS
                                    254 	.globl _EP1INCS
                                    255 	.globl _EP1OUTCS
                                    256 	.globl _EP0CS
                                    257 	.globl _EP8BCL
                                    258 	.globl _EP8BCH
                                    259 	.globl _EP6BCL
                                    260 	.globl _EP6BCH
                                    261 	.globl _EP4BCL
                                    262 	.globl _EP4BCH
                                    263 	.globl _EP2BCL
                                    264 	.globl _EP2BCH
                                    265 	.globl _EP1INBC
                                    266 	.globl _EP1OUTBC
                                    267 	.globl _EP0BCL
                                    268 	.globl _EP0BCH
                                    269 	.globl _FNADDR
                                    270 	.globl _MICROFRAME
                                    271 	.globl _USBFRAMEL
                                    272 	.globl _USBFRAMEH
                                    273 	.globl _TOGCTL
                                    274 	.globl _WAKEUPCS
                                    275 	.globl _SUSPEND
                                    276 	.globl _USBCS
                                    277 	.globl _XAUTODAT2
                                    278 	.globl _XAUTODAT1
                                    279 	.globl _I2CTL
                                    280 	.globl _I2DAT
                                    281 	.globl _I2CS
                                    282 	.globl _PORTECFG
                                    283 	.globl _PORTCCFG
                                    284 	.globl _PORTACFG
                                    285 	.globl _INTSETUP
                                    286 	.globl _INT4IVEC
                                    287 	.globl _INT2IVEC
                                    288 	.globl _CLRERRCNT
                                    289 	.globl _ERRCNTLIM
                                    290 	.globl _USBERRIRQ
                                    291 	.globl _USBERRIE
                                    292 	.globl _GPIFIRQ
                                    293 	.globl _GPIFIE
                                    294 	.globl _EPIRQ
                                    295 	.globl _EPIE
                                    296 	.globl _USBIRQ
                                    297 	.globl _USBIE
                                    298 	.globl _NAKIRQ
                                    299 	.globl _NAKIE
                                    300 	.globl _IBNIRQ
                                    301 	.globl _IBNIE
                                    302 	.globl _EP8FIFOIRQ
                                    303 	.globl _EP8FIFOIE
                                    304 	.globl _EP6FIFOIRQ
                                    305 	.globl _EP6FIFOIE
                                    306 	.globl _EP4FIFOIRQ
                                    307 	.globl _EP4FIFOIE
                                    308 	.globl _EP2FIFOIRQ
                                    309 	.globl _EP2FIFOIE
                                    310 	.globl _OUTPKTEND
                                    311 	.globl _INPKTEND
                                    312 	.globl _EP8ISOINPKTS
                                    313 	.globl _EP6ISOINPKTS
                                    314 	.globl _EP4ISOINPKTS
                                    315 	.globl _EP2ISOINPKTS
                                    316 	.globl _EP8FIFOPFL
                                    317 	.globl _EP8FIFOPFH
                                    318 	.globl _EP6FIFOPFL
                                    319 	.globl _EP6FIFOPFH
                                    320 	.globl _EP4FIFOPFL
                                    321 	.globl _EP4FIFOPFH
                                    322 	.globl _EP2FIFOPFL
                                    323 	.globl _EP2FIFOPFH
                                    324 	.globl _EP8AUTOINLENL
                                    325 	.globl _EP8AUTOINLENH
                                    326 	.globl _EP6AUTOINLENL
                                    327 	.globl _EP6AUTOINLENH
                                    328 	.globl _EP4AUTOINLENL
                                    329 	.globl _EP4AUTOINLENH
                                    330 	.globl _EP2AUTOINLENL
                                    331 	.globl _EP2AUTOINLENH
                                    332 	.globl _EP8FIFOCFG
                                    333 	.globl _EP6FIFOCFG
                                    334 	.globl _EP4FIFOCFG
                                    335 	.globl _EP2FIFOCFG
                                    336 	.globl _EP8CFG
                                    337 	.globl _EP6CFG
                                    338 	.globl _EP4CFG
                                    339 	.globl _EP2CFG
                                    340 	.globl _EP1INCFG
                                    341 	.globl _EP1OUTCFG
                                    342 	.globl _REVCTL
                                    343 	.globl _REVID
                                    344 	.globl _FIFOPINPOLAR
                                    345 	.globl _UART230
                                    346 	.globl _BPADDRL
                                    347 	.globl _BPADDRH
                                    348 	.globl _BREAKPT
                                    349 	.globl _FIFORESET
                                    350 	.globl _PINFLAGSCD
                                    351 	.globl _PINFLAGSAB
                                    352 	.globl _IFCONFIG
                                    353 	.globl _CPUCS
                                    354 	.globl _RES_WAVEDATA_END
                                    355 	.globl _GPIF_WAVE_DATA
                                    356 	.globl _usb_vendor_dispatch
                                    357 ;--------------------------------------------------------
                                    358 ; special function registers
                                    359 ;--------------------------------------------------------
                                    360 	.area RSEG    (ABS,DATA)
      000000                        361 	.org 0x0000
                           000080   362 _IOA	=	0x0080
                           000081   363 _SP	=	0x0081
                           000082   364 _DPL	=	0x0082
                           000083   365 _DPH	=	0x0083
                           000084   366 _DPL1	=	0x0084
                           000085   367 _DPH1	=	0x0085
                           000086   368 _DPS	=	0x0086
                           000087   369 _PCON	=	0x0087
                           000088   370 _TCON	=	0x0088
                           000089   371 _TMOD	=	0x0089
                           00008A   372 _TL0	=	0x008a
                           00008B   373 _TL1	=	0x008b
                           00008C   374 _TH0	=	0x008c
                           00008D   375 _TH1	=	0x008d
                           00008E   376 _CKCON	=	0x008e
                           000090   377 _IOB	=	0x0090
                           000091   378 _EXIF	=	0x0091
                           000092   379 __XPAGE	=	0x0092
                           000098   380 _SCON0	=	0x0098
                           000099   381 _SBUF0	=	0x0099
                           00009A   382 _AUTOPTRH1	=	0x009a
                           00009B   383 _AUTOPTRL1	=	0x009b
                           00009D   384 _AUTOPTRH2	=	0x009d
                           00009E   385 _AUTOPTRL2	=	0x009e
                           0000A0   386 _IOC	=	0x00a0
                           0000A1   387 _INT2CLR	=	0x00a1
                           0000A2   388 _INT4CLR	=	0x00a2
                           0000A8   389 _IE	=	0x00a8
                           0000AA   390 _EP2468STAT	=	0x00aa
                           0000AB   391 _EP24FIFOFLGS	=	0x00ab
                           0000AC   392 _EP68FIFOFLGS	=	0x00ac
                           0000AF   393 _AUTOPTRSETUP	=	0x00af
                           0000B0   394 _IOD	=	0x00b0
                           0000B1   395 _IOE	=	0x00b1
                           0000B2   396 _OEA	=	0x00b2
                           0000B3   397 _OEB	=	0x00b3
                           0000B4   398 _OEC	=	0x00b4
                           0000B5   399 _OED	=	0x00b5
                           0000B6   400 _OEE	=	0x00b6
                           0000B8   401 _IP	=	0x00b8
                           0000BA   402 _EP01STAT	=	0x00ba
                           0000BB   403 _GPIFTRIG	=	0x00bb
                           0000BD   404 _GPIFSGLDATH	=	0x00bd
                           0000BE   405 _GPIFSGLDATLX	=	0x00be
                           0000BF   406 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   407 _SCON1	=	0x00c0
                           0000C1   408 _SBUF1	=	0x00c1
                           0000C8   409 _T2CON	=	0x00c8
                           0000CA   410 _RCAP2L	=	0x00ca
                           0000CB   411 _RCAP2H	=	0x00cb
                           0000CC   412 _TL2	=	0x00cc
                           0000CD   413 _TH2	=	0x00cd
                           0000D0   414 _PSW	=	0x00d0
                           0000D8   415 _EICON	=	0x00d8
                           0000E0   416 _ACC	=	0x00e0
                           0000E8   417 _EIE	=	0x00e8
                           0000F0   418 _B	=	0x00f0
                           0000F8   419 _EIP	=	0x00f8
                                    420 ;--------------------------------------------------------
                                    421 ; special function bits
                                    422 ;--------------------------------------------------------
                                    423 	.area RSEG    (ABS,DATA)
      000000                        424 	.org 0x0000
                           000080   425 _PA0	=	0x0080
                           000081   426 _PA1	=	0x0081
                           000082   427 _PA2	=	0x0082
                           000083   428 _PA3	=	0x0083
                           000084   429 _PA4	=	0x0084
                           000085   430 _PA5	=	0x0085
                           000086   431 _PA6	=	0x0086
                           000087   432 _PA7	=	0x0087
                           000088   433 _IT0	=	0x0088
                           000089   434 _IE0	=	0x0089
                           00008A   435 _IT1	=	0x008a
                           00008B   436 _IE1	=	0x008b
                           00008C   437 _TR0	=	0x008c
                           00008D   438 _TF0	=	0x008d
                           00008E   439 _TR1	=	0x008e
                           00008F   440 _TF1	=	0x008f
                           000090   441 _PB0	=	0x0090
                           000091   442 _PB1	=	0x0091
                           000092   443 _PB2	=	0x0092
                           000093   444 _PB3	=	0x0093
                           000094   445 _PB4	=	0x0094
                           000095   446 _PB5	=	0x0095
                           000096   447 _PB6	=	0x0096
                           000097   448 _PB7	=	0x0097
                           000098   449 _RI	=	0x0098
                           000099   450 _TI	=	0x0099
                           00009A   451 _RB8	=	0x009a
                           00009B   452 _TB8	=	0x009b
                           00009C   453 _REN	=	0x009c
                           00009D   454 _SM2	=	0x009d
                           00009E   455 _SM1	=	0x009e
                           00009F   456 _SM0	=	0x009f
                           0000A0   457 _PC0	=	0x00a0
                           0000A1   458 _PC1	=	0x00a1
                           0000A2   459 _PC2	=	0x00a2
                           0000A3   460 _PC3	=	0x00a3
                           0000A4   461 _PC4	=	0x00a4
                           0000A5   462 _PC5	=	0x00a5
                           0000A6   463 _PC6	=	0x00a6
                           0000A7   464 _PC7	=	0x00a7
                           0000A8   465 _EX0	=	0x00a8
                           0000A9   466 _ET0	=	0x00a9
                           0000AA   467 _EX1	=	0x00aa
                           0000AB   468 _ET1	=	0x00ab
                           0000AC   469 _ES0	=	0x00ac
                           0000AD   470 _ET2	=	0x00ad
                           0000AE   471 _ES1	=	0x00ae
                           0000AF   472 _EA	=	0x00af
                           0000B0   473 _PD0	=	0x00b0
                           0000B1   474 _PD1	=	0x00b1
                           0000B2   475 _PD2	=	0x00b2
                           0000B3   476 _PD3	=	0x00b3
                           0000B4   477 _PD4	=	0x00b4
                           0000B5   478 _PD5	=	0x00b5
                           0000B6   479 _PD6	=	0x00b6
                           0000B7   480 _PD7	=	0x00b7
                           0000B8   481 _PX0	=	0x00b8
                           0000B9   482 _PT0	=	0x00b9
                           0000BA   483 _PX1	=	0x00ba
                           0000BB   484 _PT1	=	0x00bb
                           0000BC   485 _PS0	=	0x00bc
                           0000BD   486 _PT2	=	0x00bd
                           0000BE   487 _PS1	=	0x00be
                           0000C0   488 _RI1	=	0x00c0
                           0000C1   489 _TI1	=	0x00c1
                           0000C2   490 _RB81	=	0x00c2
                           0000C3   491 _TB81	=	0x00c3
                           0000C4   492 _REN1	=	0x00c4
                           0000C5   493 _SM21	=	0x00c5
                           0000C6   494 _SM11	=	0x00c6
                           0000C7   495 _SM01	=	0x00c7
                           0000C8   496 _CP_RL2	=	0x00c8
                           0000C9   497 _C_T2	=	0x00c9
                           0000CA   498 _TR2	=	0x00ca
                           0000CB   499 _EXEN2	=	0x00cb
                           0000CC   500 _TCLK	=	0x00cc
                           0000CD   501 _RCLK	=	0x00cd
                           0000CE   502 _EXF2	=	0x00ce
                           0000CF   503 _TF2	=	0x00cf
                           0000D0   504 _P	=	0x00d0
                           0000D1   505 _FL	=	0x00d1
                           0000D2   506 _OV	=	0x00d2
                           0000D3   507 _RS0	=	0x00d3
                           0000D4   508 _RS1	=	0x00d4
                           0000D5   509 _F0	=	0x00d5
                           0000D6   510 _AC	=	0x00d6
                           0000D7   511 _CY	=	0x00d7
                           0000DB   512 _INT6	=	0x00db
                           0000DC   513 _RESI	=	0x00dc
                           0000DD   514 _ERESI	=	0x00dd
                           0000DF   515 _SMOD1	=	0x00df
                           0000E8   516 _EUSB	=	0x00e8
                           0000E9   517 _EI2C	=	0x00e9
                           0000EA   518 _EIEX4	=	0x00ea
                           0000EB   519 _EIEX5	=	0x00eb
                           0000EC   520 _EIEX6	=	0x00ec
                           0000F8   521 _PUSB	=	0x00f8
                           0000F9   522 _PI2C	=	0x00f9
                           0000FA   523 _EIPX4	=	0x00fa
                           0000FB   524 _EIPX5	=	0x00fb
                           0000FC   525 _EIPX6	=	0x00fc
                                    526 ;--------------------------------------------------------
                                    527 ; overlayable register banks
                                    528 ;--------------------------------------------------------
                                    529 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        530 	.ds 8
                                    531 ;--------------------------------------------------------
                                    532 ; internal ram data
                                    533 ;--------------------------------------------------------
                                    534 	.area DSEG    (DATA)
      000044                        535 _handle_reg_read_value_10000_31:
      000044                        536 	.ds 4
      000048                        537 _handle_reg_write_channel_10000_33:
      000048                        538 	.ds 1
      000049                        539 _handle_reg_write_addr_10000_33:
      000049                        540 	.ds 1
      00004A                        541 _handle_reg_write_value_10000_33:
      00004A                        542 	.ds 4
      00004E                        543 _handle_ad9851_write_sloc0_1_0:
      00004E                        544 	.ds 3
                                    545 ;--------------------------------------------------------
                                    546 ; overlayable items in internal ram
                                    547 ;--------------------------------------------------------
                                    548 ;--------------------------------------------------------
                                    549 ; indirectly addressable internal ram data
                                    550 ;--------------------------------------------------------
                                    551 	.area ISEG    (DATA)
                                    552 ;--------------------------------------------------------
                                    553 ; absolute internal ram data
                                    554 ;--------------------------------------------------------
                                    555 	.area IABS    (ABS,DATA)
                                    556 	.area IABS    (ABS,DATA)
                                    557 ;--------------------------------------------------------
                                    558 ; bit data
                                    559 ;--------------------------------------------------------
                                    560 	.area BSEG    (BIT)
                                    561 ;--------------------------------------------------------
                                    562 ; paged external ram data
                                    563 ;--------------------------------------------------------
                                    564 	.area PSEG    (PAG,XDATA)
                                    565 ;--------------------------------------------------------
                                    566 ; uninitialized external ram data
                                    567 ;--------------------------------------------------------
                                    568 	.area XSEG    (XDATA)
                           00E400   569 _GPIF_WAVE_DATA	=	0xe400
                           00E480   570 _RES_WAVEDATA_END	=	0xe480
                           00E600   571 _CPUCS	=	0xe600
                           00E601   572 _IFCONFIG	=	0xe601
                           00E602   573 _PINFLAGSAB	=	0xe602
                           00E603   574 _PINFLAGSCD	=	0xe603
                           00E604   575 _FIFORESET	=	0xe604
                           00E605   576 _BREAKPT	=	0xe605
                           00E606   577 _BPADDRH	=	0xe606
                           00E607   578 _BPADDRL	=	0xe607
                           00E608   579 _UART230	=	0xe608
                           00E609   580 _FIFOPINPOLAR	=	0xe609
                           00E60A   581 _REVID	=	0xe60a
                           00E60B   582 _REVCTL	=	0xe60b
                           00E610   583 _EP1OUTCFG	=	0xe610
                           00E611   584 _EP1INCFG	=	0xe611
                           00E612   585 _EP2CFG	=	0xe612
                           00E613   586 _EP4CFG	=	0xe613
                           00E614   587 _EP6CFG	=	0xe614
                           00E615   588 _EP8CFG	=	0xe615
                           00E618   589 _EP2FIFOCFG	=	0xe618
                           00E619   590 _EP4FIFOCFG	=	0xe619
                           00E61A   591 _EP6FIFOCFG	=	0xe61a
                           00E61B   592 _EP8FIFOCFG	=	0xe61b
                           00E620   593 _EP2AUTOINLENH	=	0xe620
                           00E621   594 _EP2AUTOINLENL	=	0xe621
                           00E622   595 _EP4AUTOINLENH	=	0xe622
                           00E623   596 _EP4AUTOINLENL	=	0xe623
                           00E624   597 _EP6AUTOINLENH	=	0xe624
                           00E625   598 _EP6AUTOINLENL	=	0xe625
                           00E626   599 _EP8AUTOINLENH	=	0xe626
                           00E627   600 _EP8AUTOINLENL	=	0xe627
                           00E630   601 _EP2FIFOPFH	=	0xe630
                           00E631   602 _EP2FIFOPFL	=	0xe631
                           00E632   603 _EP4FIFOPFH	=	0xe632
                           00E633   604 _EP4FIFOPFL	=	0xe633
                           00E634   605 _EP6FIFOPFH	=	0xe634
                           00E635   606 _EP6FIFOPFL	=	0xe635
                           00E636   607 _EP8FIFOPFH	=	0xe636
                           00E637   608 _EP8FIFOPFL	=	0xe637
                           00E640   609 _EP2ISOINPKTS	=	0xe640
                           00E641   610 _EP4ISOINPKTS	=	0xe641
                           00E642   611 _EP6ISOINPKTS	=	0xe642
                           00E643   612 _EP8ISOINPKTS	=	0xe643
                           00E648   613 _INPKTEND	=	0xe648
                           00E649   614 _OUTPKTEND	=	0xe649
                           00E650   615 _EP2FIFOIE	=	0xe650
                           00E651   616 _EP2FIFOIRQ	=	0xe651
                           00E652   617 _EP4FIFOIE	=	0xe652
                           00E653   618 _EP4FIFOIRQ	=	0xe653
                           00E654   619 _EP6FIFOIE	=	0xe654
                           00E655   620 _EP6FIFOIRQ	=	0xe655
                           00E656   621 _EP8FIFOIE	=	0xe656
                           00E657   622 _EP8FIFOIRQ	=	0xe657
                           00E658   623 _IBNIE	=	0xe658
                           00E659   624 _IBNIRQ	=	0xe659
                           00E65A   625 _NAKIE	=	0xe65a
                           00E65B   626 _NAKIRQ	=	0xe65b
                           00E65C   627 _USBIE	=	0xe65c
                           00E65D   628 _USBIRQ	=	0xe65d
                           00E65E   629 _EPIE	=	0xe65e
                           00E65F   630 _EPIRQ	=	0xe65f
                           00E660   631 _GPIFIE	=	0xe660
                           00E661   632 _GPIFIRQ	=	0xe661
                           00E662   633 _USBERRIE	=	0xe662
                           00E663   634 _USBERRIRQ	=	0xe663
                           00E664   635 _ERRCNTLIM	=	0xe664
                           00E665   636 _CLRERRCNT	=	0xe665
                           00E666   637 _INT2IVEC	=	0xe666
                           00E667   638 _INT4IVEC	=	0xe667
                           00E668   639 _INTSETUP	=	0xe668
                           00E670   640 _PORTACFG	=	0xe670
                           00E671   641 _PORTCCFG	=	0xe671
                           00E672   642 _PORTECFG	=	0xe672
                           00E678   643 _I2CS	=	0xe678
                           00E679   644 _I2DAT	=	0xe679
                           00E67A   645 _I2CTL	=	0xe67a
                           00E67B   646 _XAUTODAT1	=	0xe67b
                           00E67C   647 _XAUTODAT2	=	0xe67c
                           00E680   648 _USBCS	=	0xe680
                           00E681   649 _SUSPEND	=	0xe681
                           00E682   650 _WAKEUPCS	=	0xe682
                           00E683   651 _TOGCTL	=	0xe683
                           00E684   652 _USBFRAMEH	=	0xe684
                           00E685   653 _USBFRAMEL	=	0xe685
                           00E686   654 _MICROFRAME	=	0xe686
                           00E687   655 _FNADDR	=	0xe687
                           00E68A   656 _EP0BCH	=	0xe68a
                           00E68B   657 _EP0BCL	=	0xe68b
                           00E68D   658 _EP1OUTBC	=	0xe68d
                           00E68F   659 _EP1INBC	=	0xe68f
                           00E690   660 _EP2BCH	=	0xe690
                           00E691   661 _EP2BCL	=	0xe691
                           00E694   662 _EP4BCH	=	0xe694
                           00E695   663 _EP4BCL	=	0xe695
                           00E698   664 _EP6BCH	=	0xe698
                           00E699   665 _EP6BCL	=	0xe699
                           00E69C   666 _EP8BCH	=	0xe69c
                           00E69D   667 _EP8BCL	=	0xe69d
                           00E6A0   668 _EP0CS	=	0xe6a0
                           00E6A1   669 _EP1OUTCS	=	0xe6a1
                           00E6A2   670 _EP1INCS	=	0xe6a2
                           00E6A3   671 _EP2CS	=	0xe6a3
                           00E6A4   672 _EP4CS	=	0xe6a4
                           00E6A5   673 _EP6CS	=	0xe6a5
                           00E6A6   674 _EP8CS	=	0xe6a6
                           00E6A7   675 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   676 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   677 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   678 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   679 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   680 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   681 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   682 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   683 _EP6FIFOBCH	=	0xe6af
                           00E6B0   684 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   685 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   686 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   687 _SUDPTRH	=	0xe6b3
                           00E6B4   688 _SUDPTRL	=	0xe6b4
                           00E6B5   689 _SUDPTRCTL	=	0xe6b5
                           00E6B8   690 _SETUPDAT	=	0xe6b8
                           00E6C0   691 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   692 _GPIFIDLECS	=	0xe6c1
                           00E6C2   693 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   694 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   695 _GPIFADRH	=	0xe6c4
                           00E6C5   696 _GPIFADRL	=	0xe6c5
                           00E6CE   697 _GPIFTCB3	=	0xe6ce
                           00E6CF   698 _GPIFTCB2	=	0xe6cf
                           00E6D0   699 _GPIFTCB1	=	0xe6d0
                           00E6D1   700 _GPIFTCB0	=	0xe6d1
                           00E6D2   701 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   702 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   703 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   704 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   705 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   706 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   707 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   708 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   709 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   710 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   711 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   712 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   713 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   714 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   715 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   716 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   717 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   718 _GPIFABORT	=	0xe6f5
                           00E6C6   719 _FLOWSTATE	=	0xe6c6
                           00E6C7   720 _FLOWLOGIC	=	0xe6c7
                           00E6C8   721 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   722 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   723 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   724 _FLOWSTB	=	0xe6cb
                           00E6CC   725 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   726 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   727 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   728 _UDMACRCH	=	0xe67d
                           00E67E   729 _UDMACRCL	=	0xe67e
                           00E67F   730 _UDMACRCQUAL	=	0xe67f
                           00E740   731 _EP0BUF	=	0xe740
                           00E780   732 _EP1OUTBUF	=	0xe780
                           00E7C0   733 _EP1INBUF	=	0xe7c0
                           00F000   734 _EP2FIFOBUF	=	0xf000
                           00F400   735 _EP4FIFOBUF	=	0xf400
                           00F800   736 _EP6FIFOBUF	=	0xf800
                           00FC00   737 _EP8FIFOBUF	=	0xfc00
                           00E628   738 _ECCCFG	=	0xe628
                           00E629   739 _ECCRESET	=	0xe629
                           00E62A   740 _ECC1B0	=	0xe62a
                           00E62B   741 _ECC1B1	=	0xe62b
                           00E62C   742 _ECC1B2	=	0xe62c
                           00E62D   743 _ECC2B0	=	0xe62d
                           00E62E   744 _ECC2B1	=	0xe62e
                           00E62F   745 _ECC2B2	=	0xe62f
                           00E50D   746 _GPCR2	=	0xe50d
      003C5F                        747 _handle_save_settings_regs_10000_40:
      003C5F                        748 	.ds 88
                                    749 ;--------------------------------------------------------
                                    750 ; absolute external ram data
                                    751 ;--------------------------------------------------------
                                    752 	.area XABS    (ABS,XDATA)
                                    753 ;--------------------------------------------------------
                                    754 ; initialized external ram data
                                    755 ;--------------------------------------------------------
                                    756 	.area XISEG   (XDATA)
                                    757 	.area HOME    (CODE)
                                    758 	.area GSINIT0 (CODE)
                                    759 	.area GSINIT1 (CODE)
                                    760 	.area GSINIT2 (CODE)
                                    761 	.area GSINIT3 (CODE)
                                    762 	.area GSINIT4 (CODE)
                                    763 	.area GSINIT5 (CODE)
                                    764 	.area GSINIT  (CODE)
                                    765 	.area GSFINAL (CODE)
                                    766 	.area CSEG    (CODE)
                                    767 ;--------------------------------------------------------
                                    768 ; global & static initialisations
                                    769 ;--------------------------------------------------------
                                    770 	.area HOME    (CODE)
                                    771 	.area GSINIT  (CODE)
                                    772 	.area GSFINAL (CODE)
                                    773 	.area GSINIT  (CODE)
                                    774 ;--------------------------------------------------------
                                    775 ; Home
                                    776 ;--------------------------------------------------------
                                    777 	.area HOME    (CODE)
                                    778 	.area HOME    (CODE)
                                    779 ;--------------------------------------------------------
                                    780 ; code
                                    781 ;--------------------------------------------------------
                                    782 	.area CSEG    (CODE)
                                    783 ;------------------------------------------------------------
                                    784 ;Allocation info for local variables in function 'handle_get_status'
                                    785 ;------------------------------------------------------------
                                    786 ;bulk_status   Allocated to registers 
                                    787 ;------------------------------------------------------------
                                    788 ;	build/../usb_vendor.c:17: static bool handle_get_status(void) {
                                    789 ;	-----------------------------------------
                                    790 ;	 function handle_get_status
                                    791 ;	-----------------------------------------
      000BEC                        792 _handle_get_status:
                           000007   793 	ar7 = 0x07
                           000006   794 	ar6 = 0x06
                           000005   795 	ar5 = 0x05
                           000004   796 	ar4 = 0x04
                           000003   797 	ar3 = 0x03
                           000002   798 	ar2 = 0x02
                           000001   799 	ar1 = 0x01
                           000000   800 	ar0 = 0x00
                                    801 ;	build/../usb_vendor.c:20: EP0BUF[0] = VER_FW;
      000BEC 90 E7 40         [24]  802 	mov	dptr,#_EP0BUF
      000BEF 74 10            [12]  803 	mov	a,#0x10
      000BF1 F0               [24]  804 	movx	@dptr,a
                                    805 ;	build/../usb_vendor.c:21: EP0BUF[1] = (uint8_t)(F_TCXO_KHZ >> 8);
      000BF2 90 E7 41         [24]  806 	mov	dptr,#(_EP0BUF + 0x0001)
      000BF5 74 5D            [12]  807 	mov	a,#0x5d
      000BF7 F0               [24]  808 	movx	@dptr,a
                                    809 ;	build/../usb_vendor.c:22: EP0BUF[2] = (uint8_t)(F_TCXO_KHZ & 0xFF);
      000BF8 90 E7 42         [24]  810 	mov	dptr,#(_EP0BUF + 0x0002)
      000BFB 74 C0            [12]  811 	mov	a,#0xc0
      000BFD F0               [24]  812 	movx	@dptr,a
                                    813 ;	build/../usb_vendor.c:23: EP0BUF[3] = (uint8_t)max2771_get_lock_status(g_max2771_ch1);
      000BFE 90 3C B8         [24]  814 	mov	dptr,#_g_max2771_ch1
      000C01 E0               [24]  815 	movx	a,@dptr
      000C02 FD               [12]  816 	mov	r5,a
      000C03 A3               [24]  817 	inc	dptr
      000C04 E0               [24]  818 	movx	a,@dptr
      000C05 FE               [12]  819 	mov	r6,a
      000C06 A3               [24]  820 	inc	dptr
      000C07 E0               [24]  821 	movx	a,@dptr
      000C08 FF               [12]  822 	mov	r7,a
      000C09 8D 82            [24]  823 	mov	dpl, r5
      000C0B 8E 83            [24]  824 	mov	dph, r6
      000C0D 8F F0            [24]  825 	mov	b, r7
      000C0F 12 0B CA         [24]  826 	lcall	_max2771_get_lock_status
      000C12 AF 82            [24]  827 	mov	r7, dpl
      000C14 90 E7 43         [24]  828 	mov	dptr,#(_EP0BUF + 0x0003)
      000C17 EF               [12]  829 	mov	a,r7
      000C18 F0               [24]  830 	movx	@dptr,a
                                    831 ;	build/../usb_vendor.c:24: EP0BUF[4] = (uint8_t)max2771_get_lock_status(g_max2771_ch2);
      000C19 90 3C BB         [24]  832 	mov	dptr,#_g_max2771_ch2
      000C1C E0               [24]  833 	movx	a,@dptr
      000C1D FD               [12]  834 	mov	r5,a
      000C1E A3               [24]  835 	inc	dptr
      000C1F E0               [24]  836 	movx	a,@dptr
      000C20 FE               [12]  837 	mov	r6,a
      000C21 A3               [24]  838 	inc	dptr
      000C22 E0               [24]  839 	movx	a,@dptr
      000C23 FF               [12]  840 	mov	r7,a
      000C24 8D 82            [24]  841 	mov	dpl, r5
      000C26 8E 83            [24]  842 	mov	dph, r6
      000C28 8F F0            [24]  843 	mov	b, r7
      000C2A 12 0B CA         [24]  844 	lcall	_max2771_get_lock_status
      000C2D AF 82            [24]  845 	mov	r7, dpl
      000C2F 90 E7 44         [24]  846 	mov	dptr,#(_EP0BUF + 0x0004)
      000C32 EF               [12]  847 	mov	a,r7
      000C33 F0               [24]  848 	movx	@dptr,a
                                    849 ;	build/../usb_vendor.c:25: EP0BUF[5] = (uint8_t)bulk_status;
      000C34 90 E7 45         [24]  850 	mov	dptr,#(_EP0BUF + 0x0005)
      000C37 E4               [12]  851 	clr	a
      000C38 F0               [24]  852 	movx	@dptr,a
                                    853 ;	build/../usb_vendor.c:27: EP0BCH = 0;
      000C39 90 E6 8A         [24]  854 	mov	dptr,#_EP0BCH
      000C3C F0               [24]  855 	movx	@dptr,a
                                    856 ;	build/../usb_vendor.c:28: EP0BCL = 6;
      000C3D 90 E6 8B         [24]  857 	mov	dptr,#_EP0BCL
      000C40 74 06            [12]  858 	mov	a,#0x06
      000C42 F0               [24]  859 	movx	@dptr,a
                                    860 ;	build/../usb_vendor.c:29: return true;
      000C43 75 82 01         [24]  861 	mov	dpl, #0x01
                                    862 ;	build/../usb_vendor.c:30: }
      000C46 22               [24]  863 	ret
                                    864 ;------------------------------------------------------------
                                    865 ;Allocation info for local variables in function 'handle_reg_read'
                                    866 ;------------------------------------------------------------
                                    867 ;channel       Allocated to registers r7 
                                    868 ;addr          Allocated to registers r6 
                                    869 ;value         Allocated with name '_handle_reg_read_value_10000_31'
                                    870 ;err           Allocated to registers 
                                    871 ;target        Allocated to registers r1 r2 r3 
                                    872 ;------------------------------------------------------------
                                    873 ;	build/../usb_vendor.c:32: static bool handle_reg_read(void) {
                                    874 ;	-----------------------------------------
                                    875 ;	 function handle_reg_read
                                    876 ;	-----------------------------------------
      000C47                        877 _handle_reg_read:
                                    878 ;	build/../usb_vendor.c:33: uint8_t channel = SETUPDAT[3];
      000C47 90 E6 BB         [24]  879 	mov	dptr,#(_SETUPDAT + 0x0003)
      000C4A E0               [24]  880 	movx	a,@dptr
      000C4B FF               [12]  881 	mov	r7,a
                                    882 ;	build/../usb_vendor.c:34: uint8_t addr    = SETUPDAT[2];
      000C4C 90 E6 BA         [24]  883 	mov	dptr,#(_SETUPDAT + 0x0002)
      000C4F E0               [24]  884 	movx	a,@dptr
      000C50 FE               [12]  885 	mov	r6,a
                                    886 ;	build/../usb_vendor.c:38: max2771_handle_t target = (channel == 0) ? g_max2771_ch1 : g_max2771_ch2;
      000C51 EF               [12]  887 	mov	a,r7
      000C52 70 0D            [24]  888 	jnz	00107$
      000C54 90 3C B8         [24]  889 	mov	dptr,#_g_max2771_ch1
      000C57 E0               [24]  890 	movx	a,@dptr
      000C58 FC               [12]  891 	mov	r4,a
      000C59 A3               [24]  892 	inc	dptr
      000C5A E0               [24]  893 	movx	a,@dptr
      000C5B FD               [12]  894 	mov	r5,a
      000C5C A3               [24]  895 	inc	dptr
      000C5D E0               [24]  896 	movx	a,@dptr
      000C5E FF               [12]  897 	mov	r7,a
      000C5F 80 0B            [24]  898 	sjmp	00108$
      000C61                        899 00107$:
      000C61 90 3C BB         [24]  900 	mov	dptr,#_g_max2771_ch2
      000C64 E0               [24]  901 	movx	a,@dptr
      000C65 FC               [12]  902 	mov	r4,a
      000C66 A3               [24]  903 	inc	dptr
      000C67 E0               [24]  904 	movx	a,@dptr
      000C68 FD               [12]  905 	mov	r5,a
      000C69 A3               [24]  906 	inc	dptr
      000C6A E0               [24]  907 	movx	a,@dptr
      000C6B FF               [12]  908 	mov	r7,a
      000C6C                        909 00108$:
      000C6C 8C 01            [24]  910 	mov	ar1,r4
      000C6E 8D 02            [24]  911 	mov	ar2,r5
      000C70 8F 03            [24]  912 	mov	ar3,r7
                                    913 ;	build/../usb_vendor.c:39: if (target == NULL) return false;
      000C72 EC               [12]  914 	mov	a,r4
      000C73 4D               [12]  915 	orl	a,r5
      000C74 70 03            [24]  916 	jnz	00102$
      000C76 F5 82            [12]  917 	mov	dpl,a
      000C78 22               [24]  918 	ret
      000C79                        919 00102$:
                                    920 ;	build/../usb_vendor.c:41: err = max2771_read_register(target, addr, &value);
      000C79 75 35 44         [24]  921 	mov	_max2771_read_register_PARM_3,#_handle_reg_read_value_10000_31
      000C7C 75 36 00         [24]  922 	mov	(_max2771_read_register_PARM_3 + 1),#0x00
      000C7F 75 37 40         [24]  923 	mov	(_max2771_read_register_PARM_3 + 2),#0x40
      000C82 8E 34            [24]  924 	mov	_max2771_read_register_PARM_2,r6
      000C84 89 82            [24]  925 	mov	dpl, r1
      000C86 8A 83            [24]  926 	mov	dph, r2
      000C88 8B F0            [24]  927 	mov	b, r3
      000C8A 12 09 D2         [24]  928 	lcall	_max2771_read_register
      000C8D E5 82            [12]  929 	mov	a, dpl
                                    930 ;	build/../usb_vendor.c:42: if (err != MAX2771_OK) return false;
      000C8F 60 04            [24]  931 	jz	00104$
      000C91 75 82 00         [24]  932 	mov	dpl, #0x00
      000C94 22               [24]  933 	ret
      000C95                        934 00104$:
                                    935 ;	build/../usb_vendor.c:44: *(uint32_t *)EP0BUF = BSWAP32(value);
      000C95 AF 47            [24]  936 	mov	r7,(_handle_reg_read_value_10000_31 + 3)
      000C97 AC 46            [24]  937 	mov	r4,(_handle_reg_read_value_10000_31 + 2)
      000C99 7E 00            [12]  938 	mov	r6,#0x00
      000C9B 7B 00            [12]  939 	mov	r3,#0x00
      000C9D 7D 00            [12]  940 	mov	r5,#0x00
      000C9F 8F 00            [24]  941 	mov	ar0,r7
      000CA1 E4               [12]  942 	clr	a
      000CA2 F9               [12]  943 	mov	r1,a
      000CA3 FA               [12]  944 	mov	r2,a
      000CA4 FF               [12]  945 	mov	r7,a
      000CA5 E8               [12]  946 	mov	a,r0
      000CA6 42 03            [12]  947 	orl	ar3,a
      000CA8 E9               [12]  948 	mov	a,r1
      000CA9 42 04            [12]  949 	orl	ar4,a
      000CAB EA               [12]  950 	mov	a,r2
      000CAC 42 05            [12]  951 	orl	ar5,a
      000CAE EF               [12]  952 	mov	a,r7
      000CAF 42 06            [12]  953 	orl	ar6,a
      000CB1 AA 45            [24]  954 	mov	r2,(_handle_reg_read_value_10000_31 + 1)
      000CB3 E4               [12]  955 	clr	a
      000CB4 F8               [12]  956 	mov	r0,a
      000CB5 F9               [12]  957 	mov	r1,a
      000CB6 FF               [12]  958 	mov	r7,a
      000CB7 E8               [12]  959 	mov	a,r0
      000CB8 42 03            [12]  960 	orl	ar3,a
      000CBA E9               [12]  961 	mov	a,r1
      000CBB 42 04            [12]  962 	orl	ar4,a
      000CBD EA               [12]  963 	mov	a,r2
      000CBE 42 05            [12]  964 	orl	ar5,a
      000CC0 EF               [12]  965 	mov	a,r7
      000CC1 42 06            [12]  966 	orl	ar6,a
      000CC3 AF 44            [24]  967 	mov	r7,_handle_reg_read_value_10000_31
      000CC5 E4               [12]  968 	clr	a
      000CC6 F8               [12]  969 	mov	r0,a
      000CC7 F9               [12]  970 	mov	r1,a
      000CC8 FA               [12]  971 	mov	r2,a
      000CC9 E8               [12]  972 	mov	a,r0
      000CCA 42 03            [12]  973 	orl	ar3,a
      000CCC E9               [12]  974 	mov	a,r1
      000CCD 42 04            [12]  975 	orl	ar4,a
      000CCF EA               [12]  976 	mov	a,r2
      000CD0 42 05            [12]  977 	orl	ar5,a
      000CD2 EF               [12]  978 	mov	a,r7
      000CD3 42 06            [12]  979 	orl	ar6,a
      000CD5 90 E7 40         [24]  980 	mov	dptr,#_EP0BUF
      000CD8 EB               [12]  981 	mov	a,r3
      000CD9 F0               [24]  982 	movx	@dptr,a
      000CDA EC               [12]  983 	mov	a,r4
      000CDB A3               [24]  984 	inc	dptr
      000CDC F0               [24]  985 	movx	@dptr,a
      000CDD ED               [12]  986 	mov	a,r5
      000CDE A3               [24]  987 	inc	dptr
      000CDF F0               [24]  988 	movx	@dptr,a
      000CE0 EE               [12]  989 	mov	a,r6
      000CE1 A3               [24]  990 	inc	dptr
      000CE2 F0               [24]  991 	movx	@dptr,a
                                    992 ;	build/../usb_vendor.c:45: EP0BCH = 0;
      000CE3 90 E6 8A         [24]  993 	mov	dptr,#_EP0BCH
      000CE6 E4               [12]  994 	clr	a
      000CE7 F0               [24]  995 	movx	@dptr,a
                                    996 ;	build/../usb_vendor.c:46: EP0BCL = 4;
      000CE8 90 E6 8B         [24]  997 	mov	dptr,#_EP0BCL
      000CEB 74 04            [12]  998 	mov	a,#0x04
      000CED F0               [24]  999 	movx	@dptr,a
                                   1000 ;	build/../usb_vendor.c:47: return true;
      000CEE 75 82 01         [24] 1001 	mov	dpl, #0x01
                                   1002 ;	build/../usb_vendor.c:48: }
      000CF1 22               [24] 1003 	ret
                                   1004 ;------------------------------------------------------------
                                   1005 ;Allocation info for local variables in function 'handle_reg_write'
                                   1006 ;------------------------------------------------------------
                                   1007 ;len           Allocated to registers r7 r6 
                                   1008 ;channel       Allocated with name '_handle_reg_write_channel_10000_33'
                                   1009 ;addr          Allocated with name '_handle_reg_write_addr_10000_33'
                                   1010 ;value         Allocated with name '_handle_reg_write_value_10000_33'
                                   1011 ;err           Allocated to registers r7 
                                   1012 ;target        Allocated to registers r0 r6 r7 
                                   1013 ;------------------------------------------------------------
                                   1014 ;	build/../usb_vendor.c:50: static bool handle_reg_write(void) {
                                   1015 ;	-----------------------------------------
                                   1016 ;	 function handle_reg_write
                                   1017 ;	-----------------------------------------
      000CF2                       1018 _handle_reg_write:
                                   1019 ;	build/../usb_vendor.c:51: uint16_t len = WORD_FROM_SETUP(SETUPDAT + 6);
      000CF2 90 E6 BF         [24] 1020 	mov	dptr,#(_SETUPDAT + 0x0007)
      000CF5 E0               [24] 1021 	movx	a,@dptr
      000CF6 FE               [12] 1022 	mov	r6,a
      000CF7 7F 00            [12] 1023 	mov	r7,#0x00
      000CF9 90 E6 BE         [24] 1024 	mov	dptr,#(_SETUPDAT + 0x0006)
      000CFC E0               [24] 1025 	movx	a,@dptr
      000CFD 7C 00            [12] 1026 	mov	r4,#0x00
      000CFF 42 07            [12] 1027 	orl	ar7,a
      000D01 EC               [12] 1028 	mov	a,r4
      000D02 42 06            [12] 1029 	orl	ar6,a
                                   1030 ;	build/../usb_vendor.c:52: uint8_t channel = SETUPDAT[3];
      000D04 90 E6 BB         [24] 1031 	mov	dptr,#(_SETUPDAT + 0x0003)
      000D07 E0               [24] 1032 	movx	a,@dptr
      000D08 F5 48            [12] 1033 	mov	_handle_reg_write_channel_10000_33,a
                                   1034 ;	build/../usb_vendor.c:53: uint8_t addr    = SETUPDAT[2];
      000D0A 90 E6 BA         [24] 1035 	mov	dptr,#(_SETUPDAT + 0x0002)
      000D0D E0               [24] 1036 	movx	a,@dptr
      000D0E F5 49            [12] 1037 	mov	_handle_reg_write_addr_10000_33,a
                                   1038 ;	build/../usb_vendor.c:57: if (len < 4) return true;
      000D10 C3               [12] 1039 	clr	c
      000D11 EF               [12] 1040 	mov	a,r7
      000D12 94 04            [12] 1041 	subb	a,#0x04
      000D14 EE               [12] 1042 	mov	a,r6
      000D15 94 00            [12] 1043 	subb	a,#0x00
      000D17 50 04            [24] 1044 	jnc	00102$
      000D19 75 82 01         [24] 1045 	mov	dpl, #0x01
      000D1C 22               [24] 1046 	ret
      000D1D                       1047 00102$:
                                   1048 ;	build/../usb_vendor.c:59: EP0BCH = EP0BCL = 0;
      000D1D 90 E6 8B         [24] 1049 	mov	dptr,#_EP0BCL
      000D20 E4               [12] 1050 	clr	a
      000D21 F0               [24] 1051 	movx	@dptr,a
      000D22 90 E6 8A         [24] 1052 	mov	dptr,#_EP0BCH
      000D25 F0               [24] 1053 	movx	@dptr,a
                                   1054 ;	build/../usb_vendor.c:60: while (EP0CS & bmEPBUSY) { /* wait */ }
      000D26                       1055 00103$:
      000D26 90 E6 A0         [24] 1056 	mov	dptr,#_EP0CS
      000D29 E0               [24] 1057 	movx	a,@dptr
      000D2A 20 E1 F9         [24] 1058 	jb	acc.1,00103$
                                   1059 ;	build/../usb_vendor.c:62: value = BSWAP32(*(uint32_t *)EP0BUF);
      000D2D 90 E7 40         [24] 1060 	mov	dptr,#_EP0BUF
      000D30 E0               [24] 1061 	movx	a,@dptr
      000D31 A3               [24] 1062 	inc	dptr
      000D32 E0               [24] 1063 	movx	a,@dptr
      000D33 A3               [24] 1064 	inc	dptr
      000D34 E0               [24] 1065 	movx	a,@dptr
      000D35 A3               [24] 1066 	inc	dptr
      000D36 E0               [24] 1067 	movx	a,@dptr
      000D37 FA               [12] 1068 	mov	r2,a
      000D38 90 E7 40         [24] 1069 	mov	dptr,#_EP0BUF
      000D3B E0               [24] 1070 	movx	a,@dptr
      000D3C A3               [24] 1071 	inc	dptr
      000D3D E0               [24] 1072 	movx	a,@dptr
      000D3E FF               [12] 1073 	mov	r7,a
      000D3F A3               [24] 1074 	inc	dptr
      000D40 E0               [24] 1075 	movx	a,@dptr
      000D41 F9               [12] 1076 	mov	r1,a
      000D42 A3               [24] 1077 	inc	dptr
      000D43 E0               [24] 1078 	movx	a,@dptr
      000D44 FB               [12] 1079 	mov	r3,a
      000D45 8F 06            [24] 1080 	mov	ar6,r7
      000D47 89 07            [24] 1081 	mov	ar7,r1
      000D49 8B 01            [24] 1082 	mov	ar1,r3
      000D4B 7B 00            [12] 1083 	mov	r3,#0x00
      000D4D 7E 00            [12] 1084 	mov	r6,#0x00
      000D4F 79 00            [12] 1085 	mov	r1,#0x00
      000D51 8A 00            [24] 1086 	mov	ar0,r2
      000D53 E4               [12] 1087 	clr	a
      000D54 FA               [12] 1088 	mov	r2,a
      000D55 FC               [12] 1089 	mov	r4,a
      000D56 FD               [12] 1090 	mov	r5,a
      000D57 E8               [12] 1091 	mov	a,r0
      000D58 42 06            [12] 1092 	orl	ar6,a
      000D5A EA               [12] 1093 	mov	a,r2
      000D5B 42 07            [12] 1094 	orl	ar7,a
      000D5D EC               [12] 1095 	mov	a,r4
      000D5E 42 01            [12] 1096 	orl	ar1,a
      000D60 ED               [12] 1097 	mov	a,r5
      000D61 42 03            [12] 1098 	orl	ar3,a
      000D63 90 E7 40         [24] 1099 	mov	dptr,#_EP0BUF
      000D66 E0               [24] 1100 	movx	a,@dptr
      000D67 F8               [12] 1101 	mov	r0,a
      000D68 A3               [24] 1102 	inc	dptr
      000D69 E0               [24] 1103 	movx	a,@dptr
      000D6A FA               [12] 1104 	mov	r2,a
      000D6B A3               [24] 1105 	inc	dptr
      000D6C E0               [24] 1106 	movx	a,@dptr
      000D6D FC               [12] 1107 	mov	r4,a
      000D6E A3               [24] 1108 	inc	dptr
      000D6F E0               [24] 1109 	movx	a,@dptr
      000D70 8C 05            [24] 1110 	mov	ar5,r4
      000D72 8A 04            [24] 1111 	mov	ar4,r2
      000D74 88 02            [24] 1112 	mov	ar2,r0
      000D76 E4               [12] 1113 	clr	a
      000D77 F8               [12] 1114 	mov	r0,a
      000D78 FA               [12] 1115 	mov	r2,a
      000D79 FD               [12] 1116 	mov	r5,a
      000D7A E8               [12] 1117 	mov	a,r0
      000D7B 42 06            [12] 1118 	orl	ar6,a
      000D7D EA               [12] 1119 	mov	a,r2
      000D7E 42 07            [12] 1120 	orl	ar7,a
      000D80 EC               [12] 1121 	mov	a,r4
      000D81 42 01            [12] 1122 	orl	ar1,a
      000D83 ED               [12] 1123 	mov	a,r5
      000D84 42 03            [12] 1124 	orl	ar3,a
      000D86 90 E7 40         [24] 1125 	mov	dptr,#_EP0BUF
      000D89 E0               [24] 1126 	movx	a,@dptr
      000D8A F8               [12] 1127 	mov	r0,a
      000D8B A3               [24] 1128 	inc	dptr
      000D8C E0               [24] 1129 	movx	a,@dptr
      000D8D A3               [24] 1130 	inc	dptr
      000D8E E0               [24] 1131 	movx	a,@dptr
      000D8F A3               [24] 1132 	inc	dptr
      000D90 E0               [24] 1133 	movx	a,@dptr
      000D91 88 05            [24] 1134 	mov	ar5,r0
      000D93 E4               [12] 1135 	clr	a
      000D94 F8               [12] 1136 	mov	r0,a
      000D95 FA               [12] 1137 	mov	r2,a
      000D96 FC               [12] 1138 	mov	r4,a
      000D97 E8               [12] 1139 	mov	a,r0
      000D98 4E               [12] 1140 	orl	a,r6
      000D99 F5 4A            [12] 1141 	mov	_handle_reg_write_value_10000_33,a
      000D9B EA               [12] 1142 	mov	a,r2
      000D9C 4F               [12] 1143 	orl	a,r7
      000D9D F5 4B            [12] 1144 	mov	(_handle_reg_write_value_10000_33 + 1),a
      000D9F EC               [12] 1145 	mov	a,r4
      000DA0 49               [12] 1146 	orl	a,r1
      000DA1 F5 4C            [12] 1147 	mov	(_handle_reg_write_value_10000_33 + 2),a
      000DA3 ED               [12] 1148 	mov	a,r5
      000DA4 4B               [12] 1149 	orl	a,r3
      000DA5 F5 4D            [12] 1150 	mov	(_handle_reg_write_value_10000_33 + 3),a
                                   1151 ;	build/../usb_vendor.c:64: max2771_handle_t target = (channel == 0) ? g_max2771_ch1 : g_max2771_ch2;
      000DA7 E5 48            [12] 1152 	mov	a,_handle_reg_write_channel_10000_33
      000DA9 70 0D            [24] 1153 	jnz	00110$
      000DAB 90 3C B8         [24] 1154 	mov	dptr,#_g_max2771_ch1
      000DAE E0               [24] 1155 	movx	a,@dptr
      000DAF F9               [12] 1156 	mov	r1,a
      000DB0 A3               [24] 1157 	inc	dptr
      000DB1 E0               [24] 1158 	movx	a,@dptr
      000DB2 FA               [12] 1159 	mov	r2,a
      000DB3 A3               [24] 1160 	inc	dptr
      000DB4 E0               [24] 1161 	movx	a,@dptr
      000DB5 FB               [12] 1162 	mov	r3,a
      000DB6 80 0B            [24] 1163 	sjmp	00111$
      000DB8                       1164 00110$:
      000DB8 90 3C BB         [24] 1165 	mov	dptr,#_g_max2771_ch2
      000DBB E0               [24] 1166 	movx	a,@dptr
      000DBC F9               [12] 1167 	mov	r1,a
      000DBD A3               [24] 1168 	inc	dptr
      000DBE E0               [24] 1169 	movx	a,@dptr
      000DBF FA               [12] 1170 	mov	r2,a
      000DC0 A3               [24] 1171 	inc	dptr
      000DC1 E0               [24] 1172 	movx	a,@dptr
      000DC2 FB               [12] 1173 	mov	r3,a
      000DC3                       1174 00111$:
      000DC3 89 00            [24] 1175 	mov	ar0,r1
      000DC5 8A 06            [24] 1176 	mov	ar6,r2
      000DC7 8B 07            [24] 1177 	mov	ar7,r3
                                   1178 ;	build/../usb_vendor.c:65: if (target == NULL) return false;
      000DC9 E9               [12] 1179 	mov	a,r1
      000DCA 4A               [12] 1180 	orl	a,r2
      000DCB 70 03            [24] 1181 	jnz	00107$
      000DCD F5 82            [12] 1182 	mov	dpl,a
      000DCF 22               [24] 1183 	ret
      000DD0                       1184 00107$:
                                   1185 ;	build/../usb_vendor.c:67: err = max2771_write_register(target, addr, value);
      000DD0 85 49 2F         [24] 1186 	mov	_max2771_write_register_PARM_2,_handle_reg_write_addr_10000_33
      000DD3 85 4A 30         [24] 1187 	mov	_max2771_write_register_PARM_3,_handle_reg_write_value_10000_33
      000DD6 85 4B 31         [24] 1188 	mov	(_max2771_write_register_PARM_3 + 1),(_handle_reg_write_value_10000_33 + 1)
      000DD9 85 4C 32         [24] 1189 	mov	(_max2771_write_register_PARM_3 + 2),(_handle_reg_write_value_10000_33 + 2)
      000DDC 85 4D 33         [24] 1190 	mov	(_max2771_write_register_PARM_3 + 3),(_handle_reg_write_value_10000_33 + 3)
      000DDF 88 82            [24] 1191 	mov	dpl, r0
      000DE1 8E 83            [24] 1192 	mov	dph, r6
      000DE3 8F F0            [24] 1193 	mov	b, r7
      000DE5 12 09 37         [24] 1194 	lcall	_max2771_write_register
                                   1195 ;	build/../usb_vendor.c:68: return (err == MAX2771_OK);
      000DE8 E5 82            [12] 1196 	mov	a,dpl
      000DEA B4 01 00         [24] 1197 	cjne	a,#0x01,00146$
      000DED                       1198 00146$:
      000DED E4               [12] 1199 	clr	a
      000DEE 33               [12] 1200 	rlc	a
      000DEF F5 82            [12] 1201 	mov	dpl, a
                                   1202 ;	build/../usb_vendor.c:69: }
      000DF1 22               [24] 1203 	ret
                                   1204 ;------------------------------------------------------------
                                   1205 ;Allocation info for local variables in function 'handle_ad9851_write'
                                   1206 ;------------------------------------------------------------
                                   1207 ;len           Allocated to registers 
                                   1208 ;freq          Allocated to registers 
                                   1209 ;ctrl          Allocated to registers 
                                   1210 ;sloc0         Allocated with name '_handle_ad9851_write_sloc0_1_0'
                                   1211 ;------------------------------------------------------------
                                   1212 ;	build/../usb_vendor.c:71: static bool handle_ad9851_write(void) {
                                   1213 ;	-----------------------------------------
                                   1214 ;	 function handle_ad9851_write
                                   1215 ;	-----------------------------------------
      000DF2                       1216 _handle_ad9851_write:
                                   1217 ;	build/../usb_vendor.c:72: uint16_t len = WORD_FROM_SETUP(SETUPDAT + 6);
      000DF2 90 E6 BF         [24] 1218 	mov	dptr,#(_SETUPDAT + 0x0007)
      000DF5 E0               [24] 1219 	movx	a,@dptr
      000DF6 FE               [12] 1220 	mov	r6,a
      000DF7 7F 00            [12] 1221 	mov	r7,#0x00
      000DF9 90 E6 BE         [24] 1222 	mov	dptr,#(_SETUPDAT + 0x0006)
      000DFC E0               [24] 1223 	movx	a,@dptr
      000DFD 7C 00            [12] 1224 	mov	r4,#0x00
      000DFF 42 07            [12] 1225 	orl	ar7,a
      000E01 EC               [12] 1226 	mov	a,r4
      000E02 42 06            [12] 1227 	orl	ar6,a
                                   1228 ;	build/../usb_vendor.c:76: if (len < 5 || g_ad9851 == NULL) return true;
      000E04 C3               [12] 1229 	clr	c
      000E05 EF               [12] 1230 	mov	a,r7
      000E06 94 05            [12] 1231 	subb	a,#0x05
      000E08 EE               [12] 1232 	mov	a,r6
      000E09 94 00            [12] 1233 	subb	a,#0x00
      000E0B 40 1A            [24] 1234 	jc	00101$
      000E0D 90 3C BE         [24] 1235 	mov	dptr,#_g_ad9851
      000E10 E0               [24] 1236 	movx	a,@dptr
      000E11 F5 4E            [12] 1237 	mov	_handle_ad9851_write_sloc0_1_0,a
      000E13 A3               [24] 1238 	inc	dptr
      000E14 E0               [24] 1239 	movx	a,@dptr
      000E15 F5 4F            [12] 1240 	mov	(_handle_ad9851_write_sloc0_1_0 + 1),a
      000E17 A3               [24] 1241 	inc	dptr
      000E18 E0               [24] 1242 	movx	a,@dptr
      000E19 F5 50            [12] 1243 	mov	(_handle_ad9851_write_sloc0_1_0 + 2),a
      000E1B 90 3C BE         [24] 1244 	mov	dptr,#_g_ad9851
      000E1E E0               [24] 1245 	movx	a,@dptr
      000E1F F5 F0            [12] 1246 	mov	b,a
      000E21 A3               [24] 1247 	inc	dptr
      000E22 E0               [24] 1248 	movx	a,@dptr
      000E23 45 F0            [12] 1249 	orl	a,b
      000E25 70 04            [24] 1250 	jnz	00102$
      000E27                       1251 00101$:
      000E27 75 82 01         [24] 1252 	mov	dpl, #0x01
      000E2A 22               [24] 1253 	ret
      000E2B                       1254 00102$:
                                   1255 ;	build/../usb_vendor.c:78: EP0BCH = EP0BCL = 0;
      000E2B 90 E6 8B         [24] 1256 	mov	dptr,#_EP0BCL
      000E2E E4               [12] 1257 	clr	a
      000E2F F0               [24] 1258 	movx	@dptr,a
      000E30 90 E6 8A         [24] 1259 	mov	dptr,#_EP0BCH
      000E33 F0               [24] 1260 	movx	@dptr,a
                                   1261 ;	build/../usb_vendor.c:79: while (EP0CS & bmEPBUSY) { /* wait */ }
      000E34                       1262 00104$:
      000E34 90 E6 A0         [24] 1263 	mov	dptr,#_EP0CS
      000E37 E0               [24] 1264 	movx	a,@dptr
      000E38 20 E1 F9         [24] 1265 	jb	acc.1,00104$
                                   1266 ;	build/../usb_vendor.c:81: freq = BSWAP32(*(uint32_t *)EP0BUF);
      000E3B 90 E7 40         [24] 1267 	mov	dptr,#_EP0BUF
      000E3E E0               [24] 1268 	movx	a,@dptr
      000E3F A3               [24] 1269 	inc	dptr
      000E40 E0               [24] 1270 	movx	a,@dptr
      000E41 A3               [24] 1271 	inc	dptr
      000E42 E0               [24] 1272 	movx	a,@dptr
      000E43 A3               [24] 1273 	inc	dptr
      000E44 E0               [24] 1274 	movx	a,@dptr
      000E45 F9               [12] 1275 	mov	r1,a
      000E46 90 E7 40         [24] 1276 	mov	dptr,#_EP0BUF
      000E49 E0               [24] 1277 	movx	a,@dptr
      000E4A A3               [24] 1278 	inc	dptr
      000E4B E0               [24] 1279 	movx	a,@dptr
      000E4C FA               [12] 1280 	mov	r2,a
      000E4D A3               [24] 1281 	inc	dptr
      000E4E E0               [24] 1282 	movx	a,@dptr
      000E4F FB               [12] 1283 	mov	r3,a
      000E50 A3               [24] 1284 	inc	dptr
      000E51 E0               [24] 1285 	movx	a,@dptr
      000E52 FC               [12] 1286 	mov	r4,a
      000E53 8A 00            [24] 1287 	mov	ar0,r2
      000E55 8B 02            [24] 1288 	mov	ar2,r3
      000E57 8C 03            [24] 1289 	mov	ar3,r4
      000E59 E4               [12] 1290 	clr	a
      000E5A FC               [12] 1291 	mov	r4,a
      000E5B F8               [12] 1292 	mov	r0,a
      000E5C FB               [12] 1293 	mov	r3,a
      000E5D FD               [12] 1294 	mov	r5,a
      000E5E FE               [12] 1295 	mov	r6,a
      000E5F FF               [12] 1296 	mov	r7,a
      000E60 E9               [12] 1297 	mov	a,r1
      000E61 42 00            [12] 1298 	orl	ar0,a
      000E63 ED               [12] 1299 	mov	a,r5
      000E64 42 02            [12] 1300 	orl	ar2,a
      000E66 EE               [12] 1301 	mov	a,r6
      000E67 42 03            [12] 1302 	orl	ar3,a
      000E69 EF               [12] 1303 	mov	a,r7
      000E6A 42 04            [12] 1304 	orl	ar4,a
      000E6C 90 E7 40         [24] 1305 	mov	dptr,#_EP0BUF
      000E6F E0               [24] 1306 	movx	a,@dptr
      000E70 F9               [12] 1307 	mov	r1,a
      000E71 A3               [24] 1308 	inc	dptr
      000E72 E0               [24] 1309 	movx	a,@dptr
      000E73 FD               [12] 1310 	mov	r5,a
      000E74 A3               [24] 1311 	inc	dptr
      000E75 E0               [24] 1312 	movx	a,@dptr
      000E76 FE               [12] 1313 	mov	r6,a
      000E77 A3               [24] 1314 	inc	dptr
      000E78 E0               [24] 1315 	movx	a,@dptr
      000E79 8E 07            [24] 1316 	mov	ar7,r6
      000E7B 8D 06            [24] 1317 	mov	ar6,r5
      000E7D 89 05            [24] 1318 	mov	ar5,r1
      000E7F E4               [12] 1319 	clr	a
      000E80 F9               [12] 1320 	mov	r1,a
      000E81 FD               [12] 1321 	mov	r5,a
      000E82 FF               [12] 1322 	mov	r7,a
      000E83 E9               [12] 1323 	mov	a,r1
      000E84 42 00            [12] 1324 	orl	ar0,a
      000E86 ED               [12] 1325 	mov	a,r5
      000E87 42 02            [12] 1326 	orl	ar2,a
      000E89 EE               [12] 1327 	mov	a,r6
      000E8A 42 03            [12] 1328 	orl	ar3,a
      000E8C EF               [12] 1329 	mov	a,r7
      000E8D 42 04            [12] 1330 	orl	ar4,a
      000E8F 90 E7 40         [24] 1331 	mov	dptr,#_EP0BUF
      000E92 E0               [24] 1332 	movx	a,@dptr
      000E93 F9               [12] 1333 	mov	r1,a
      000E94 A3               [24] 1334 	inc	dptr
      000E95 E0               [24] 1335 	movx	a,@dptr
      000E96 A3               [24] 1336 	inc	dptr
      000E97 E0               [24] 1337 	movx	a,@dptr
      000E98 A3               [24] 1338 	inc	dptr
      000E99 E0               [24] 1339 	movx	a,@dptr
      000E9A 89 07            [24] 1340 	mov	ar7,r1
      000E9C E4               [12] 1341 	clr	a
      000E9D F9               [12] 1342 	mov	r1,a
      000E9E FD               [12] 1343 	mov	r5,a
      000E9F FE               [12] 1344 	mov	r6,a
      000EA0 E9               [12] 1345 	mov	a,r1
      000EA1 48               [12] 1346 	orl	a,r0
      000EA2 F5 10            [12] 1347 	mov	_ad9851_set_frequency_PARM_2,a
      000EA4 ED               [12] 1348 	mov	a,r5
      000EA5 4A               [12] 1349 	orl	a,r2
      000EA6 F5 11            [12] 1350 	mov	(_ad9851_set_frequency_PARM_2 + 1),a
      000EA8 EE               [12] 1351 	mov	a,r6
      000EA9 4B               [12] 1352 	orl	a,r3
      000EAA F5 12            [12] 1353 	mov	(_ad9851_set_frequency_PARM_2 + 2),a
      000EAC EF               [12] 1354 	mov	a,r7
      000EAD 4C               [12] 1355 	orl	a,r4
      000EAE F5 13            [12] 1356 	mov	(_ad9851_set_frequency_PARM_2 + 3),a
                                   1357 ;	build/../usb_vendor.c:82: ctrl = EP0BUF[4];
      000EB0 90 E7 44         [24] 1358 	mov	dptr,#(_EP0BUF + 0x0004)
      000EB3 E0               [24] 1359 	movx	a,@dptr
      000EB4 F5 14            [12] 1360 	mov	_ad9851_set_frequency_PARM_3,a
                                   1361 ;	build/../usb_vendor.c:84: ad9851_set_frequency(g_ad9851, freq, ctrl);
      000EB6 85 4E 82         [24] 1362 	mov	dpl, _handle_ad9851_write_sloc0_1_0
      000EB9 85 4F 83         [24] 1363 	mov	dph, (_handle_ad9851_write_sloc0_1_0 + 1)
      000EBC 85 50 F0         [24] 1364 	mov	b, (_handle_ad9851_write_sloc0_1_0 + 2)
      000EBF 12 04 FD         [24] 1365 	lcall	_ad9851_set_frequency
                                   1366 ;	build/../usb_vendor.c:85: return true;
      000EC2 75 82 01         [24] 1367 	mov	dpl, #0x01
                                   1368 ;	build/../usb_vendor.c:86: }
      000EC5 22               [24] 1369 	ret
                                   1370 ;------------------------------------------------------------
                                   1371 ;Allocation info for local variables in function 'handle_save_settings'
                                   1372 ;------------------------------------------------------------
                                   1373 ;i             Allocated to registers r7 
                                   1374 ;regs          Allocated with name '_handle_save_settings_regs_10000_40'
                                   1375 ;------------------------------------------------------------
                                   1376 ;	build/../usb_vendor.c:88: static bool handle_save_settings(void) {
                                   1377 ;	-----------------------------------------
                                   1378 ;	 function handle_save_settings
                                   1379 ;	-----------------------------------------
      000EC6                       1380 _handle_save_settings:
                                   1381 ;	build/../usb_vendor.c:92: EP0BCH = EP0BCL = 0;
      000EC6 90 E6 8B         [24] 1382 	mov	dptr,#_EP0BCL
      000EC9 E4               [12] 1383 	clr	a
      000ECA F0               [24] 1384 	movx	@dptr,a
      000ECB 90 E6 8A         [24] 1385 	mov	dptr,#_EP0BCH
      000ECE F0               [24] 1386 	movx	@dptr,a
                                   1387 ;	build/../usb_vendor.c:94: for (i = 0; i < MAX2771_MAX_REGISTERS; i++) {
      000ECF FF               [12] 1388 	mov	r7,a
      000ED0                       1389 00102$:
                                   1390 ;	build/../usb_vendor.c:95: max2771_read_register(g_max2771_ch1, i, &regs[i]);
      000ED0 90 3C B8         [24] 1391 	mov	dptr,#_g_max2771_ch1
      000ED3 E0               [24] 1392 	movx	a,@dptr
      000ED4 FC               [12] 1393 	mov	r4,a
      000ED5 A3               [24] 1394 	inc	dptr
      000ED6 E0               [24] 1395 	movx	a,@dptr
      000ED7 FD               [12] 1396 	mov	r5,a
      000ED8 A3               [24] 1397 	inc	dptr
      000ED9 E0               [24] 1398 	movx	a,@dptr
      000EDA FE               [12] 1399 	mov	r6,a
      000EDB EF               [12] 1400 	mov	a,r7
      000EDC 75 F0 04         [24] 1401 	mov	b,#0x04
      000EDF A4               [48] 1402 	mul	ab
      000EE0 24 5F            [12] 1403 	add	a, #_handle_save_settings_regs_10000_40
      000EE2 FA               [12] 1404 	mov	r2,a
      000EE3 74 3C            [12] 1405 	mov	a,#(_handle_save_settings_regs_10000_40 >> 8)
      000EE5 35 F0            [12] 1406 	addc	a, b
      000EE7 FB               [12] 1407 	mov	r3,a
      000EE8 8A 35            [24] 1408 	mov	_max2771_read_register_PARM_3,r2
      000EEA 8B 36            [24] 1409 	mov	(_max2771_read_register_PARM_3 + 1),r3
      000EEC 75 37 00         [24] 1410 	mov	(_max2771_read_register_PARM_3 + 2),#0x00
      000EEF 8F 34            [24] 1411 	mov	_max2771_read_register_PARM_2,r7
      000EF1 8C 82            [24] 1412 	mov	dpl, r4
      000EF3 8D 83            [24] 1413 	mov	dph, r5
      000EF5 8E F0            [24] 1414 	mov	b, r6
      000EF7 C0 07            [24] 1415 	push	ar7
      000EF9 12 09 D2         [24] 1416 	lcall	_max2771_read_register
      000EFC D0 07            [24] 1417 	pop	ar7
                                   1418 ;	build/../usb_vendor.c:96: max2771_read_register(g_max2771_ch2, i, &regs[MAX2771_MAX_REGISTERS + i]);
      000EFE 90 3C BB         [24] 1419 	mov	dptr,#_g_max2771_ch2
      000F01 E0               [24] 1420 	movx	a,@dptr
      000F02 FC               [12] 1421 	mov	r4,a
      000F03 A3               [24] 1422 	inc	dptr
      000F04 E0               [24] 1423 	movx	a,@dptr
      000F05 FD               [12] 1424 	mov	r5,a
      000F06 A3               [24] 1425 	inc	dptr
      000F07 E0               [24] 1426 	movx	a,@dptr
      000F08 FE               [12] 1427 	mov	r6,a
      000F09 74 0B            [12] 1428 	mov	a,#0x0b
      000F0B 2F               [12] 1429 	add	a, r7
      000F0C 75 F0 04         [24] 1430 	mov	b,#0x04
      000F0F A4               [48] 1431 	mul	ab
      000F10 24 5F            [12] 1432 	add	a, #_handle_save_settings_regs_10000_40
      000F12 FA               [12] 1433 	mov	r2,a
      000F13 74 3C            [12] 1434 	mov	a,#(_handle_save_settings_regs_10000_40 >> 8)
      000F15 35 F0            [12] 1435 	addc	a, b
      000F17 FB               [12] 1436 	mov	r3,a
      000F18 8A 35            [24] 1437 	mov	_max2771_read_register_PARM_3,r2
      000F1A 8B 36            [24] 1438 	mov	(_max2771_read_register_PARM_3 + 1),r3
      000F1C 75 37 00         [24] 1439 	mov	(_max2771_read_register_PARM_3 + 2),#0x00
      000F1F 8F 34            [24] 1440 	mov	_max2771_read_register_PARM_2,r7
      000F21 8C 82            [24] 1441 	mov	dpl, r4
      000F23 8D 83            [24] 1442 	mov	dph, r5
      000F25 8E F0            [24] 1443 	mov	b, r6
      000F27 C0 07            [24] 1444 	push	ar7
      000F29 12 09 D2         [24] 1445 	lcall	_max2771_read_register
      000F2C D0 07            [24] 1446 	pop	ar7
                                   1447 ;	build/../usb_vendor.c:94: for (i = 0; i < MAX2771_MAX_REGISTERS; i++) {
      000F2E 0F               [12] 1448 	inc	r7
      000F2F BF 0B 00         [24] 1449 	cjne	r7,#0x0b,00119$
      000F32                       1450 00119$:
      000F32 40 9C            [24] 1451 	jc	00102$
                                   1452 ;	build/../usb_vendor.c:99: return (eeprom_settings_save(regs, MAX2771_MAX_REGISTERS * 2) == EEPROM_OK);
      000F34 75 28 16         [24] 1453 	mov	_eeprom_settings_save_PARM_2,#0x16
      000F37 75 29 00         [24] 1454 	mov	(_eeprom_settings_save_PARM_2 + 1),#0x00
      000F3A 90 3C 5F         [24] 1455 	mov	dptr,#_handle_save_settings_regs_10000_40
      000F3D 75 F0 00         [24] 1456 	mov	b, #0x00
      000F40 12 07 A5         [24] 1457 	lcall	_eeprom_settings_save
      000F43 E5 82            [12] 1458 	mov	a,dpl
      000F45 B4 01 00         [24] 1459 	cjne	a,#0x01,00121$
      000F48                       1460 00121$:
      000F48 E4               [12] 1461 	clr	a
      000F49 33               [12] 1462 	rlc	a
      000F4A F5 82            [12] 1463 	mov	dpl, a
                                   1464 ;	build/../usb_vendor.c:100: }
      000F4C 22               [24] 1465 	ret
                                   1466 ;------------------------------------------------------------
                                   1467 ;Allocation info for local variables in function 'usb_vendor_dispatch'
                                   1468 ;------------------------------------------------------------
                                   1469 ;cmd           Allocated to registers r7 
                                   1470 ;------------------------------------------------------------
                                   1471 ;	build/../usb_vendor.c:107: bool usb_vendor_dispatch(uint8_t cmd) {
                                   1472 ;	-----------------------------------------
                                   1473 ;	 function usb_vendor_dispatch
                                   1474 ;	-----------------------------------------
      000F4D                       1475 _usb_vendor_dispatch:
      000F4D AF 82            [24] 1476 	mov	r7, dpl
                                   1477 ;	build/../usb_vendor.c:108: switch (cmd) {
      000F4F BF 40 02         [24] 1478 	cjne	r7,#0x40,00161$
      000F52 80 23            [24] 1479 	sjmp	00101$
      000F54                       1480 00161$:
      000F54 BF 41 02         [24] 1481 	cjne	r7,#0x41,00162$
      000F57 80 21            [24] 1482 	sjmp	00102$
      000F59                       1483 00162$:
      000F59 BF 42 02         [24] 1484 	cjne	r7,#0x42,00163$
      000F5C 80 1F            [24] 1485 	sjmp	00103$
      000F5E                       1486 00163$:
      000F5E BF 44 02         [24] 1487 	cjne	r7,#0x44,00164$
      000F61 80 1D            [24] 1488 	sjmp	00104$
      000F63                       1489 00164$:
      000F63 BF 45 02         [24] 1490 	cjne	r7,#0x45,00165$
      000F66 80 28            [24] 1491 	sjmp	00105$
      000F68                       1492 00165$:
      000F68 BF 46 02         [24] 1493 	cjne	r7,#0x46,00166$
      000F6B 80 33            [24] 1494 	sjmp	00106$
      000F6D                       1495 00166$:
      000F6D BF 47 02         [24] 1496 	cjne	r7,#0x47,00167$
      000F70 80 41            [24] 1497 	sjmp	00107$
      000F72                       1498 00167$:
                                   1499 ;	build/../usb_vendor.c:109: case VR_STAT:      return handle_get_status();
      000F72 BF 50 44         [24] 1500 	cjne	r7,#0x50,00109$
      000F75 80 3F            [24] 1501 	sjmp	00108$
      000F77                       1502 00101$:
                                   1503 ;	build/../usb_vendor.c:110: case VR_REG_READ:  return handle_reg_read();
      000F77 02 0B EC         [24] 1504 	ljmp	_handle_get_status
      000F7A                       1505 00102$:
                                   1506 ;	build/../usb_vendor.c:111: case VR_REG_WRITE: return handle_reg_write();
      000F7A 02 0C 47         [24] 1507 	ljmp	_handle_reg_read
      000F7D                       1508 00103$:
                                   1509 ;	build/../usb_vendor.c:112: case VR_START:     EP0BCH = EP0BCL = 0; start_bulk_transfer(); return true;
      000F7D 02 0C F2         [24] 1510 	ljmp	_handle_reg_write
      000F80                       1511 00104$:
      000F80 90 E6 8B         [24] 1512 	mov	dptr,#_EP0BCL
      000F83 E4               [12] 1513 	clr	a
      000F84 F0               [24] 1514 	movx	@dptr,a
      000F85 90 E6 8A         [24] 1515 	mov	dptr,#_EP0BCH
      000F88 F0               [24] 1516 	movx	@dptr,a
      000F89 12 01 36         [24] 1517 	lcall	_start_bulk_transfer
      000F8C 75 82 01         [24] 1518 	mov	dpl, #0x01
                                   1519 ;	build/../usb_vendor.c:113: case VR_STOP:      EP0BCH = EP0BCL = 0; stop_bulk_transfer(); return true;
      000F8F 22               [24] 1520 	ret
      000F90                       1521 00105$:
      000F90 90 E6 8B         [24] 1522 	mov	dptr,#_EP0BCL
      000F93 E4               [12] 1523 	clr	a
      000F94 F0               [24] 1524 	movx	@dptr,a
      000F95 90 E6 8A         [24] 1525 	mov	dptr,#_EP0BCH
      000F98 F0               [24] 1526 	movx	@dptr,a
      000F99 12 01 67         [24] 1527 	lcall	_stop_bulk_transfer
      000F9C 75 82 01         [24] 1528 	mov	dpl, #0x01
                                   1529 ;	build/../usb_vendor.c:114: case VR_RESET:     EP0BCH = EP0BCL = 0; stop_bulk_transfer(); device_reset(); return true;
      000F9F 22               [24] 1530 	ret
      000FA0                       1531 00106$:
      000FA0 90 E6 8B         [24] 1532 	mov	dptr,#_EP0BCL
      000FA3 E4               [12] 1533 	clr	a
      000FA4 F0               [24] 1534 	movx	@dptr,a
      000FA5 90 E6 8A         [24] 1535 	mov	dptr,#_EP0BCH
      000FA8 F0               [24] 1536 	movx	@dptr,a
      000FA9 12 01 67         [24] 1537 	lcall	_stop_bulk_transfer
      000FAC 12 01 72         [24] 1538 	lcall	_device_reset
      000FAF 75 82 01         [24] 1539 	mov	dpl, #0x01
                                   1540 ;	build/../usb_vendor.c:115: case VR_SAVE:      return handle_save_settings();
      000FB2 22               [24] 1541 	ret
      000FB3                       1542 00107$:
                                   1543 ;	build/../usb_vendor.c:116: case VR_AD9851:    return handle_ad9851_write();
      000FB3 02 0E C6         [24] 1544 	ljmp	_handle_save_settings
      000FB6                       1545 00108$:
                                   1546 ;	build/../usb_vendor.c:117: default:           return false;
      000FB6 02 0D F2         [24] 1547 	ljmp	_handle_ad9851_write
      000FB9                       1548 00109$:
      000FB9 75 82 00         [24] 1549 	mov	dpl, #0x00
                                   1550 ;	build/../usb_vendor.c:118: }
                                   1551 ;	build/../usb_vendor.c:119: }
      000FBC 22               [24] 1552 	ret
                                   1553 	.area CSEG    (CODE)
                                   1554 	.area CONST   (CODE)
                                   1555 	.area XINIT   (CODE)
                                   1556 	.area CABS    (ABS,CODE)
