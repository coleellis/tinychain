#pragma once

#include <sys/types.h>

struct nolibc_heap
{
    size_t len;
    char   user_p[] __attribute__((__aligned__));
};
