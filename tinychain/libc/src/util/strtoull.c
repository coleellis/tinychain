#include "util/strtoull.h"

#include <util/ctype.h>

#define TOLOWER(x) ((x) | 0x20)

unsigned int guess_base(const char *cp)
{
    if (cp[0] == '0')
    {
        if (TOLOWER(cp[1]) == 'x' && isxdigit(cp[2]))
            return 16;
        else
            return 8;
    }
    else
    {
        return 10;
    }
}

unsigned long long strtoull(const char *cp, char **endp, unsigned int base)
{
    unsigned long long result = 0;

    if (!base)
        base = guess_base(cp);

    if (base == 16 && cp[0] == '0' && TOLOWER(cp[1]) == 'x')
        cp += 2;

    while (isxdigit(*cp))
    {
        unsigned int value;

        value = isdigit(*cp) ? *cp - '0' : TOLOWER(*cp) - 'a' + 10;
        if (value >= base)
            break;
        result = result * base + value;
        cp++;
    }
    if (endp)
        *endp = (char *)cp;

    return result;
}
