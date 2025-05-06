#include "net/listen.h"

#include <arch/syscall.h>

int listen(int sockfd, int backlog)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, backlog };
    return syscall2(SYS_socketcall, SYS_LISTEN, (long)args);
#else
    return syscall2(SYS_listen, (long)sockfd, (long)backlog);
#endif
}
