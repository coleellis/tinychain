cmake_minimum_required(VERSION 3.21)
project(tinychain C ASM)

# Compile options
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Static library for the runtime
add_subdirectory(arch/${ARCH}) # Cross-compilation support
add_subdirectory(libc) # Standard library

# Set linker options
target_link_options(tinylib PUBLIC
    -nostdlib
    -nodefaultlibs
    -nostartfiles
    -ffreestanding
)

# Export Targets
install(EXPORT tinychainTargets
    FILE TinychainTargets.cmake
    NAMESPACE Tinychain::
    DESTINATION lib/cmake/Tinychain
)
export(EXPORT tinychainTargets
    FILE "${CMAKE_CURRENT_BINARY_DIR}/TinychainTargets.cmake"
    NAMESPACE Tinychain::
)

# Configuration File
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/TinychainConfigVersion.cmake"
    VERSION 1.0.0
    COMPATIBILITY AnyNewerVersion
    ARCH_INDEPENDENT
)

# Generate TinychainConfig.cmake
configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/TinychainConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/TinychainConfig.cmake"
    INSTALL_DESTINATION lib/cmake/Tinychain
)
install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/TinychainConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/TinychainConfigVersion.cmake"
    DESTINATION lib/cmake/Tinychain
)
