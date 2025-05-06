#include "mem/mmap.h"

#include <arch/syscall.h>

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset)
{
    long syscall_num;

    /*
     * arm only supports mmap2() instead of mmap. We can wrap using this same function.
     */
#ifdef __arm__
    syscall_num = SYS_mmap2;
#else
    syscall_num = SYS_mmap;
#endif

    return (void *)syscall6(
        syscall_num, (long)addr, (long)length, (long)prot, (long)flags, (long)fd, (long)offset);
}
