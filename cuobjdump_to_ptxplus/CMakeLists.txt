include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src/cuda-sim)

file(GLOB_RECURSE srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)


bison_target(ptx_parser ../src/cuda-sim/ptx.y ${CMAKE_CURRENT_SOURCE_DIR}/ptx.tab.c COMPILE_FLAGS "--name-prefix=ptx_ -v -t -d --report=all --verbose")
flex_target(ptx_lexer ../src/cuda-sim/ptx.l ${CMAKE_CURRENT_SOURCE_DIR}/lex.ptx_.c COMPILE_FLAGS "-B")
ADD_FLEX_BISON_DEPENDENCY(ptx_lexer ptx_parser)
list(APPEND ${srcs} ${BISON_ptx_parser_OUTPUTS} ${FLEX_ptx_lexer_OUTPUTS})

MESSAGE(STATUS ${BISON_ptx_parser_OUTPUTS})


bison_target(elf_parser elf.y ${CMAKE_CURRENT_SOURCE_DIR}/elf_parser.cc COMPILE_FLAGS "-t -d --report=all --verbose -p elf_")
flex_target(elf_lexer elf.l ${CMAKE_CURRENT_SOURCE_DIR}/elf_lexer.cc COMPILE_FLAGS "-B -P elf_")
ADD_FLEX_BISON_DEPENDENCY(elf_lexer elf_parser)
list(APPEND ${srcs} ${BISON_elf_parser_OUTPUTS} ${FLEX_elf_lexer_OUTPUTS})

 
bison_target(header_parser header.y ${CMAKE_CURRENT_SOURCE_DIR}/header_parser.cc COMPILE_FLAGS "-t -d --report=all --verbose -p header_")
flex_target(header_lexer header.l ${CMAKE_CURRENT_SOURCE_DIR}/header_lexer.cc COMPILE_FLAGS "-B -P header_")
ADD_FLEX_BISON_DEPENDENCY(header_lexer header_parser)
list(APPEND ${srcs} ${BISON_header_parser_OUTPUTS} ${FLEX_header_lexer_OUTPUTS})


bison_target(sass_parser sass.y ${CMAKE_CURRENT_SOURCE_DIR}/sass_parser.cc COMPILE_FLAGS "-t -d --report=all --verbose -p sass_")
flex_target(sass_lexer sass.l ${CMAKE_CURRENT_SOURCE_DIR}/sass_lexer.cc COMPILE_FLAGS "-B -P sass_")
ADD_FLEX_BISON_DEPENDENCY(sass_lexer sass_parser)
list(APPEND ${srcs} ${BISON_sass_parser_OUTPUTS} ${FLEX_sass_lexer_OUTPUTS})



add_executable(cuobjdump_to_ptxplus 
    ${srcs}
    ${BISON_ptx_parser_OUTPUTS} ${FLEX_ptx_lexer_OUTPUTS}
    ${BISON_elf_parser_OUTPUTS} ${FLEX_elf_lexer_OUTPUTS}
    ${BISON_header_parser_OUTPUTS} ${FLEX_header_lexer_OUTPUTS}
    ${BISON_sass_parser_OUTPUTS} ${FLEX_sass_lexer_OUTPUTS})



