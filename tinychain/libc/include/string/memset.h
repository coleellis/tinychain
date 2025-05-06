#ifndef STRING_MEMSET_H
#define STRING_MEMSET_H

#include <sys/types.h>

/**
 * memset - Fill a region of memory with the given value
 * @s: Pointer to the start of the area.
 * @c: The byte to fill the area with
 * @count: The size of the area.
 */
void *memset(void *s, int c, size_t count);

#endif // STRING_MEMSET_H
