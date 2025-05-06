# Add the runtime
add_library(tinycrt_i386 OBJECT crt0.s)

target_include_directories(tinycrt_i386 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/arch>
)

set_target_properties(tinycrt_i386 PROPERTIES LINKER_LANGUAGE C)

# Export target for clients
add_library(Tinychain::tinycrt_i386 ALIAS tinycrt_i386)

# Install it
install(TARGETS tinycrt_i386
    EXPORT tinychainTargets
    DESTINATION lib/arch/i386
)
