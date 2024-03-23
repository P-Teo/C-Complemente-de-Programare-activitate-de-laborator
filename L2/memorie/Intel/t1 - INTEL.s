	.text
	.file	"t1.c"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$2, -8(%rbp)
	movabsq	$.L.str, %rdi
	movabsq	$s, %rsi
	movb	$0, %al
	callq	printf
	movl	c, %eax
	addl	$2, %eax
	movl	%eax, c
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	movabsq	$.L.str.1, %rdi
	movb	$0, %al
	callq	printf
	movabsq	$.L.str.2, %rdi
	movabsq	$d, %rsi
	movb	$0, %al
	callq	__isoc99_scanf
	movl	$0, -8(%rbp)
.LBB0_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$5, -8(%rbp)
	jge	.LBB0_4
# %bb.2:                                #   in Loop: Header=BB0_1 Depth=1
	callq	f1
# %bb.3:                                #   in Loop: Header=BB0_1 Depth=1
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.LBB0_1
.LBB0_4:
	movabsq	$.L.str.3, %rdi
	callq	puts
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	s,@object                       # @s
	.data
	.globl	s
s:
	.asciz	"Hello\n"
	.size	s, 7

	.type	c,@object                       # @c
	.globl	c
	.p2align	2, 0x0
c:
	.long	2                               # 0x2
	.size	c, 4

	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%s"
	.size	.L.str, 3

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"d = "
	.size	.L.str.1, 5

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"%d"
	.size	.L.str.2, 3

	.type	d,@object                       # @d
	.bss
	.globl	d
	.p2align	2, 0x0
d:
	.long	0                               # 0x0
	.size	d, 4

	.type	.L.str.3,@object                # @.str.3
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str.3:
	.zero	1
	.size	.L.str.3, 1

	.ident	"clang version 16.0.6 (Red Hat 16.0.6-1.el9)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf
	.addrsig_sym __isoc99_scanf
	.addrsig_sym f1
	.addrsig_sym puts
	.addrsig_sym s
	.addrsig_sym c
	.addrsig_sym d
