#ifndef STRING_MEMCMP_H
#define STRING_MEMCMP_H

#include <sys/types.h>

/**
 * memcmp - Compare two areas of memory
 * @cs: One area of memory
 * @ct: Another area of memory
 * @count: The size of the area.
 */
int memcmp(const void *cs, const void *ct, size_t count);

#endif // STRING_MEMCMP_H
