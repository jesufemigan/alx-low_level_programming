section .data
    hello_msg db 'Hello, Holberton', 10   ; Null-terminated string followed by newline

section .text
    global main

main:
    ; Write "Hello, World" to stdout (file descriptor 1)
    mov rax, 1                   ; System call number for sys_write (1)
    mov rdi, 1                   ; File descriptor 1 (stdout)
    mov rsi, hello_msg           ; Pointer to the message
    mov rdx, 17                  ; Length of the message including the newline
    syscall

    ; Exit the program
    mov rax, 60                  ; System call number for sys_exit (60)
    xor rdi, rdi                 ; Status code 0
    syscall

