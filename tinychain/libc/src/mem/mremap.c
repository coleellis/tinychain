#include "mem/mremap.h"

#include <arch/syscall.h>

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, void *new_address)
{
    return (void *)syscall5(SYS_mremap, (long)old_address, (long)old_size, (long)new_size,
        (long)flags, (long)new_address);
}
