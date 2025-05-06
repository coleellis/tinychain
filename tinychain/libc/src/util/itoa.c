#include "util/itoa.h"

/* Buffer used to store int-to-ASCII conversions. Will only be implemented if
 * any of the related functions is implemented. The area is large enough to
 * store "18446744073709551615" or "-9223372036854775808" and the final zero.
 */
char itoa_buffer[21];

int utoa_r(unsigned long in, char *buffer)
{
    unsigned long lim;
    int           digits = 0;
    int           pos    = (~0UL > 0xfffffffful) ? 19 : 9;
    int           dig;

    do
    {
        for (dig = 0, lim = 1; dig < pos; dig++)
            lim *= 10;

        if (digits || in >= lim || !pos)
        {
            for (dig = 0; in >= lim; dig++)
                in -= lim;
            buffer[digits++] = '0' + dig;
        }
    } while (pos--);

    buffer[digits] = 0;
    return digits;
}

int itoa_r(long in, char *buffer)
{
    char *ptr = buffer;
    int   len = 0;

    if (in < 0)
    {
        in       = -in;
        *(ptr++) = '-';
        ++len;
    }
    len += utoa_r(in, ptr);
    return len;
}

char *itoa(long in)
{
    itoa_r(in, itoa_buffer);
    return itoa_buffer;
}
