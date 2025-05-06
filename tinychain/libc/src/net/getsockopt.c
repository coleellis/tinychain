#include "net/getsockopt.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int getsockopt(int sockfd, int level, int optname, void *optval, socklen_t *optlen)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall5(
        SYS_getsockopt, (long)sockfd, (long)level, (long)optname, (long)optval, (long)optlen);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, level, optname, (unsigned long)optval, (unsigned long)optlen };
    return syscall2(SYS_socketcall, SYS_GETSOCKOPT, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
