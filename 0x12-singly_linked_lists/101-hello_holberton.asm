section .data
    hello_msg db "Hello, Holberton,", 0
    format db "%s", 10, 0

section .text
    global main

extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Set up the arguments for printf
    mov rdi, format ; Format string
    mov rsi, hello_msg ; Message to print

    ; Call printf function
    call printf

    ; Restore the stack frame and return
    pop rbp
    ret
