add_library(tinycrt_aarch64 OBJECT crt0.s)

target_include_directories(tinycrt_aarch64 PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
   $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/arch>
)

set_target_properties(tinycrt_aarch64 PROPERTIES LINKER_LANGUAGE C)

# Export target for clients
add_library(Tinychain::tinychain_aarch64 ALIAS tinycrt_aarch64)

# Install it
install(TARGETS tinycrt_aarch64
    EXPORT tinychainTargets
    DESTINATION libc/arch/aarch64
)
