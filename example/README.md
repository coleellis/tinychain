# Tinychain Example Project

This project shows off the capabilities of Tinychain.

## Building with Tinychain

The [CMakeLists.txt](./CMakeLists.txt) file tells CMake to build this project using Tinychain rather than glibc. This is done via two major lines:

```cmake
find_package(Tinychain 1.0.0 REQUIRED CONFIG)
```

> _Finds an installed package called `Tinychain`._

```cmake
target_link_libraries(main PRIVATE Tinychain::tinylib Tinychain::tinycrt_x86_64)
```

> _Links `tinylib` and `tinycrt` into this project to get its functionality._

Doing this allows us to only get the functions that we use from the library.

What is the difference between `tinylib` and `tinycrt`?

1. `tinycrt` -- Architecture-specific functions. These include syscall wrappers, the syscall table, etc.
2. `tinylib` -- Architecture-independent functions. Many of these call `syscall` via `arch/syscall.h`, which is properly gathered via `tinycrt`.

## The Example Binary

The example binary is my exact solution for the 2023 Day 3 Advent of Code challenge. The only changes made for compatibility:

1. Change the `#include` statements to properly point to the right functions.
2. Change use `fopen` and `fgets` to use `open` and `read`.
3. Change using `printf` to `itoa` and `puts`.

This change took under 5 minutes and worked first time :)
