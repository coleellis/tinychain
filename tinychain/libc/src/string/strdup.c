#include "string/strdup.h"

#include <mem/malloc.h>
#include <stddef.h>
#include <string/memcpy.h>
#include <string/strlen.h>

char *strdup(const char *str)
{
    size_t len;
    char  *ret;

    len = strlen(str);
    ret = malloc(len + 1);
    if (ret != NULL)
        memcpy(ret, str, len + 1);

    return ret;
}
