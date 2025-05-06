#include "net/socket.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int socket(int domain, int type, int protocol)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall3(SYS_socket, (long)domain, (long)type, (long)protocol);
#elif defined(__i386__)
    unsigned long args[] = { domain, type, protocol };
    return syscall2(SYS_socketcall, SYS_SOCKET, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
