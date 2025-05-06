#ifndef MEM_MPROTECT_H
#define MEM_MPROTECT_H

#include <sys/types.h>

int mprotect(void *addr, size_t len, int prot);

#endif // MEM_MPROTECT_H
