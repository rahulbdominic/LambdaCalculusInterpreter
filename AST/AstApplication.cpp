//
// Created by rahul on 24/06/2017.
//

#include "AstApplication.h"

AstApplication::AstApplication(const AstEntity &lhs, const AstEntity &rhs) : lhs(lhs), rhs(rhs) {}

char *AstApplication::toString() {
    return AstEntity::toString();
}