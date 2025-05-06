#ifdef __x86_64__
#include "x86_64/syscall.h"
#elif defined(__i386__)
#include "i386/syscall.h"
#elif defined(__arm__)
#include "arm/syscall.h"
#elif defined(__aarch64__)
#include "aarch64/syscall.h"
#else
#include "Unsupported architecture!"
#endif
