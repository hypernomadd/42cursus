section.text:
	global _ft_read

_ft_read:
	mov rax, 0x2000003 ; 0x2000000 (MacOS)+ 0x4 (write syscall)
	syscall ; 64 bits version of int 0x80
	ret
