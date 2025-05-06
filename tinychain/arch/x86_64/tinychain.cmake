# Set compiler options
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR x86_64)
set(CMAKE_C_COMPILER gcc)

# Compiler flags
set(CMAKE_C_FLAGS "-nostdlib -ffreestanding -fno-pie -fno-stack-protector -Os")
set(CMAKE_EXE_LINKER_FLAGS "-nostdlib -static -Wl,--nmagic")

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/x86_64)

# Prevent standard libraries
set(CMAKE_C_STANDARD_LIBRARIES "")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
