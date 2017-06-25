//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_LEXER_H
#define LAMBDACALCULUSINTERPRETER_LEXER_H


#include "TokenType.h"
#include "Token.h"
#include <iostream>

class Lexer {

private:
    std::string input;
    int index;
    Token token;

    char nextChar();

    void nextToken();

public:
    Lexer(std::string &input);

    bool isTokenOfType(TokenType type);

    bool isNextOfType(TokenType type);

    bool matchNextAndSkip(TokenType type);

    bool skipIfMatchesType(TokenType type);
};


#endif //LAMBDACALCULUSINTERPRETER_LEXER_H
