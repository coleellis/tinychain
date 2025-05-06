#include "io/puts.h"

#include <bits/unistd.h>
#include <io/write.h>
#include <string/strlen.h>

void puts(const char *s)
{
    // Write the string
    write(STDOUT_FILENO, s, strlen(s));

    // Force a newline
    const char newline = '\n';
    write(STDOUT_FILENO, &newline, 1);
}
