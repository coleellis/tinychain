# Add the runtime
add_library(tinycrt_x86_64 OBJECT crt0.s syscall.c)

target_include_directories(tinycrt_x86_64 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/arch>
)

set_target_properties(tinycrt_x86_64 PROPERTIES LINKER_LANGUAGE C)

# Export target for clients
add_library(Tinychain::tinycrt_x86_64 ALIAS tinycrt_x86_64)

# Install it
install(TARGETS tinycrt_x86_64
    EXPORT tinychainTargets
    DESTINATION lib/arch/x86_64
)
