#include "util/toupper.h"

#include <util/ctype.h>

unsigned char toupper(unsigned char c)
{
    if (islower(c))
        return c -= 'a' - 'A';
    return c;
}
