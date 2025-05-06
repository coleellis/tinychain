# Glob all source files and include them
file(GLOB_RECURSE SRC_FILES "*.c")
add_library(tinylib STATIC ${SRC_FILES})

target_include_directories(tinylib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/libc/include>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

# Compile options
target_compile_options(tinylib PRIVATE
    -Wall
    -Wextra
    -pedantic
)

# Alias tinylib
add_library(Tinychain::tinylib ALIAS tinylib)

# Install library
install(TARGETS tinylib
    EXPORT tinychainTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    INCLUDES DESTINATION include
)
