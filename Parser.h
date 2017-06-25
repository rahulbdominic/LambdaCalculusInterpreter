//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_PARSER_H
#define LAMBDACALCULUSINTERPRETER_PARSER_H


#include "Lexer.h"
#include "AST/AstEntity.h"

class Parser {
private:
    Lexer lexer;

public:
    Parser(Lexer lexer);

    AstEntity *parse();

    AstEntity *term(std::vector<char> ctx);

    AstEntity *application(std::vector<char> ctx);

    AstEntity *atom(std::vector<char> ctx);
};


#endif //LAMBDACALCULUSINTERPRETER_PARSER_H
