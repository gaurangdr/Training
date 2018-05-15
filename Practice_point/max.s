	.file	"max.c"
	.section	.rodata
.LC0:
	.string	"MAX: %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$100, -32(%rbp)
	movl	$200, -28(%rbp)
	movl	$300, -24(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle	.L2
	movl	-32(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	cmovge	-24(%rbp), %eax
	jmp	.L3
.L2:
	movl	-28(%rbp), %eax
	cmpl	%eax, -24(%rbp)
	cmovge	-24(%rbp), %eax
.L3:
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$1000, -20(%rbp)
	movl	$200, -16(%rbp)
	movl	$30, -12(%rbp)
	movl	$4, -8(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L4
	movl	-20(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L4
	movl	-20(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L5
.L4:
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L6
	movl	-16(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L7
.L6:
	movl	-12(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	cmovge	-8(%rbp), %eax
	jmp	.L9
.L7:
	movl	-16(%rbp), %eax
	jmp	.L9
.L5:
	movl	-20(%rbp), %eax
.L9:
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
