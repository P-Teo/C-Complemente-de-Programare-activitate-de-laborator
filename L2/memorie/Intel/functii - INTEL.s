	.text
	.file	"functii.c"
	.globl	f1                              # -- Begin function f1
	.p2align	4, 0x90
	.type	f1,@function
f1:                                     # @f1
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	f1.i, %eax
	addl	$1, %eax
	movl	%eax, f1.i
	movl	f1.i, %esi
	movabsq	$.L.str, %rdi
	movb	$0, %al
	callq	printf
	movl	d, %esi
	movabsq	$.L.str.1, %rdi
	movb	$0, %al
	callq	printf
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	f1, .Lfunc_end0-f1
	.cfi_endproc
                                        # -- End function
	.type	f1.i,@object                    # @f1.i
	.data
	.p2align	2, 0x0
f1.i:
	.long	2                               # 0x2
	.size	f1.i, 4

	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%d \n"
	.size	.L.str, 5

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"S-a introdus num\304\203rul d = %d\n"
	.size	.L.str.1, 30

	.ident	"clang version 16.0.6 (Red Hat 16.0.6-1.el9)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf
	.addrsig_sym f1.i
	.addrsig_sym d
