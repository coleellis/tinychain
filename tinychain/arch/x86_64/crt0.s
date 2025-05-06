.global _start
.section .text

_start:
    # Call main
    mov $1, %rdi
    call main

    # Exit with main's exit code
    mov %rax, %rdi
    mov $60, %rax
    syscall

.section .note.GNU-stack,"",@progbits
