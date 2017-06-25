//
// Created by rahul on 24/06/2017.
//

#include "AstIdentifier.h"

AstIdentifier::AstIdentifier(int value) : value(value) {}

char *AstIdentifier::toString() {
    return AstEntity::toString();
}
