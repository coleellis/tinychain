#include "net/connect.h"

#include <arch/syscall.h>

int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
/**
 * Socket calls are different between architectures.
 * - i386: One socketcall and a socketcall number.
 * - others: Unique syscalls per socket.
 */
#if defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)addr, addrlen };
    return syscall2(SYS_socketcall, SYS_CONNECT, (long)args);
#else
    return syscall3(SYS_connect, (long)sockfd, (long)addr, (long)addrlen);
#endif
}
