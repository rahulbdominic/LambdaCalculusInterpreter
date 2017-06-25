//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_PARSER_H
#define LAMBDACALCULUSINTERPRETER_PARSER_H


#include "Lexer.h"

class Parser {
private:
    Lexer lexer;

public:
    Parser(Lexer lexer);

    Token parse();

    Token term();

    Token application();

    Token atom();
};


#endif //LAMBDACALCULUSINTERPRETER_PARSER_H
