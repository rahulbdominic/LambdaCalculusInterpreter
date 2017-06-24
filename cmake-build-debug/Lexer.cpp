//
// Created by rahul on 24/06/2017.
//

#include "Lexer.h"

Lexer::Lexer(std::string &input) : input(input) {
    index = 0;
    token = nullptr;

}

char Lexer::nextChar() {

}

std::string Lexer::nextToken() {
    return nullptr;
}

bool Lexer::isNextOfType(TokenType type) {
    return false;
}

bool Lexer::isTokenOfType(TokenType type) {
    return false;
}

bool Lexer::matchNextAndSkip(TokenType type) {
    return false;
}

bool Lexer::skipIfMatchesType(TokenType type) {
    return false;
}
