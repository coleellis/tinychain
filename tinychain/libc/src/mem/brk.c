#include "mem/brk.h"

#include <arch/syscall.h>

void *brk(void *addr)
{
    return (void *)syscall1(SYS_brk, (long)addr);
}
