#include "mem/free.h"

#include <bits/heap.h>
#include <mem/munmap.h>
#include <stddef.h>

void free(void *ptr)
{
    if (!ptr)
        return;

    struct nolibc_heap *heap = (void *)((char *)ptr - offsetof(struct nolibc_heap, user_p));
    munmap(heap, heap->len);
}
