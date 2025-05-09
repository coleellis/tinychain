# Set compiler options
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)
set(TRIPLE aarch64-linux-gnu)

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/aarch64)

include(${CMAKE_CURRENT_LIST_DIR}/../common.cmake)
