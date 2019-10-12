cmake_minimum_required(VERSION 3.6.2)


add_definitions(-DCUDART_VERSION=4000)
add_definitions(-DCREATE_LIBRARY)

SET(CMAKE_C_COMPILER /usr/bin/g++)
set(CMAKE_C_FLAGS "-O3 -std=c++11 -fpic")

SET(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "-O3 -std=c++11 -fpic")

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


add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libcuda)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)


add_library(cudart SHARED ${CMAKE_CURRENT_SOURCE_DIR}/libcuda/cuda_runtime_api.cc)
target_link_libraries(cudart cuda gpgpu-sim gpgpu-sim_uarch cuda-sim intersim2 Threads::Threads)

find_package(Boost)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(cudart ${Boost_LIBRARIES} ${CMAKE_DL_LIBS})
endif()


ADD_CUSTOM_TARGET( 
	cudartv4 ALL  
	COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_BINARY_DIR}/libcudart.so ${CMAKE_BINARY_DIR}/libcudart.so.4)


add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/cuobjdump_to_ptxplus)
