//
// Created by rahul on 24/06/2017.
//

#include <cstdio>
#include "AstApplication.h"

char *AstApplication::toString() {
    char *buff = new char[100];
    snprintf(buff, sizeof(buff), "%s %s", lhs->toString(), rhs->toString());
    return buff;
}

AstApplication::AstApplication(AstEntity *lhs, AstEntity *rhs) : lhs(lhs), rhs(rhs) {}
