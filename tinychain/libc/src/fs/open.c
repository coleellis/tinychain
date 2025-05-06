#include "fs/open.h"

#include <arch/syscall.h>

int open(const char *pathname, int flags, unsigned int mode)
{
    long ret = syscall3(SYS_open, (long)pathname, (long)flags, (long)mode);
    return (int)ret;
}
