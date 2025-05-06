#include "net/getsockname.h"

#include <arch/syscall.h>

int getsockname(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)addr, (unsigned long)addrlen };
    return syscall2(SYS_socketcall, SYS_GETSOCKNAME, (long)args);
#else
    return syscall3(SYS_getsockname, (long)sockfd, (long)addr, (long)addrlen);
#endif
}
