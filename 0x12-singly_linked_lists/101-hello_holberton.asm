section .data
    hello db "Hello, Holberton",0

section .text
    global _start

_start:
    ; Call printf with the format string
    mov rdi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status: 0
    syscall

section .bss
    resb 8              ; Reserve space for the return value from printf

