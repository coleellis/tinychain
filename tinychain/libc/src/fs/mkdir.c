#include "fs/mkdir.h"

#include <arch/syscall.h>

int mkdir(const char *pathname, mode_t mode)
{
    return syscall2(SYS_mkdir, (long)pathname, (long)mode);
}
