#ifndef STRING_STRCSPN_H
#define STRING_STRCSPN_H

#include <sys/types.h>

/**
 * strcspn - Calculate the length of the initial substring of @s which does not contain letters in
 * @reject
 * @s: The string to be searched
 * @reject: The string to avoid
 */
size_t strcspn(const char *s, const char *reject);

#endif // STRING_STRCSPN_H
