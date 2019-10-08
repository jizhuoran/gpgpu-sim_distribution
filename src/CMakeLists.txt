include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gpgpu-sim)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gpuwattch)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2/allocators)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2/arbiters)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2/networks)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2/power)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/intersim2/routers)
include_directories(${CMAKE_BINARY_DIR}/include)


file(GLOB gpgpu-sim-srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_library(gpgpu-sim SHARED ${gpgpu-sim-srcs})



file(GLOB_RECURSE gpgpu-sim_uarch-srcs ${CMAKE_CURRENT_SOURCE_DIR}/gpgpu-sim/*.cc)
add_library(gpgpu-sim_uarch SHARED ${gpgpu-sim_uarch-srcs})
target_link_libraries(gpgpu-sim_uarch gpgpu-sim)



bison_target(ptx_parser cuda-sim/ptx.y ${CMAKE_CURRENT_SOURCE_DIR}/ptx.tab.c COMPILE_FLAGS "-p ptx_ -v -d")
flex_target(ptx_lexer cuda-sim/ptx.l ${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim/lex.ptx_.c)
set_source_files_properties(${BISON_ptx_parser_OUTPUTS} PROPERTIES COMPILE_FLAGS "-std=c++11 -DYYDEBUG")
ADD_FLEX_BISON_DEPENDENCY(ptx_lexer ptx_parser)



bison_target(ptxinfo_parser cuda-sim/ptxinfo.y ${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim/ptxinfo.tab.c COMPILE_FLAGS "-p ptxinfo_ -v -d")
flex_target(ptxinfo_lexer cuda-sim/ptxinfo.l ${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim/lex.ptxinfo_.c)
set_source_files_properties(${BISON_ptxinfo_parser_OUTPUTS} PROPERTIES COMPILE_FLAGS "-std=c++11 -DYYDEBUG")
ADD_FLEX_BISON_DEPENDENCY(ptxinfo_lexer ptxinfo_parser)

file(GLOB_RECURSE cuda-sim-srcs ${CMAKE_CURRENT_SOURCE_DIR}/cuda-sim/*.cc)
add_library(cuda-sim SHARED ${cuda-sim-srcs} ${BISON_ptx_parser_OUTPUTS} ${BISON_ptxinfo_parser_OUTPUTS} ${FLEX_ptx_lexer_OUTPUTS} ${FLEX_ptxinfo_lexer_OUTPUTS})


 

bison_target(ytab_parser ${CMAKE_CURRENT_SOURCE_DIR}/intersim2/config.y ${CMAKE_CURRENT_SOURCE_DIR}/intersim2/y.tab.c COMPILE_FLAGS "-y -d")
flex_target(ytab_lexer ${CMAKE_CURRENT_SOURCE_DIR}/intersim2/config.l ${CMAKE_CURRENT_SOURCE_DIR}/intersim2/lex.yy.c)
ADD_FLEX_BISON_DEPENDENCY(ytab_lexer ytab_parser)


file(GLOB_RECURSE intersim2-srcs ${CMAKE_CURRENT_SOURCE_DIR}/intersim2/*.cpp)

add_library(intersim2 SHARED ${intersim2-srcs} ${BISON_ytab_parser_OUTPUTS} ${FLEX_ytab_lexer_OUTPUTS})

