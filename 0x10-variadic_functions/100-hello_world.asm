; hello_world.asm
;
; Author: Cristhian Apaza
; Date: 2021.11.04

global main

section .text:

main:
	mov eax, 0x4		; use the write syscall
	mov ebx, 1		; use stdout as the fd
	mov ecx, message	; use the message as the buffer
	mov edx, message_length	; and supply the length
	int 0x80		; invoke the syscall

	; now gracefully exit

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data:
	message db "Hello, World", 0xA	; use new line
	message_length equ $-message
