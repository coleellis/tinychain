#ifndef MEM_MMAP_H
#define MEM_MMAP_H

#include <sys/types.h>

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);

#endif // MEM_MMAP_H
