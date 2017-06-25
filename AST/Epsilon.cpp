//
// Created by rahul on 25/06/2017.
//

#include "Epsilon.h"

char *Epsilon::toString() {
    char *str = new char[2]{'e', '\0'};

    return str;
}

AstEntityType Epsilon::getType() {
    return AstEntityType::EPSILON;
}
