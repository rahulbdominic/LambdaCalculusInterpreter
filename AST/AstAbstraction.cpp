//
// Created by rahul on 24/06/2017.
//

#include <cstdio>
#include "AstAbstraction.h"

AstAbstraction::AstAbstraction(char param, const AstEntity &body) : param(param), body(body) {}

char *AstAbstraction::toString() {
    char *buff = new char[100];
    snprintf(buff, sizeof(buff), "(lambda %c. %s)", param, body.toString());
    return AstEntity::toString();
}
