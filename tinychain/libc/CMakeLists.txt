# Add source files
add_subdirectory(src)

# Install headers
install(
    DIRECTORY "${CMAKE_SOURCE_DIR}/libc/include/"
    DESTINATION include
    FILES_MATCHING PATTERN "*.h"
)
