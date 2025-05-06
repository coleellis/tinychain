#include "fs/rename.h"

#include <arch/syscall.h>

int rename(const char *oldpath, const char *newpath)
{
#if defined(__aarch64__)
    // SYS_renameat
    return -1; // FIXME: error for now
#else
    return syscall2(SYS_rename, (long)oldpath, (long)newpath);
#endif
}
