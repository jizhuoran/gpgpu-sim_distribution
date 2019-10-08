include_directories(${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB_RECURSE srcs ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)


bison_target(ptx_parser ${CMAKE_CURRENT_SOURCE_DIR}/../src/cuda-sim/ptx.y ${CMAKE_CURRENT_SOURCE_DIR}/ptx.tab.c)
flex_target(ptx_lexer ${CMAKE_CURRENT_SOURCE_DIR}/../src/cuda-sim/ptx.l ${CMAKE_CURRENT_SOURCE_DIR}/lex.ptx_.c)
ADD_FLEX_BISON_DEPENDENCY(ptx_lexer ptx_parser)
list(APPEND ${srcs} ${BISON_ptx_parser_OUTPUTS} ${FLEX_ptx_lexer_OUTPUTS})



bison_target(elf_parser ${CMAKE_CURRENT_SOURCE_DIR}/elf.y ${CMAKE_CURRENT_SOURCE_DIR}/elf_parser.cc)
flex_target(elf_lexer ${CMAKE_CURRENT_SOURCE_DIR}/elf.l ${CMAKE_CURRENT_SOURCE_DIR}/elf_lexer.cc)
ADD_FLEX_BISON_DEPENDENCY(elf_lexer elf_parser)
list(APPEND ${srcs} ${BISON_elf_parser_OUTPUTS} ${FLEX_elf_lexer_OUTPUTS})


bison_target(header_parser ${CMAKE_CURRENT_SOURCE_DIR}/header.y ${CMAKE_CURRENT_SOURCE_DIR}/header_parser.cc)
flex_target(header_lexer ${CMAKE_CURRENT_SOURCE_DIR}/header.l ${CMAKE_CURRENT_SOURCE_DIR}/header_lexer.cc)
ADD_FLEX_BISON_DEPENDENCY(header_lexer header_parser)
list(APPEND ${srcs} ${BISON_header_parser_OUTPUTS} ${FLEX_header_lexer_OUTPUTS})


bison_target(sass_parser ${CMAKE_CURRENT_SOURCE_DIR}/sass.y ${CMAKE_CURRENT_SOURCE_DIR}/sass_parser.cc)
flex_target(sass_lexer ${CMAKE_CURRENT_SOURCE_DIR}/sass.l ${CMAKE_CURRENT_SOURCE_DIR}/sass_lexer.cc)
ADD_FLEX_BISON_DEPENDENCY(sass_lexer sass_parser)
list(APPEND ${srcs} ${BISON_sass_parser_OUTPUTS} ${FLEX_sass_lexer_OUTPUTS})



add_library(cuobjdump_to_ptxplus SHARED ${srcs})


set(cuobjdump_to_ptxplus-srcs ${srcs} PARENT_SCOPE)


