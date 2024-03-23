	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	mov	w8, #2
	str	w8, [sp, #8]
	mov	x9, sp
	adrp	x8, _s@PAGE
	add	x8, x8, _s@PAGEOFF
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	adrp	x9, _c@PAGE
	ldr	w8, [x9, _c@PAGEOFF]
	add	w8, w8, #2
	str	w8, [x9, _c@PAGEOFF]
	ldr	w8, [sp, #8]
	add	w8, w8, #1
	str	w8, [sp, #8]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	mov	x9, sp
	adrp	x8, _d@GOTPAGE
	ldr	x8, [x8, _d@GOTPAGEOFF]
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_scanf
	str	wzr, [sp, #8]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #8]
	subs	w8, w8, #5
	cset	w8, ge
	tbnz	w8, #0, LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	bl	_f1
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #8]
	add	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB0_1
LBB0_4:
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_puts
	mov	w0, #0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__DATA,__data
	.globl	_s                              ; @s
_s:
	.asciz	"Hello\n"

	.globl	_c                              ; @c
	.p2align	2, 0x0
_c:
	.long	2                               ; 0x2

	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%s"

l_.str.1:                               ; @.str.1
	.asciz	"d = "

l_.str.2:                               ; @.str.2
	.asciz	"%d"

	.comm	_d,4,2                          ; @d
l_.str.3:                               ; @.str.3
	.space	1

.subsections_via_symbols
