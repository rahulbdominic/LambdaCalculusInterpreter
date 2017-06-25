//
// Created by rahul on 24/06/2017.
//

#include <cstdio>
#include "AstIdentifier.h"

AstIdentifier::AstIdentifier(int value) : value(value) {}

char *AstIdentifier::toString() {
    char *buff = new char[2];
    snprintf(buff, sizeof(buff), "%d", value);
    return buff;
}
