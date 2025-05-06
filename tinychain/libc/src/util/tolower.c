#include "util/tolower.h"

#include <util/ctype.h>

unsigned char tolower(unsigned char c)
{
    if (isupper(c))
        return c -= 'A' - 'a';
    return c;
}
