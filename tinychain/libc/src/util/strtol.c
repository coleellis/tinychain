#include "util/strtol.h"

#include <util/strtoull.h>

long strtol(const char *cp, char **endp, unsigned int base)
{
    if (*cp == '-')
        return -strtoull(cp + 1, endp, base);

    return strtoull(cp, endp, base);
}
