#include "string/strrchr.h"

#include <stddef.h>

char *strrchr(const char *s, int c)
{
    const char *ret = NULL;

    while (*s)
    {
        if (*s == (char)c)
            ret = s;
        s++;
    }
    return (char *)ret;
}
