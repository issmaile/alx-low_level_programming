global _main
extern printf

section .data
msg db "Hello, Holberton", 0Dh, 0Ah, 0

section .bss
section .text
_main:
	push ebp
	move ebp, esp

	push msg
	call printf
	add esp, 4

	move esp, ebp
	pop ebp
ret
