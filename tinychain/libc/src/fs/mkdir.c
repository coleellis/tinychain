#include "fs/mkdir.h"

#include <arch/syscall.h>

int mkdir(const char *pathname, mode_t mode)
{
#if defined(__aarch64__)
    // SYS_mkdir
    return -1; // FIXME: error for now
#else
    return syscall2(SYS_mkdir, (long)pathname, (long)mode);
#endif
}
