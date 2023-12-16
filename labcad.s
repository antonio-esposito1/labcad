	.file	"labcad.c"
	.text
	.globl	myDevice
	.bss
	.align 32
	.type	myDevice, @object
	.size	myDevice, 40
myDevice:
	.zero	40
	.globl	devices
	.align 32
	.type	devices, @object
	.size	devices, 3200
devices:
	.zero	3200
	.globl	devicePtr
	.align 8
	.type	devicePtr, @object
	.size	devicePtr, 8
devicePtr:
	.zero	8
	.section	.rodata
.LC0:
	.string	"Hello Antonio"
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
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
