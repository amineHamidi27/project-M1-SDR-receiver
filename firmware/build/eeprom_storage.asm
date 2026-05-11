;--------------------------------------------------------
; File Created by SDCC : free open source ISO C Compiler
; Version 4.5.0 #15242 (Linux)
;--------------------------------------------------------
	.module eeprom_storage
	
	.optsdcc -mmcs51 --model-small
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _eeprom_write
	.globl _eeprom_read
	.globl _eeprom_settings_save_PARM_2
	.globl _eeprom_settings_load_PARM_2
	.globl _eeprom_settings_load
	.globl _eeprom_settings_save
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_eeprom_settings_load_PARM_2:
	.ds 2
_eeprom_settings_load_header_10000_8:
	.ds 4
_eeprom_settings_save_PARM_2:
	.ds 2
_eeprom_settings_save_header_10000_11:
	.ds 4
;--------------------------------------------------------
; overlayable items in internal ram
;--------------------------------------------------------
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; uninitialized external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; initialized external ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'eeprom_settings_load'
;------------------------------------------------------------
;buffer_size_words Allocated with name '_eeprom_settings_load_PARM_2'
;reg_buffer    Allocated to registers r5 r6 r7 
;header        Allocated with name '_eeprom_settings_load_header_10000_8'
;------------------------------------------------------------
;	build/../eeprom_storage.c:4: eeprom_err_t eeprom_settings_load(uint32_t* reg_buffer, uint16_t buffer_size_words) {
;	-----------------------------------------
;	 function eeprom_settings_load
;	-----------------------------------------
_eeprom_settings_load:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	r5, dpl
	mov	r6, dph
	mov	r7, b
;	build/../eeprom_storage.c:7: if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
	mov	a,r5
	orl	a,r6
	jnz	00102$
	mov	dpl, #0x01
	ret
00102$:
;	build/../eeprom_storage.c:9: eeprom_read(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
	mov	_eeprom_read_PARM_4,#_eeprom_settings_load_header_10000_8
	mov	(_eeprom_read_PARM_4 + 1),#0x00
	mov	(_eeprom_read_PARM_4 + 2),#0x40
	mov	_eeprom_read_PARM_2,#0x00
	mov	(_eeprom_read_PARM_2 + 1),#0x3f
	mov	_eeprom_read_PARM_3,#0x04
	mov	(_eeprom_read_PARM_3 + 1),#0x00
	mov	dpl, #0x51
	push	ar7
	push	ar6
	push	ar5
	lcall	_eeprom_read
	pop	ar5
	pop	ar6
	pop	ar7
;	build/../eeprom_storage.c:11: if (header != EEPROM_SETTINGS_HEADER) {
	mov	a,#0xba
	cjne	a,_eeprom_settings_load_header_10000_8,00120$
	mov	a,#0x0c
	cjne	a,(_eeprom_settings_load_header_10000_8 + 1),00120$
	mov	a,#0xc0
	cjne	a,(_eeprom_settings_load_header_10000_8 + 2),00120$
	mov	a,#0xab
	cjne	a,(_eeprom_settings_load_header_10000_8 + 3),00120$
	sjmp	00104$
00120$:
;	build/../eeprom_storage.c:12: return EEPROM_ERR_NO_VALID_DATA;
	mov	dpl, #0x01
	ret
00104$:
;	build/../eeprom_storage.c:16: buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
	mov	r3,_eeprom_settings_load_PARM_2
	mov	r4,(_eeprom_settings_load_PARM_2 + 1)
	mov	a,r3
	add	a,r3
	mov	_eeprom_read_PARM_3,a
	mov	a,r4
	rlc	a
	mov	(_eeprom_read_PARM_3 + 1),a
	mov	a,_eeprom_read_PARM_3
	add	a,_eeprom_read_PARM_3
	mov	_eeprom_read_PARM_3,a
	mov	a,(_eeprom_read_PARM_3 + 1)
	rlc	a
	mov	(_eeprom_read_PARM_3 + 1),a
	mov	_eeprom_read_PARM_4,r5
	mov	(_eeprom_read_PARM_4 + 1),r6
	mov	(_eeprom_read_PARM_4 + 2),r7
	mov	_eeprom_read_PARM_2,#0x04
	mov	(_eeprom_read_PARM_2 + 1),#0x3f
	mov	dpl, #0x51
	lcall	_eeprom_read
;	build/../eeprom_storage.c:18: return EEPROM_OK;
	mov	dpl, #0x00
;	build/../eeprom_storage.c:19: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'eeprom_settings_save'
;------------------------------------------------------------
;buffer_size_words Allocated with name '_eeprom_settings_save_PARM_2'
;reg_buffer    Allocated to registers r5 r6 r7 
;header        Allocated with name '_eeprom_settings_save_header_10000_11'
;------------------------------------------------------------
;	build/../eeprom_storage.c:21: eeprom_err_t eeprom_settings_save(const uint32_t* reg_buffer, uint16_t buffer_size_words) {
;	-----------------------------------------
;	 function eeprom_settings_save
;	-----------------------------------------
_eeprom_settings_save:
	mov	r5, dpl
	mov	r6, dph
	mov	r7, b
;	build/../eeprom_storage.c:22: uint32_t header = EEPROM_SETTINGS_HEADER;
	mov	_eeprom_settings_save_header_10000_11,#0xba
	mov	(_eeprom_settings_save_header_10000_11 + 1),#0x0c
	mov	(_eeprom_settings_save_header_10000_11 + 2),#0xc0
	mov	(_eeprom_settings_save_header_10000_11 + 3),#0xab
;	build/../eeprom_storage.c:24: if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
	mov	a,r5
	orl	a,r6
	jnz	00102$
	mov	dpl, #0x01
	ret
00102$:
;	build/../eeprom_storage.c:26: eeprom_write(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
	mov	_eeprom_write_PARM_4,#_eeprom_settings_save_header_10000_11
	mov	(_eeprom_write_PARM_4 + 1),#0x00
	mov	(_eeprom_write_PARM_4 + 2),#0x40
	mov	_eeprom_write_PARM_2,#0x00
	mov	(_eeprom_write_PARM_2 + 1),#0x3f
	mov	_eeprom_write_PARM_3,#0x04
	mov	(_eeprom_write_PARM_3 + 1),#0x00
	mov	dpl, #0x51
	push	ar7
	push	ar6
	push	ar5
	lcall	_eeprom_write
	pop	ar5
	pop	ar6
	pop	ar7
;	build/../eeprom_storage.c:28: buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
	mov	r3,_eeprom_settings_save_PARM_2
	mov	r4,(_eeprom_settings_save_PARM_2 + 1)
	mov	a,r3
	add	a,r3
	mov	_eeprom_write_PARM_3,a
	mov	a,r4
	rlc	a
	mov	(_eeprom_write_PARM_3 + 1),a
	mov	a,_eeprom_write_PARM_3
	add	a,_eeprom_write_PARM_3
	mov	_eeprom_write_PARM_3,a
	mov	a,(_eeprom_write_PARM_3 + 1)
	rlc	a
	mov	(_eeprom_write_PARM_3 + 1),a
	mov	_eeprom_write_PARM_4,r5
	mov	(_eeprom_write_PARM_4 + 1),r6
	mov	(_eeprom_write_PARM_4 + 2),r7
	mov	_eeprom_write_PARM_2,#0x04
	mov	(_eeprom_write_PARM_2 + 1),#0x3f
	mov	dpl, #0x51
	lcall	_eeprom_write
;	build/../eeprom_storage.c:30: return EEPROM_OK;
	mov	dpl, #0x00
;	build/../eeprom_storage.c:31: }
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
