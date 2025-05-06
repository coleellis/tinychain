#include "fs/rmdir.h"

#include <arch/syscall.h>

int rmdir(const char *pathname)
{
#if defined(__aarch64__)
    return -1; // FIXME: error for now
#else
    return syscall1(SYS_rmdir, (long)pathname);
#endif
}
