                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module eeprom_storage
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _eeprom_write
                                     12 	.globl _eeprom_read
                                     13 	.globl _eeprom_settings_save_PARM_2
                                     14 	.globl _eeprom_settings_load_PARM_2
                                     15 	.globl _eeprom_settings_load
                                     16 	.globl _eeprom_settings_save
                                     17 ;--------------------------------------------------------
                                     18 ; special function registers
                                     19 ;--------------------------------------------------------
                                     20 	.area RSEG    (ABS,DATA)
      000000                         21 	.org 0x0000
                                     22 ;--------------------------------------------------------
                                     23 ; special function bits
                                     24 ;--------------------------------------------------------
                                     25 	.area RSEG    (ABS,DATA)
      000000                         26 	.org 0x0000
                                     27 ;--------------------------------------------------------
                                     28 ; overlayable register banks
                                     29 ;--------------------------------------------------------
                                     30 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                         31 	.ds 8
                                     32 ;--------------------------------------------------------
                                     33 ; internal ram data
                                     34 ;--------------------------------------------------------
                                     35 	.area DSEG    (DATA)
      000022                         36 _eeprom_settings_load_PARM_2:
      000022                         37 	.ds 2
      000024                         38 _eeprom_settings_load_header_10000_8:
      000024                         39 	.ds 4
      000028                         40 _eeprom_settings_save_PARM_2:
      000028                         41 	.ds 2
      00002A                         42 _eeprom_settings_save_header_10000_11:
      00002A                         43 	.ds 4
                                     44 ;--------------------------------------------------------
                                     45 ; overlayable items in internal ram
                                     46 ;--------------------------------------------------------
                                     47 ;--------------------------------------------------------
                                     48 ; indirectly addressable internal ram data
                                     49 ;--------------------------------------------------------
                                     50 	.area ISEG    (DATA)
                                     51 ;--------------------------------------------------------
                                     52 ; absolute internal ram data
                                     53 ;--------------------------------------------------------
                                     54 	.area IABS    (ABS,DATA)
                                     55 	.area IABS    (ABS,DATA)
                                     56 ;--------------------------------------------------------
                                     57 ; bit data
                                     58 ;--------------------------------------------------------
                                     59 	.area BSEG    (BIT)
                                     60 ;--------------------------------------------------------
                                     61 ; paged external ram data
                                     62 ;--------------------------------------------------------
                                     63 	.area PSEG    (PAG,XDATA)
                                     64 ;--------------------------------------------------------
                                     65 ; uninitialized external ram data
                                     66 ;--------------------------------------------------------
                                     67 	.area XSEG    (XDATA)
                                     68 ;--------------------------------------------------------
                                     69 ; absolute external ram data
                                     70 ;--------------------------------------------------------
                                     71 	.area XABS    (ABS,XDATA)
                                     72 ;--------------------------------------------------------
                                     73 ; initialized external ram data
                                     74 ;--------------------------------------------------------
                                     75 	.area XISEG   (XDATA)
                                     76 	.area HOME    (CODE)
                                     77 	.area GSINIT0 (CODE)
                                     78 	.area GSINIT1 (CODE)
                                     79 	.area GSINIT2 (CODE)
                                     80 	.area GSINIT3 (CODE)
                                     81 	.area GSINIT4 (CODE)
                                     82 	.area GSINIT5 (CODE)
                                     83 	.area GSINIT  (CODE)
                                     84 	.area GSFINAL (CODE)
                                     85 	.area CSEG    (CODE)
                                     86 ;--------------------------------------------------------
                                     87 ; global & static initialisations
                                     88 ;--------------------------------------------------------
                                     89 	.area HOME    (CODE)
                                     90 	.area GSINIT  (CODE)
                                     91 	.area GSFINAL (CODE)
                                     92 	.area GSINIT  (CODE)
                                     93 ;--------------------------------------------------------
                                     94 ; Home
                                     95 ;--------------------------------------------------------
                                     96 	.area HOME    (CODE)
                                     97 	.area HOME    (CODE)
                                     98 ;--------------------------------------------------------
                                     99 ; code
                                    100 ;--------------------------------------------------------
                                    101 	.area CSEG    (CODE)
                                    102 ;------------------------------------------------------------
                                    103 ;Allocation info for local variables in function 'eeprom_settings_load'
                                    104 ;------------------------------------------------------------
                                    105 ;buffer_size_words Allocated with name '_eeprom_settings_load_PARM_2'
                                    106 ;reg_buffer    Allocated to registers r5 r6 r7 
                                    107 ;header        Allocated with name '_eeprom_settings_load_header_10000_8'
                                    108 ;------------------------------------------------------------
                                    109 ;	build/../eeprom_storage.c:4: eeprom_err_t eeprom_settings_load(uint32_t* reg_buffer, uint16_t buffer_size_words) {
                                    110 ;	-----------------------------------------
                                    111 ;	 function eeprom_settings_load
                                    112 ;	-----------------------------------------
      000729                        113 _eeprom_settings_load:
                           000007   114 	ar7 = 0x07
                           000006   115 	ar6 = 0x06
                           000005   116 	ar5 = 0x05
                           000004   117 	ar4 = 0x04
                           000003   118 	ar3 = 0x03
                           000002   119 	ar2 = 0x02
                           000001   120 	ar1 = 0x01
                           000000   121 	ar0 = 0x00
      000729 AD 82            [24]  122 	mov	r5, dpl
      00072B AE 83            [24]  123 	mov	r6, dph
      00072D AF F0            [24]  124 	mov	r7, b
                                    125 ;	build/../eeprom_storage.c:7: if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
      00072F ED               [12]  126 	mov	a,r5
      000730 4E               [12]  127 	orl	a,r6
      000731 70 04            [24]  128 	jnz	00102$
      000733 75 82 01         [24]  129 	mov	dpl, #0x01
      000736 22               [24]  130 	ret
      000737                        131 00102$:
                                    132 ;	build/../eeprom_storage.c:9: eeprom_read(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
      000737 75 76 24         [24]  133 	mov	_eeprom_read_PARM_4,#_eeprom_settings_load_header_10000_8
      00073A 75 77 00         [24]  134 	mov	(_eeprom_read_PARM_4 + 1),#0x00
      00073D 75 78 40         [24]  135 	mov	(_eeprom_read_PARM_4 + 2),#0x40
      000740 75 72 00         [24]  136 	mov	_eeprom_read_PARM_2,#0x00
      000743 75 73 3F         [24]  137 	mov	(_eeprom_read_PARM_2 + 1),#0x3f
      000746 75 74 04         [24]  138 	mov	_eeprom_read_PARM_3,#0x04
      000749 75 75 00         [24]  139 	mov	(_eeprom_read_PARM_3 + 1),#0x00
      00074C 75 82 51         [24]  140 	mov	dpl, #0x51
      00074F C0 07            [24]  141 	push	ar7
      000751 C0 06            [24]  142 	push	ar6
      000753 C0 05            [24]  143 	push	ar5
      000755 12 13 17         [24]  144 	lcall	_eeprom_read
      000758 D0 05            [24]  145 	pop	ar5
      00075A D0 06            [24]  146 	pop	ar6
      00075C D0 07            [24]  147 	pop	ar7
                                    148 ;	build/../eeprom_storage.c:11: if (header != EEPROM_SETTINGS_HEADER) {
      00075E 74 BA            [12]  149 	mov	a,#0xba
      000760 B5 24 11         [24]  150 	cjne	a,_eeprom_settings_load_header_10000_8,00120$
      000763 74 0C            [12]  151 	mov	a,#0x0c
      000765 B5 25 0C         [24]  152 	cjne	a,(_eeprom_settings_load_header_10000_8 + 1),00120$
      000768 74 C0            [12]  153 	mov	a,#0xc0
      00076A B5 26 07         [24]  154 	cjne	a,(_eeprom_settings_load_header_10000_8 + 2),00120$
      00076D 74 AB            [12]  155 	mov	a,#0xab
      00076F B5 27 02         [24]  156 	cjne	a,(_eeprom_settings_load_header_10000_8 + 3),00120$
      000772 80 04            [24]  157 	sjmp	00104$
      000774                        158 00120$:
                                    159 ;	build/../eeprom_storage.c:12: return EEPROM_ERR_NO_VALID_DATA;
      000774 75 82 01         [24]  160 	mov	dpl, #0x01
      000777 22               [24]  161 	ret
      000778                        162 00104$:
                                    163 ;	build/../eeprom_storage.c:16: buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
      000778 AB 22            [24]  164 	mov	r3,_eeprom_settings_load_PARM_2
      00077A AC 23            [24]  165 	mov	r4,(_eeprom_settings_load_PARM_2 + 1)
      00077C EB               [12]  166 	mov	a,r3
      00077D 2B               [12]  167 	add	a,r3
      00077E F5 74            [12]  168 	mov	_eeprom_read_PARM_3,a
      000780 EC               [12]  169 	mov	a,r4
      000781 33               [12]  170 	rlc	a
      000782 F5 75            [12]  171 	mov	(_eeprom_read_PARM_3 + 1),a
      000784 E5 74            [12]  172 	mov	a,_eeprom_read_PARM_3
      000786 25 74            [12]  173 	add	a,_eeprom_read_PARM_3
      000788 F5 74            [12]  174 	mov	_eeprom_read_PARM_3,a
      00078A E5 75            [12]  175 	mov	a,(_eeprom_read_PARM_3 + 1)
      00078C 33               [12]  176 	rlc	a
      00078D F5 75            [12]  177 	mov	(_eeprom_read_PARM_3 + 1),a
      00078F 8D 76            [24]  178 	mov	_eeprom_read_PARM_4,r5
      000791 8E 77            [24]  179 	mov	(_eeprom_read_PARM_4 + 1),r6
      000793 8F 78            [24]  180 	mov	(_eeprom_read_PARM_4 + 2),r7
      000795 75 72 04         [24]  181 	mov	_eeprom_read_PARM_2,#0x04
      000798 75 73 3F         [24]  182 	mov	(_eeprom_read_PARM_2 + 1),#0x3f
      00079B 75 82 51         [24]  183 	mov	dpl, #0x51
      00079E 12 13 17         [24]  184 	lcall	_eeprom_read
                                    185 ;	build/../eeprom_storage.c:18: return EEPROM_OK;
      0007A1 75 82 00         [24]  186 	mov	dpl, #0x00
                                    187 ;	build/../eeprom_storage.c:19: }
      0007A4 22               [24]  188 	ret
                                    189 ;------------------------------------------------------------
                                    190 ;Allocation info for local variables in function 'eeprom_settings_save'
                                    191 ;------------------------------------------------------------
                                    192 ;buffer_size_words Allocated with name '_eeprom_settings_save_PARM_2'
                                    193 ;reg_buffer    Allocated to registers r5 r6 r7 
                                    194 ;header        Allocated with name '_eeprom_settings_save_header_10000_11'
                                    195 ;------------------------------------------------------------
                                    196 ;	build/../eeprom_storage.c:21: eeprom_err_t eeprom_settings_save(const uint32_t* reg_buffer, uint16_t buffer_size_words) {
                                    197 ;	-----------------------------------------
                                    198 ;	 function eeprom_settings_save
                                    199 ;	-----------------------------------------
      0007A5                        200 _eeprom_settings_save:
      0007A5 AD 82            [24]  201 	mov	r5, dpl
      0007A7 AE 83            [24]  202 	mov	r6, dph
      0007A9 AF F0            [24]  203 	mov	r7, b
                                    204 ;	build/../eeprom_storage.c:22: uint32_t header = EEPROM_SETTINGS_HEADER;
      0007AB 75 2A BA         [24]  205 	mov	_eeprom_settings_save_header_10000_11,#0xba
      0007AE 75 2B 0C         [24]  206 	mov	(_eeprom_settings_save_header_10000_11 + 1),#0x0c
      0007B1 75 2C C0         [24]  207 	mov	(_eeprom_settings_save_header_10000_11 + 2),#0xc0
      0007B4 75 2D AB         [24]  208 	mov	(_eeprom_settings_save_header_10000_11 + 3),#0xab
                                    209 ;	build/../eeprom_storage.c:24: if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
      0007B7 ED               [12]  210 	mov	a,r5
      0007B8 4E               [12]  211 	orl	a,r6
      0007B9 70 04            [24]  212 	jnz	00102$
      0007BB 75 82 01         [24]  213 	mov	dpl, #0x01
      0007BE 22               [24]  214 	ret
      0007BF                        215 00102$:
                                    216 ;	build/../eeprom_storage.c:26: eeprom_write(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
      0007BF 75 69 2A         [24]  217 	mov	_eeprom_write_PARM_4,#_eeprom_settings_save_header_10000_11
      0007C2 75 6A 00         [24]  218 	mov	(_eeprom_write_PARM_4 + 1),#0x00
      0007C5 75 6B 40         [24]  219 	mov	(_eeprom_write_PARM_4 + 2),#0x40
      0007C8 75 65 00         [24]  220 	mov	_eeprom_write_PARM_2,#0x00
      0007CB 75 66 3F         [24]  221 	mov	(_eeprom_write_PARM_2 + 1),#0x3f
      0007CE 75 67 04         [24]  222 	mov	_eeprom_write_PARM_3,#0x04
      0007D1 75 68 00         [24]  223 	mov	(_eeprom_write_PARM_3 + 1),#0x00
      0007D4 75 82 51         [24]  224 	mov	dpl, #0x51
      0007D7 C0 07            [24]  225 	push	ar7
      0007D9 C0 06            [24]  226 	push	ar6
      0007DB C0 05            [24]  227 	push	ar5
      0007DD 12 12 87         [24]  228 	lcall	_eeprom_write
      0007E0 D0 05            [24]  229 	pop	ar5
      0007E2 D0 06            [24]  230 	pop	ar6
      0007E4 D0 07            [24]  231 	pop	ar7
                                    232 ;	build/../eeprom_storage.c:28: buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
      0007E6 AB 28            [24]  233 	mov	r3,_eeprom_settings_save_PARM_2
      0007E8 AC 29            [24]  234 	mov	r4,(_eeprom_settings_save_PARM_2 + 1)
      0007EA EB               [12]  235 	mov	a,r3
      0007EB 2B               [12]  236 	add	a,r3
      0007EC F5 67            [12]  237 	mov	_eeprom_write_PARM_3,a
      0007EE EC               [12]  238 	mov	a,r4
      0007EF 33               [12]  239 	rlc	a
      0007F0 F5 68            [12]  240 	mov	(_eeprom_write_PARM_3 + 1),a
      0007F2 E5 67            [12]  241 	mov	a,_eeprom_write_PARM_3
      0007F4 25 67            [12]  242 	add	a,_eeprom_write_PARM_3
      0007F6 F5 67            [12]  243 	mov	_eeprom_write_PARM_3,a
      0007F8 E5 68            [12]  244 	mov	a,(_eeprom_write_PARM_3 + 1)
      0007FA 33               [12]  245 	rlc	a
      0007FB F5 68            [12]  246 	mov	(_eeprom_write_PARM_3 + 1),a
      0007FD 8D 69            [24]  247 	mov	_eeprom_write_PARM_4,r5
      0007FF 8E 6A            [24]  248 	mov	(_eeprom_write_PARM_4 + 1),r6
      000801 8F 6B            [24]  249 	mov	(_eeprom_write_PARM_4 + 2),r7
      000803 75 65 04         [24]  250 	mov	_eeprom_write_PARM_2,#0x04
      000806 75 66 3F         [24]  251 	mov	(_eeprom_write_PARM_2 + 1),#0x3f
      000809 75 82 51         [24]  252 	mov	dpl, #0x51
      00080C 12 12 87         [24]  253 	lcall	_eeprom_write
                                    254 ;	build/../eeprom_storage.c:30: return EEPROM_OK;
      00080F 75 82 00         [24]  255 	mov	dpl, #0x00
                                    256 ;	build/../eeprom_storage.c:31: }
      000812 22               [24]  257 	ret
                                    258 	.area CSEG    (CODE)
                                    259 	.area CONST   (CODE)
                                    260 	.area XINIT   (CODE)
                                    261 	.area CABS    (ABS,CODE)
