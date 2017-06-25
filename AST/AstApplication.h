//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_ASTAPPLICATION_H
#define LAMBDACALCULUSINTERPRETER_ASTAPPLICATION_H


#include "AstEntity.h"

class AstApplication : public AstEntity {
private:
    AstEntity *lhs;
    AstEntity *rhs;

public:
    AstApplication(AstEntity *lhs, AstEntity *rhs);

    char *toString() override;

    AstEntityType getType() override;
};


#endif //LAMBDACALCULUSINTERPRETER_ASTAPPLICATION_H
