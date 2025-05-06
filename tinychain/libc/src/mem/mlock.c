#include "mem/mlock.h"

#include <arch/syscall.h>

int mlock(const void *addr, size_t len)
{
    return syscall2(SYS_mlock, (long)addr, (long)len);
}
