#include "mem/mprotect.h"

#include <arch/syscall.h>

int mprotect(void *addr, size_t len, int prot)
{
    return syscall3(SYS_mprotect, (long)addr, (long)len, (long)prot);
}
