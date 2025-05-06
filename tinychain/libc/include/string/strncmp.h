#ifndef STRING_STRNCMP_H
#define STRING_STRNCMP_H

#include <sys/types.h>

/**
 * strncmp - Compare two length-limited strings
 * @cs: One string
 * @ct: Another string
 * @count: The maximum number of bytes to compare
 */
int strncmp(const char *cs, const char *ct, size_t count);

#endif // STRING_STRNCMP_H
