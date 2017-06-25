//
// Created by rahul on 24/06/2017.
//

#include <cstring>
#include <algorithm>
#include <vector>
#include "Parser.h"
#include "AST/AstIdentifier.h"
#include "AST/AstApplication.h"
#include "AST/AstAbstraction.h"
#include "AST/Epsilon.h"

Parser::Parser(Lexer lexer) : lexer(lexer) {}

AstEntity Parser::parse() {
    std::vector<char> ctx = std::vector<char>();
    AstEntity result = term(ctx);
    lexer.isTokenOfType(TokenType::SENTINAL);
    return result;
}

// term ::= LAMBDA LCID DOT term
//        | application
AstEntity Parser::term(std::vector<char> ctx) {
    if (lexer.skipIfMatchesType(TokenType::LAMBDA)) {
        char value = lexer.isTokenOfType(TokenType::LCID);
        lexer.matchNextAndSkip(TokenType::DOT);
        ctx.push_back(value);
        AstEntity rightResult = term(ctx);
        return AstAbstraction(value, rightResult);
    } else {
        return application(ctx);
    }
}

// application ::= atom application'
AstEntity Parser::application(std::vector<char> ctx) {
    AstEntity lhs = atom(ctx);

    // application' ::= atom application'
    //                | ε
    while (true) {
        AstEntity rhs = atom(ctx);
        if (strcmp(rhs.toString(), Epsilon().toString()) == 0) {
            return lhs;
        } else {
            lhs = AstApplication(lhs, rhs);
            return lhs;
        }
    }
}

// atom ::= LPAREN term RPAREN
//        | LCID
AstEntity Parser::atom(std::vector<char> ctx) {
    if (lexer.skipIfMatchesType(TokenType::LPAREN)) {
        AstEntity t = term(ctx);
        lexer.matchNextAndSkip(TokenType::RPAREN);
        return t;
    } else {
        char term = lexer.isNextOfType(TokenType::LCID);
        auto index = std::find(ctx.begin(), ctx.end(), term) - ctx.begin();
        return AstIdentifier(index);
    }
}
