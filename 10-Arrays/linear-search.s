	.file	"linear-search.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter the num that you looking in the array: "
.LC1:
	.string	"%d"
	.align 8
.LC2:
	.string	"Found %d in array[%d] of array\n"
.LC3:
	.string	"Not found!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	$10, -64(%rbp)
	movl	$2, -60(%rbp)
	movl	$4, -56(%rbp)
	movl	$77, -52(%rbp)
	movl	$88, -48(%rbp)
	movl	$99, -44(%rbp)
	movl	$45, -40(%rbp)
	movl	$22, -36(%rbp)
	movl	$26, -32(%rbp)
	movl	$55, -28(%rbp)
	movl	$84, -24(%rbp)
	movl	$0, -68(%rbp)
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-68(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$11, -12(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-68(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L3
	movl	$1, -8(%rbp)
	jmp	.L4
.L3:
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jl	.L5
.L4:
	cmpl	$0, -8(%rbp)
	je	.L6
	movl	-68(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	jmp	.L7
.L6:
	movl	$.LC3, %edi
	call	puts
.L7:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.1 20250110 (Red Hat 14.2.1-7)"
	.section	.note.GNU-stack,"",@progbits
