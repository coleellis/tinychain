#include "syscall.h"

long syscall0(long n)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n) : "memory", "cc");
    return ret;
}

long syscall1(long n, long arg1)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n), "D"(arg1) : "memory", "cc");
    return ret;
}

long syscall2(long n, long arg1, long arg2)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n), "D"(arg1), "S"(arg2) : "memory", "cc");
    return ret;
}

long syscall3(long n, long arg1, long arg2, long arg3)
{
    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3)
        : "memory", "cc");
    return ret;
}

long syscall4(long n, long arg1, long arg2, long arg3, long arg4)
{
    register long r10 __asm__("r10") = arg4;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10)
        : "rcx", "r11", "memory", "cc");
    return ret;
}

long syscall5(long n, long arg1, long arg2, long arg3, long arg4, long arg5)
{
    register long r10 __asm__("r10") = arg4;
    register long r8 __asm__("r8")   = arg5;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10), "r"(r8)
        : "rcx", "r11", "memory", "cc");
    return ret;
}

long syscall6(long n, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6)
{
    register long r10 __asm__("r10") = arg4;
    register long r8 __asm__("r8")   = arg5;
    register long r9 __asm__("r9")   = arg6;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10), "r"(r8), "r"(r9)
        : "rcx", "r11", "memory", "cc");
    return ret;
}
