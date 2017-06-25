//
// Created by rahul on 24/06/2017.
//

#include <regex>
#include "Lexer.h"

Lexer::Lexer(std::string &input) : input(input) {
    index = 0;
}

char Lexer::nextChar() {
    if (index >= input.length()) {
        return '\0';
    }
    return input[index++];
}

// Allocated memory for token being returned
void Lexer::nextToken() {
    char c = nextChar();

    // We use a grammar where all tokens are characters
    while (c == ' ') {
        c = nextChar();
    }

    switch (c) {
        case '\\':
            token = Token(c, TokenType::LAMBDA);
            break;
        case '.':
            token = Token(c, TokenType::DOT);
            break;
        case '(':
            token = Token(c, TokenType::LPAREN);
            break;
        case ')':
            token = Token(c, TokenType::RPAREN);
            break;
        case '\0':
            token = Token(c, TokenType::SENTINAL);
            break;
        default:
            if (c >= 'A' && c <= 'z') {
                token = Token(c, TokenType::LCID);
            } else {
                throw (c); //TODO: Implement error handling
            }
    }
}

bool Lexer::isNextOfType(TokenType type) {
    if (matchNextAndSkip(type)) {
        return token.getValue();
    }
}

bool Lexer::isTokenOfType(TokenType type) {
    return (token.getType() == type);
}

bool Lexer::matchNextAndSkip(TokenType type) {
    if (this->isTokenOfType(type)) {
        nextToken();
        return true;
    }
    std::cerr << "Invalid token matched";
    throw (type);
}

bool Lexer::skipIfMatchesType(TokenType type) {
    if (isTokenOfType(type)) {
        nextToken();
        return true;
    }
    return false;
}
