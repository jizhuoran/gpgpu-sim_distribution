include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dao-sim)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gpuwattch)

MESSAGE(${CMAKE_CURRENT_SOURCE_DIR}/dao-sim)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/include)
include_directories(${CMAKE_BINARY_DIR}/include)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/gpgpu-sim)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/intersim2)


file(GLOB gpgpu-sim-srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_library(gpgpu-sim SHARED ${gpgpu-sim-srcs})

