#include "mem/malloc.h"

#include <mem/mmap.h>
#include <stddef.h>

#define HEAP_PAGE_SIZE 4096

void *malloc(size_t len)
{
    void *heap;

    // Always allocate memory with size multiple of 4096
    len = sizeof(*heap) + len;
    len = (len + 4095UL) & -4096UL;

    heap = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
    if (heap == MAP_FAILED)
        return NULL; // out of memory

    return heap;
}
