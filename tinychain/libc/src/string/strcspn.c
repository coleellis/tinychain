#include "string/strcspn.h"

#include <string/strchr.h>

size_t strcspn(const char *s, const char *reject)
{
    const char *p;

    for (p = s; *p != '\0'; ++p)
    {
        if (strchr(reject, *p))
            break;
    }
    return p - s;
}
