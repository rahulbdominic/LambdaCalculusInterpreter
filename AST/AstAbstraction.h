//
// Created by rahul on 24/06/2017.
//

#ifndef LAMBDACALCULUSINTERPRETER_ASTABSTRACTIOM_H
#define LAMBDACALCULUSINTERPRETER_ASTABSTRACTIOM_H


#include "AstEntity.h"

class AstAbstraction : public AstEntity {
private:
    char *param;
    AstEntity *body;

public:
    AstAbstraction(char *param, AstEntity *body);

    char *toString() override;

    AstEntityType getType() override;
};


#endif //LAMBDACALCULUSINTERPRETER_ASTABSTRACTIOM_H
