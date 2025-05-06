#include "fs/access.h"

#include <arch/syscall.h>

int access(const char *pathname, int mode)
{
#ifdef __aarch64__
    return -1; // FIXME: error for now
#else
    return syscall2(SYS_access, (long)pathname, (long)mode);
#endif
}
