//
// Created by rahul on 24/06/2017.
//

#include <cstdio>
#include "AstApplication.h"

AstApplication::AstApplication(const AstEntity &lhs, const AstEntity &rhs) : lhs(lhs), rhs(rhs) {}

char *AstApplication::toString() {
    char *buff = new char[100];
    snprintf(buff, sizeof(buff), "%s %s", lhs.toString(), rhs.toString());
    return buff;
}