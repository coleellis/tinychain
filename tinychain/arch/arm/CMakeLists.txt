add_library(tinycrt_arm OBJECT crt0.s)

target_include_directories(tinycrt_arm PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
   $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/arch>
)

set_target_properties(tinycrt_arm PROPERTIES LINKER_LANGUAGE C)

# Export target for clients
add_library(Tinychain::tinychain_arm ALIAS tinycrt_arm)

# Install it
install(TARGETS tinycrt_arm
    EXPORT tinychainTargets
    DESTINATION libc/arch/arm
)
