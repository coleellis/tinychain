#pragma once

#define PTRACE_TRACEME    0
#define PTRACE_PEEKTEXT   1
#define PTRACE_PEEKDATA   2
#define PTRACE_PEEKUSR    3
#define PTRACE_POKETEXT   4
#define PTRACE_POKEDATA   5
#define PTRACE_POKEUSR    6
#define PTRACE_CONT       7
#define PTRACE_KILL       8
#define PTRACE_SINGLESTEP 9

#define PTRACE_ATTACH 16
#define PTRACE_DETACH 17

#define PTRACE_SYSCALL 24
