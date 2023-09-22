section .data
	hello db "Hello, Holberton",0
	nl db 10,0

section .text
	global main

	extern printf
main:
	push rdi
	lea rdi, [rel hello]
	call printf

	lea rdi, [rel nl]
	call printf

	pop rdi


	ret
