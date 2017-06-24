cmake_minimum_required(VERSION 3.7)
project(LambdaCalculusInterpreter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LambdaCalculusInterpreter/Lexer.cpp LambdaCalculusInterpreter/Lexer.h LambdaCalculusInterpreter/TokenType.cpp LambdaCalculusInterpreter/TokenType.h LambdaCalculusInterpreter/Token.cpp LambdaCalculusInterpreter/Token.h)
add_executable(LambdaCalculusInterpreter ${SOURCE_FILES})