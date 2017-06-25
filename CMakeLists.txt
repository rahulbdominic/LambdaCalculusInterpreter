cmake_minimum_required(VERSION 3.7)
project(LambdaCalculusInterpreter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lexer.cpp Lexer.h TokenType.cpp TokenType.h Token.cpp Token.h Parser.cpp Parser.h)
add_executable(LambdaCalculusInterpreter ${SOURCE_FILES})