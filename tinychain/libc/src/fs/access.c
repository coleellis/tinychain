#include "fs/access.h"

#include <arch/syscall.h>

int access(const char *pathname, int mode)
{
    return syscall2(SYS_access, (long)pathname, (long)mode);
}
