#include "string/strspn.h"

#include <string/strchr.h>

size_t strspn(const char *s, const char *accept)
{
    const char *p;

    for (p = s; *p != '\0'; ++p)
    {
        if (!strchr(accept, *p))
            break;
    }
    return p - s;
}
