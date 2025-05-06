#include "mem/realloc.h"

#include <bits/heap.h>
#include <mem/malloc.h>
#include <mem/munmap.h>
#include <stddef.h>
#include <string/memcpy.h>

#define container_of(ptr, type, member) ((type *)((char *)(ptr) - offsetof(type, member)))

void *realloc(void *old_ptr, size_t new_size)
{
    struct nolibc_heap *heap;
    size_t              user_p_len;
    void               *ret;

    if (!old_ptr)
        return malloc(new_size);

    heap       = container_of(old_ptr, struct nolibc_heap, user_p);
    user_p_len = heap->len - sizeof(*heap);
    /*
     * Don't realloc() if @user_p_len >= @new_size, this block of
     * memory is still enough to handle the @new_size. Just return
     * the same pointer.
     */
    if (user_p_len >= new_size)
        return old_ptr;

    ret = malloc(new_size);
    if (!ret)
        return NULL;

    memcpy(ret, heap->user_p, user_p_len);
    munmap(heap, heap->len);
    return ret;
}
