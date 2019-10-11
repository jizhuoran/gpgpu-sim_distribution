include_directories(${CMAKE_CURRENT_SOURCE_DIR})


file(GLOB_RECURSE gpgpu-sim_uarch-srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_library(gpgpu-sim_uarch SHARED ${gpgpu-sim_uarch-srcs})

