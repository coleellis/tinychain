#include "syscall.h"

long syscall0(long n)
{
    long ret;
    __asm__ volatile("int $0x80" : "=a"(ret) : "a"(n) : "memory", "cc");
    return ret;
}

long syscall1(long n, long arg1)
{
    long ret;
    __asm__ volatile("int $0x80" : "=a"(ret) : "a"(n), "b"(arg1) : "memory", "cc");
    return ret;
}

long syscall2(long n, long arg1, long arg2)
{
    long ret;
    __asm__ volatile("int $0x80" : "=a"(ret) : "a"(n), "b"(arg1), "c"(arg2) : "memory", "cc");
    return ret;
}

long syscall3(long n, long arg1, long arg2, long arg3)
{
    long ret;
    __asm__ volatile("int $0x80"
        : "=a"(ret)
        : "a"(n), "b"(arg1), "c"(arg2), "d"(arg3)
        : "memory", "cc");
    return ret;
}

long syscall4(long n, long arg1, long arg2, long arg3, long arg4)
{
    long ret;
    __asm__ volatile("int $0x80"
        : "=a"(ret)
        : "a"(n), "b"(arg1), "c"(arg2), "d"(arg3), "S"(arg4)
        : "memory", "cc");
    return ret;
}

long syscall5(long n, long arg1, long arg2, long arg3, long arg4, long arg5)
{
    long ret;
    __asm__ volatile("int $0x80"
        : "=a"(ret)
        : "a"(n), "b"(arg1), "c"(arg2), "d"(arg3), "S"(arg4), "D"(arg5)
        : "memory", "cc");
    return ret;
}

long syscall6(long n, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6)
{
    long ret;
    __asm__ volatile("push %%ebp\n"
                     "mov %[a6], %%ebp\n"
                     "int $0x80\n"
                     "pop %%ebp\n"
        : "=a"(ret)
        : "a"(n), "b"(arg1), "c"(arg2), "d"(arg3), "S"(arg4), "D"(arg5), [a6] "r"(arg6)
        : "memory", "cc");
    return ret;
}
