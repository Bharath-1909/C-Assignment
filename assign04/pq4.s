	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 13, 1
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-8(%rbp), %rsi
	leaq	-12(%rbp), %rdx
	movb	$0, %al
	callq	_scanf
	movl	-8(%rbp), %edi
	movl	-12(%rbp), %esi
	leaq	-16(%rbp), %rdx
	callq	_cal
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %esi
	movl	-16(%rbp), %edx
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_cal                            ## -- Begin function cal
	.p2align	4, 0x90
_cal:                                   ## @cal
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movl	-4(%rbp), %eax
	addl	-8(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %ecx
	subl	-8(%rbp), %ecx
	movq	-16(%rbp), %rax
	movl	%ecx, (%rax)
	movl	-20(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"enter the num1 &num2 :"

L_.str.1:                               ## @.str.1
	.asciz	"%d%d"

L_.str.2:                               ## @.str.2
	.asciz	"the sum and diff: %d %d\n"

.subsections_via_symbols
