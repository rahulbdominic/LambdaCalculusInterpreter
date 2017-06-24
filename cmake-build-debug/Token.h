//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_TOKEN_H
#define LAMBDACALCULUSINTERPRETER_TOKEN_H


#include "TokenType.h"

class Token {

private:
    char value;
    TokenType type;

public:
    Token();

    Token(char value, TokenType type);

    char getValue();

    TokenType getType();
};


#endif //LAMBDACALCULUSINTERPRETER_TOKEN_H
