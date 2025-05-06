#include "mem/munlock.h"

#include <arch/syscall.h>

int munlock(const void *addr, size_t len)
{
    return syscall2(SYS_munlock, (long)addr, (long)len);
}
