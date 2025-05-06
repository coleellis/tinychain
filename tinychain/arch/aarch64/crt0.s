.global _start
.section .text

_start:
    # Call main
    bl main

    # Exit with main's exit code
    mov x8, #93
    mov x0, x0
    svc #0

.section .note.GNU-stack,"",@progbits
