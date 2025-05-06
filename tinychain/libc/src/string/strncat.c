#include "string/strncat.h"

char *strncat(char *dst, const char *src, size_t size)
{
    char *orig = dst;

    while (*dst)
        dst++;

    while (size && (*dst = *src))
    {
        src++;
        dst++;
        size--;
    }

    *dst = 0;
    return orig;
}
