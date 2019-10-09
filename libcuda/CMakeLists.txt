bison_target(cuobjdump_parser cuobjdump.y ${CMAKE_CURRENT_BINARY_DIR}/cuobjdump_parser.c COMPILE_FLAGS "-t -d -v --report=all -p cuobjdump_")
flex_target(cuobjdump_lexer cuobjdump.l ${CMAKE_CURRENT_BINARY_DIR}/cuobjdump_lexer.c COMPILE_FLAGS "-B -P cuobjdump_")
ADD_FLEX_BISON_DEPENDENCY(cuobjdump_lexer cuobjdump_parser)


add_library(cuda SHARED ${BISON_cuobjdump_parser_OUTPUTS} ${FLEX_cuobjdump_lexer_OUTPUTS})