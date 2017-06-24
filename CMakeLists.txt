cmake_minimum_required(VERSION 3.7)
project(LambdaCalculusInterpreter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/Lexer.cpp cmake-build-debug/Lexer.h cmake-build-debug/TokenType.cpp cmake-build-debug/TokenType.h)
add_executable(LambdaCalculusInterpreter ${SOURCE_FILES})