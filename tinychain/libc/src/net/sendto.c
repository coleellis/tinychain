#include "net/sendto.h"

#include <arch/syscall.h>

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr,
    socklen_t addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)buf, len, flags, (unsigned long)dest_addr,
        (unsigned long)addrlen };
    return syscall2(SYS_socketcall, SYS_SENDTO, (long)args);
#else
    return syscall6(SYS_sendto, (long)sockfd, (long)buf, (long)len, (long)flags, (long)dest_addr,
        (long)addrlen);
#endif
}
