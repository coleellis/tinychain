#include "net/shutdown.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int shutdown(int sockfd, int how)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall2(SYS_shutdown, (long)sockfd, (long)how);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, how };
    return syscall2(SYS_socketcall, SYS_SHUTDOWN, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
