#include "fs/open.h"

#include <arch/syscall.h>

int open(const char *pathname, int flags, unsigned int mode)
{
#if defined(__aarch64__)
    // SYS_openat
    return -1; // FIXME: error for now
#else
    return syscall3(SYS_open, (long)pathname, flags, mode);
#endif
}
