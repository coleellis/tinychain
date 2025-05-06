# Warning flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} \
  -Wall \
  -Wextra \
  -Wpedantic \
  -Wcast-align \
  -Wcast-qual \
  -Wconversion \
  -Wdouble-promotion \
  -Wfloat-equal \
  -Wformat=2 \
  -Winit-self \
  -Wnested-externs \
  -Wpointer-arith \
  -Wshadow \
  -Wsign-conversion \
  -Wstrict-prototypes \
  -Wswitch-default \
  -Wundef \
  -Wunused \
  -Wuninitialized \
  -Wwrite-strings \
  -Wno-unused-parameter \
  -Wno-missing-field-initializers \
  -fno-common \
  -static \
  -ffunction-sections \
  -fdata-sections \
  -fno-builtin \
  -Os"
)

# Minimization Compilation Flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} \
  -static \
  -Os \
  -fno-pie \
  -ffunction-sections \
  -fdata-sections \
  -fno-asynchronous-unwind-tables \
  -fno-unwind-tables \
  -fno-exceptions \
  -fno-stack-protector \
  -fomit-frame-pointer \
  -fno-ident \
  -fno-builtin \
  -fno-PIC \
  -Wl,--gc-sections \
  -Wl,--strip-all \
")

# Minimization Linker flags
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} \
  -nostdlib \
  -static \
  -Wl,--gc-sections \
  -Wl,--nmagic \
  -Wl,--strip-all \
  -Wl,-s \
  -Wl,--no-undefined \
  -Wl,--build-id=none \
")

# Prevent standard libraries
set(CMAKE_C_STANDARD_LIBRARIES "")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
