	.section	__TEXT,__text,regular,pure_instructions
	.globl	_gets
	.align	4, 0x90
_gets:                                  ## @gets
## BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	$0, -20(%ebp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	calll	_getchar
	movb	$0, %cl
	movl	%eax, -12(%ebp)
	cmpl	$10, %eax
	movb	%cl, -21(%ebp)          ## 1-byte Spill
	je	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$-1, -12(%ebp)
	setne	%al
	movb	%al, -21(%ebp)          ## 1-byte Spill
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	-21(%ebp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_4
	jmp	LBB0_5
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-12(%ebp), %eax
	movb	%al, %cl
	movl	-16(%ebp), %eax
	movl	%eax, %edx
	addl	$1, %edx
	movl	%edx, -16(%ebp)
	movb	%cl, (%eax)
	movl	$1, -20(%ebp)
	jmp	LBB0_1
LBB0_5:
	movl	-16(%ebp), %eax
	movl	%eax, %ecx
	addl	$1, %ecx
	movl	%ecx, -16(%ebp)
	movb	$0, (%eax)
	cmpl	$-1, -12(%ebp)
	jne	LBB0_8
## BB#6:
	cmpl	$0, -20(%ebp)
	jne	LBB0_8
## BB#7:
	movl	$0, -4(%ebp)
	jmp	LBB0_9
LBB0_8:
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
LBB0_9:
	movl	-4(%ebp), %eax
	addl	$24, %esp
	popl	%ebp
	retl

	.globl	_echo
	.align	4, 0x90
_echo:                                  ## @echo
## BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	calll	L1$pb
L1$pb:
	popl	%eax
	leal	-12(%ebp), %ecx
	movl	L___stack_chk_guard$non_lazy_ptr-L1$pb(%eax), %edx
	movl	(%edx), %edx
	movl	%edx, -4(%ebp)
	movl	%ecx, (%esp)
	movl	%eax, -16(%ebp)         ## 4-byte Spill
	calll	_gets
	leal	-12(%ebp), %ecx
	movl	%ecx, (%esp)
	movl	%eax, -20(%ebp)         ## 4-byte Spill
	calll	_puts
	movl	-16(%ebp), %ecx         ## 4-byte Reload
	movl	L___stack_chk_guard$non_lazy_ptr-L1$pb(%ecx), %edx
	movl	(%edx), %edx
	cmpl	-4(%ebp), %edx
	movl	%eax, -24(%ebp)         ## 4-byte Spill
	jne	LBB1_2
## BB#1:                                ## %SP_return
	addl	$40, %esp
	popl	%ebp
	retl
LBB1_2:                                 ## %CallStackCheckFailBlk
	calll	___stack_chk_fail


	.section	__IMPORT,__pointers,non_lazy_symbol_pointers
L___stack_chk_guard$non_lazy_ptr:
	.indirect_symbol	___stack_chk_guard
	.long	0

.subsections_via_symbols
