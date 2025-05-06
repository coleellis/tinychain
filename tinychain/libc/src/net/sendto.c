#include "net/sendto.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr,
    socklen_t addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall6(SYS_sendto, (long)sockfd, (long)buf, (long)len, (long)flags, (long)dest_addr,
        (long)addrlen);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)buf, len, flags, (unsigned long)dest_addr,
        (unsigned long)addrlen };
    return syscall2(SYS_socketcall, SYS_SENDTO, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
