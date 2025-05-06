#include "fs/unlink.h"

#include <arch/syscall.h>

int unlink(const char *pathname)
{
#if defined(__aarch64__)
    return -1; // FIXME: error for now
#else
    return syscall1(SYS_unlink, (long)pathname);
#endif
}
