.global _start
.section .text

_start:
    # Call main
    mov $1, %ebx
    call main

    # Exit with main's exit code
    mov %eax, %ebx
    mov $1, %eax
    syscall

.section .note.GNU-stack,"",@progbits
