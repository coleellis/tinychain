#include "mem/munmap.h"

#include <arch/syscall.h>

int munmap(void *addr, size_t length)
{
    return syscall2(SYS_munmap, (long)addr, (long)length);
}
