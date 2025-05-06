#ifndef MEM_MUNLOCK_H
#define MEM_MUNLOCK_H

#include <sys/types.h>

int munlock(const void *addr, size_t len);

#endif // MEM_MUNLOCK_H
