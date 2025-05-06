#include "string/strlen.h"

size_t strlen(const char *msg)
{
    size_t i;
    for (i = 0; msg[i]; ++i)
        /* nothing */;
    return i;
}
