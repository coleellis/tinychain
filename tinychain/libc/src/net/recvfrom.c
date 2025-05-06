#include "net/recvfrom.h"

#include <arch/syscall.h>

ssize_t recvfrom(
    int sockfd, void *buf, size_t len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)buf, len, flags, (unsigned long)src_addr,
        (unsigned long)addrlen };
    return syscall2(SYS_socketcall, SYS_RECVFROM, (long)args);
#else
    return syscall6(SYS_recvfrom, (long)sockfd, (long)buf, (long)len, (long)flags, (long)src_addr,
        (long)addrlen);
#endif
}
