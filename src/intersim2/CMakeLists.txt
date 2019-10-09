include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../gpgpu-sim)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/allocators)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/arbiters)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/networks)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/power)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/routers)

bison_target(ytab_parser config.y ${CMAKE_CURRENT_BINARY_DIR}/y.tab.c COMPILE_FLAGS "-y -d")
flex_target(ytab_lexer config.l ${CMAKE_CURRENT_BINARY_DIR}/lex.yy.c)
ADD_FLEX_BISON_DEPENDENCY(ytab_lexer ytab_parser)




file(GLOB_RECURSE intersim2-srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(intersim2 SHARED ${intersim2-srcs} ${BISON_ytab_parser_OUTPUTS} ${FLEX_ytab_lexer_OUTPUTS})



