#ifndef UTIL_STRTOULL_H
#define UTIL_STRTOULL_H

/**
 * strtoull - convert a string to an unsigned long long
 * @cp: The start of the string
 * @endp: A pointer to the end of the parsed string will be placed here
 * @base: The number base to use
 */
unsigned long long strtoull(const char *cp, char **endp, unsigned int base);

#endif // UTIL_STRTOULL_H
