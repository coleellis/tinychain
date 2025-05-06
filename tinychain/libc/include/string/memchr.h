#ifndef STRING_MEMCHR_H
#define STRING_MEMCHR_H

#include <sys/types.h>

/**
 * memchr - Find a character in an area of memory.
 * @s: The memory area
 * @c: The byte to search for
 * @n: The size of the area.
 *
 * returns the address of the first occurrence of @c, or %NULL
 * if @c is not found
 */
void *memchr(const void *s, int c, size_t n);

#endif // STRING_MEMCHR_H
