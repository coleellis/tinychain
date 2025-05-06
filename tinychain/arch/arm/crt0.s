.global _start
.section .text

_start:
    # Call main
    bl main

    # Exit with main's exit code
    mov r7, #1
    mov r0, r0
    svc #0

.section .note.GNU-stack,"" @progbits
