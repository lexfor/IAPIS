# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)
project(lang)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 14)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE /home/tima/lang/antlr-4.9.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(SampleGrammarLexer /home/tima/lang/HelloLexer.g4 LEXER
        PACKAGE antlrcpptest
        )


antlr_target(SampleGrammarParser /home/tima/lang/HelloParser.g4 PARSER VISITOR
        PACKAGE antlrcpptest
        )

# include generated files in project environment
include_directories(${ANTLR_SampleGrammarLexer_OUTPUT_DIR})
include_directories(${ANTLR_SampleGrammarParser_OUTPUT_DIR})
message(${ANTLR_SampleGrammarLexer_OUTPUT_DIR})
message(${ANTLR_SampleGrammarParser_OUTPUT_DIR})

# add generated grammar to demo binary target
add_executable(lang main.cpp
        ${ANTLR_SampleGrammarLexer_CXX_OUTPUTS}
        ${ANTLR_SampleGrammarParser_CXX_OUTPUTS} Hello.cpp Hello.h HelloVisitor.cpp HelloVisitor.h Longs.cpp Longs.h Tree.cpp Tree.h treeFiles/Element.cpp treeFiles/Element.h treeFiles/MainOperation.cpp treeFiles/MainOperation.h treeFiles/AllOperation.cpp treeFiles/AllOperation.h treeFiles/CreateOperation.cpp treeFiles/CreateOperation.h treeFiles/SummOperation.cpp treeFiles/SummOperation.h treeFiles/DiffOperation.cpp treeFiles/DiffOperation.h treeFiles/MultOperation.cpp treeFiles/MultOperation.h treeFiles/DivOperation.cpp treeFiles/DivOperation.h treeFiles/PowOperation.cpp treeFiles/PowOperation.h treeFiles/SqrtOperation.cpp treeFiles/SqrtOperation.h treeFiles/AssignOperation.cpp treeFiles/AssignOperation.h treeFiles/ForExpr.cpp treeFiles/ForExpr.h treeFiles/AllExpr.cpp treeFiles/AllExpr.h treeFiles/IfExpr.cpp treeFiles/IfExpr.h)
target_link_libraries(lang antlr4_static)
message(${ANTLR_SampleGrammarLexer_CXX_OUTPUTS})
message(${ANTLR_SampleGrammarParser_CXX_OUTPUTS})