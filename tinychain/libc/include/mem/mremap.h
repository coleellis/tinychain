#ifndef MEM_MREMAP_H
#define MEM_MREMAP_H

#include <sys/types.h>

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, void *new_address);

#endif // MEM_MREMAP_H
