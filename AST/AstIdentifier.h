//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_ASTIDENTIFIER_H
#define LAMBDACALCULUSINTERPRETER_ASTIDENTIFIER_H


#include "AstEntity.h"

class AstIdentifier : public AstEntity {
private:
    int value;

public:
    AstIdentifier(int value);

    char *toString() override;

    AstEntityType getType() override;
};


#endif //LAMBDACALCULUSINTERPRETER_ASTIDENTIFIER_H
