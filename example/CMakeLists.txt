cmake_minimum_required(VERSION 3.21)
project(Example C)

# Required includes
include(CMakeParseArguments)

if(NOT ARCH)
    message(FATAL_ERROR "ARCH not defined! Must be: x86_64, i386, arm, aarch64")
endif()

# Compiler options
set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Get tinychain
find_package(Tinychain 1.0.0 REQUIRED CONFIG)

# Main executable
add_executable(main main.c)

# Get tinylib and proper runtime
set(TINYCHAIN_CRT_TARGET "Tinychain::tinycrt_${ARCH}")
if(TARGET ${TINYCHAIN_CRT_TARGET})
    target_link_libraries(main PRIVATE Tinychain::tinylib ${TINYCHAIN_CRT_TARGET})
else()
    message(FATAL_ERROR "No tinycrt target found for ARCH=${ARCH}")
endif()

# Minification
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(main PRIVATE -g -ffunction-sections -fdata-sections)
    target_link_options(main PRIVATE -nostdlib -static -Wl,--gc-sections)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_options(main PRIVATE -ffunction-sections -fdata-sections)
    target_link_options(main PRIVATE -nostdlib -static -Wl,--gc-sections -Wl,-s)
else()
    message(WARNING "Unknown CMAKE_BUILD_TYPE='${CMAKE_BUILD_TYPE}', using 'Debug'")
    target_compile_options(main PRIVATE -ffunction-sections -fdata-sections)
    target_link_options(main PRIVATE -nostdlib -static -Wl,--gc-sections -Wl,-s)
endif()
