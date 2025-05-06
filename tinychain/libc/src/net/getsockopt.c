#include "net/getsockopt.h"

#include <arch/syscall.h>

int getsockopt(int sockfd, int level, int optname, void *optval, socklen_t *optlen)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, level, optname, (unsigned long)optval, (unsigned long)optlen };
    return syscall2(SYS_socketcall, SYS_GETSOCKOPT, (long)args);
#else
    return syscall5(
        SYS_getsockopt, (long)sockfd, (long)level, (long)optname, (long)optval, (long)optlen);
#endif
}
