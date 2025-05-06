#include "fs/rename.h"

#include <arch/syscall.h>

int rename(const char *oldpath, const char *newpath)
{
    return syscall2(SYS_rename, (long)oldpath, (long)newpath);
}
