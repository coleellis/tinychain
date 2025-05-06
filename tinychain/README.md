# Tinychain

Tinychain is a minimized standard library used to generate small, statically-linked, architecture-independent binaries.

### Tinychain API

By running `source tinychain.env`, you install the `tinychain` command to build and configure your Tinychain projects.

```text
Usage: tinychain <command> [options]
Commands:
  install          - Builds and installs Tinychain
  build <arch>     - Builds a project for the specified architecture
  help             - Shows this help message
```

### Implemented Functions

```text
.
├── fs
│   ├── access
│   ├── chdir
│   ├── close
│   ├── fchdir
│   ├── fstat
│   ├── ftruncate
│   ├── getcwd
│   ├── lseek
│   ├── lstat
│   ├── mkdir
│   ├── open
│   ├── rename
│   ├── rmdir
│   ├── stat
│   ├── truncate
│   └── unlink
├── io
│   ├── dup2
│   ├── dup3
│   ├── dup
│   ├── puts
│   ├── read
│   ├── splice
│   ├── tee
│   └── write
├── mem
│   ├── brk
│   ├── malloc
│   ├── mlock
│   ├── mmap
│   ├── mprotect
│   ├── mremap
│   ├── msync
│   ├── munlock
│   └── munmap
├── net
│   ├── accept
│   ├── bind
│   ├── connect
│   ├── getpeername
│   ├── getsockname
│   ├── getsockopt
│   ├── listen
│   ├── recvfrom
│   ├── sendto
│   ├── setsockopt
│   ├── shutdown
│   └── socket
├── pr
│   ├── getegid
│   ├── geteuid
│   ├── getgid
│   ├── getpid
│   ├── getppid
│   ├── getuid
│   ├── setgid
│   └── setuid
├── string
│   ├── memchr
│   ├── memcmp
│   ├── memcpy
│   ├── strcat
│   ├── strchr
│   ├── strcmp
│   ├── strcpy
│   ├── strcspn
│   ├── strdup
│   ├── strlen
│   ├── strncat
│   ├── strncmp
│   ├── strrchr
│   ├── strspn
│   └── strstr
├── sys
│   ├── getrlimit
│   ├── getrusage
│   ├── kill
│   ├── ptrace
│   ├── setrlimit
│   ├── sigaction
│   ├── sigprocmask
│   ├── sysinfo
│   └── uname
├── thread
│   ├── exit
│   ├── fork
│   ├── wait4
│   ├── wait
│   └── waitpid
├── time
│   ├── clock_gettime
│   ├── gettimeofday
│   ├── nanosleep
│   └── time
└── util
    ├── atoi
    ├── atol
    ├── strtol
    ├── strtoull
    ├── tolower
    └── toupper
```
