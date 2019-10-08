cmake_minimum_required(VERSION 3.6.2)


add_definitions(-DCUDART_VERSION=4000)
add_definitions(-DCREATE_LIBRARY)

SET(CMAKE_C_COMPILER /usr/bin/g++)
set(CMAKE_C_FLAGS "-O3 -std=c++11 -fPIC")

SET(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "-O3 -std=c++11 -fPIC")

FIND_PACKAGE(BISON REQUIRED)
FIND_PACKAGE(FLEX REQUIRED)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

IF ((NOT DEFINED ENV{GPGPUSIM_SETUP_ENVIRONMENT_WAS_RUN}) AND 
    (NOT DEFINED ENV{GPGPUSIM_ROOT}) AND 
    (NOT DEFINED ENV{CUDA_INSTALL_PATH}))

	MESSAGE(FATAL_ERROR "ERROR *** run 'source setup_environment' before 'make'; please see README.")
ELSE ()
	MESSAGE(STATUS "Building GPGPU-Sim version ${GPGPUSIM_VERSION} (build ${GPGPUSIM_BUILD}) with CUDA version ${CUDA_VERSION_STRING}")
ENDIF ()

include_directories($ENV{CUDA_INSTALL_PATH}/include)


MESSAGE(STATUS "${CMAKE_CURRENT_SOURCE_DIR}/src")
MESSAGE(STATUS "${CMAKE_BINARY_DIR}/src")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libcuda)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/cuobjdump_to_ptxplus)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

bison_target(cuobjdump_parser ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuobjdump.y ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuobjdump_parser.c COMPILE_FLAGS "-t -d -v --report=all -p cuobjdump_")
flex_target(cuobjdump_lexer ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuobjdump.l ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuobjdump_lexer.c COMPILE_FLAGS "-B -P cuobjdump_")
ADD_FLEX_BISON_DEPENDENCY(cuobjdump_lexer cuobjdump_parser)

MESSAGE(STATUS "${BISON_cuobjdump_parser_OUTPUTS}")




add_library(cudart SHARED ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuda_runtime_api.cc ${BISON_cuobjdump_parser_OUTPUTS} ${FLEX_cuobjdump_lexer_OUTPUTS})
target_link_libraries(cudart gpgpu-sim gpgpu-sim_uarch cuda-sim intersim2 Threads::Threads)

