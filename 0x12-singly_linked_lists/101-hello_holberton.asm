section .data
    hello_msg db 'Hello, Holberton', 10, 0   ; string to print with newline character

section .text
    global main
    extern printf

main:
    mov rdi, hello_msg   ; move the address of the string to the first argument
    xor eax, eax         ; clear eax register to indicate that there are no floating point arguments
    call printf          ; call the printf function

    xor eax, eax         ; return 0 to indicate success
    ret
