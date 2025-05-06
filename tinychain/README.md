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
├── math
│   ├── ceil
│   └── floor
├── mem
│   ├── brk
│   ├── calloc
│   ├── free
│   ├── malloc
│   ├── mlock
│   ├── mmap
│   ├── mprotect
│   ├── mremap
│   ├── msync
│   ├── munlock
│   ├── munmap
│   └── realloc
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
│   ├── memset
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
    ├── ctype
    ├── itoa
    ├── strtol
    ├── strtoull
    ├── tolower
    └── toupper
```

### Next in Line

System Calls

- Credentials
  - [ ] `setreuid`, `setregid`
  - [ ] `setresuid`, `setresgid`, `getresuid`, `getresgid`
- Thread (`thread/`)
  - [ ] `execve`
  - [ ] `clone`
  - [ ] `gettid`, `tgkill`
- File system (`fs/`)
  - [ ] `getdents`, `getdents64` (`readdir`)
  - [ ] `chown`, `chmod`, `utimensat`, `faccessat`
- IO (`io/`)
  - [ ] `poll`, `select`, `epoll_create1`, `epoll_ctl`, `epoll_wait`
  - [ ] `readv`, `writev`
- IPC
  - [ ] `pipe`, `pipe2`, `shmget`, `shmctl`
  - [ ] `msgsnd`, `msgrcv`, `semget`, `semop`

Wrappers

- POSIX Functions
  - [ ] `system`, `popen`, `realpath`, `getenv`
- Errors
  - [ ] `errno`, `perror`
- Math
  - [x] `floor`, `ceil`
  - [ ] `pow`, `sqrt`, `log`
  - [ ] `abs`
- Stdio
  - [ ] `printf`, `sprintf`, `vsprintf`, `fprintf`
  - [ ] `fopen`, `fclose`, `fseek`
  - [ ] `scanf`, `sscanf`, `fscanf`
  - [ ] `getline`
- String
  - [ ] `strtok`, `strtok_r`
- Boolean
  - `true/false`, `bool`

Specialty (Custom) Functions

- Macros
  - [ ] `SIZE`, `MAX`, `MIN`
- String
  - [ ] `split`, `strip`, `readlines`
  - [ ] `indexOf`
  - [ ] `gcd`, `lcm`
- Array
  - [ ] `replace`, `rev`
  - [ ] `intify`, `longify`
  - [ ] `sprint`, `dprint`, `lprint`
  - [ ] `qsort`
