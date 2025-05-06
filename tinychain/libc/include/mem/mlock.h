#ifndef MEM_MLOCK_H
#define MEM_MLOCK_H

#include <sys/types.h>

int mlock(const void *addr, size_t len);

#endif // MEM_MLOCK_H
