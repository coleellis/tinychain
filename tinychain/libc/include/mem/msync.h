#ifndef MEM_MSYNC_H
#define MEM_MSYNC_H

#include <sys/types.h>

int msync(void *addr, size_t length, int flags);

#endif // MEM_MSYNC_H
