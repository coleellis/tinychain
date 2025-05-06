#include "mem/calloc.h"

#include <mem/malloc.h>
#include <stddef.h>
#include <string/memset.h>

void *calloc(size_t size, size_t nmemb)
{
    size_t x = size * nmemb;

    if (size && (x / size) != nmemb)
        return NULL;

    void *ptr = malloc(x);
    if (!ptr)
        return NULL;

    return memset(ptr, 0, x);
}
