//
// Created by rahul on 24/06/2017.
//

#include "Parser.h"

Parser::Parser(Lexer lexer) : lexer(lexer) {}

Token Parser::parse() {
    return Token();
}

Token Parser::term() {
    return Token();
}

Token Parser::application() {
    return Token();
}

Token Parser::atom() {
    return Token();
}
