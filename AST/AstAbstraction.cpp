//
// Created by rahul on 24/06/2017.
//

#include "AstAbstraction.h"

AstAbstraction::AstAbstraction(char param, const AstEntity &body) : param(param), body(body) {}

char *AstAbstraction::toString() {
    return AstEntity::toString();
}
