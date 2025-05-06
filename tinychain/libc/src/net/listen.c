#include "net/listen.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int listen(int sockfd, int backlog)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall2(SYS_listen, (long)sockfd, (long)backlog);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, backlog };
    return syscall2(SYS_socketcall, SYS_LISTEN, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
