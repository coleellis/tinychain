#ifndef STRING_MEMCPY_H
#define STRING_MEMCPY_H

#include <sys/types.h>

/**
 * memcpy - Copy one area of memory to another
 * @dest: Where to copy to
 * @src: Where to copy from
 * @count: The size of the area.
 */
void *memcpy(void *dest, const void *src, size_t count);

#endif // STRING_MEMCPY_H
