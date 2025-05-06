#ifndef STRING_STRSPN_H
#define STRING_STRSPN_H

#include <sys/types.h>

/**
 * strspn - Calculate the length of the initial substring of @s which only contain letters in
 * @accept
 * @s: The string to be searched
 * @accept: The string to search for
 */
size_t strspn(const char *s, const char *accept);

#endif // STRING_STRSPN_H
