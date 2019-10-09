include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})


add_custom_command(
    OUTPUT   ${CMAKE_BINARY_DIR}/include/instructions.h ${CMAKE_BINARY_DIR}/include/ptx_parser_decode.def
    COMMAND  bash "${CMAKE_CURRENT_SOURCE_DIR}/../../scripts/generate_instruction_header.sh" "${CMAKE_BINARY_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}"
    DEPENDS  ${CMAKE_CURRENT_SOURCE_DIR}/instructions.cc ${CMAKE_CURRENT_BINARY_DIR}/ptx.tab.h
)


bison_target(ptx_parser ptx.y ${CMAKE_CURRENT_BINARY_DIR}/ptx.tab.c COMPILE_FLAGS "-p ptx_ -v -d")
flex_target(ptx_lexer ptx.l ${CMAKE_CURRENT_BINARY_DIR}/lex.ptx_.c)
set_source_files_properties(${BISON_ptx_parser_OUTPUTS} PROPERTIES COMPILE_FLAGS "-std=c++11 -DYYDEBUG")
ADD_FLEX_BISON_DEPENDENCY(ptx_lexer ptx_parser)



bison_target(ptxinfo_parser ptxinfo.y ${CMAKE_CURRENT_BINARY_DIR}/ptxinfo.tab.c COMPILE_FLAGS "-p ptxinfo_ -v -d")
flex_target(ptxinfo_lexer ptxinfo.l ${CMAKE_CURRENT_BINARY_DIR}/lex.ptxinfo_.c)
set_source_files_properties(${BISON_ptxinfo_parser_OUTPUTS} PROPERTIES COMPILE_FLAGS "-std=c++11 -DYYDEBUG")
ADD_FLEX_BISON_DEPENDENCY(ptxinfo_lexer ptxinfo_parser)

file(GLOB_RECURSE cuda-sim-srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_library(cuda-sim SHARED ${cuda-sim-srcs} ${BISON_ptx_parser_OUTPUTS} ${BISON_ptxinfo_parser_OUTPUTS} ${FLEX_ptx_lexer_OUTPUTS} ${FLEX_ptxinfo_lexer_OUTPUTS} ${CMAKE_BINARY_DIR}/include/instructions.h ${CMAKE_BINARY_DIR}/include/ptx_parser_decode.def)