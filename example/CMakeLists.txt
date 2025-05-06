cmake_minimum_required(VERSION 3.21)
project(Example C)

# Compiler options
set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Get tinychain
find_package(Tinychain 1.0.0 REQUIRED CONFIG)

# Main executable
add_executable(main main.c)

# Get tinylib and proper runtime
# target_link_libraries(main PRIVATE Tinychain::tinylib Tinychain::tinycrt_x86_64)
target_link_libraries(main PRIVATE Tinychain::tinylib Tinychain::tinycrt_i386)

# Minification
target_compile_options(main PRIVATE -g)
# target_compile_options(main PRIVATE -ffunction-sections -fdata-sections)
# target_link_options(main PRIVATE -nostdlib -static -Wl,--gc-sections -Wl,-s)
