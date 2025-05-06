#include "mem/msync.h"

#include <arch/syscall.h>

int msync(void *addr, size_t length, int flags)
{
    return syscall3(SYS_msync, (long)addr, (long)length, (long)flags);
}
