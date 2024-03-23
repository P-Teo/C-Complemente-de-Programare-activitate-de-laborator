	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.globl	_f1                             ; -- Begin function f1
	.p2align	2
_f1:                                    ; @f1
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, _f1.i@PAGE
	ldr	w9, [x8, _f1.i@PAGEOFF]
	add	w9, w9, #1
	str	w9, [x8, _f1.i@PAGEOFF]
	ldr	w9, [x8, _f1.i@PAGEOFF]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	adrp	x8, _d@GOTPAGE
	ldr	x8, [x8, _d@GOTPAGEOFF]
	ldr	w9, [x8]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__DATA,__data
	.p2align	2, 0x0                          ; @f1.i
_f1.i:
	.long	2                               ; 0x2

	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d \n"

l_.str.1:                               ; @.str.1
	.asciz	"S-a introdus num\304\203rul d = %d\n"

.subsections_via_symbols
