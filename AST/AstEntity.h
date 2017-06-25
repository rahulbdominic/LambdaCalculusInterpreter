//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_ASTENTITY_H
#define LAMBDACALCULUSINTERPRETER_ASTENTITY_H


#include "AstEntityType.h"

class AstEntity {
public:
    AstEntity();

    virtual char *toString();

    virtual AstEntityType getType();
};


#endif //LAMBDACALCULUSINTERPRETER_ASTENTITY_H
