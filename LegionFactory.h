#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include "LegionUnit.h"

class LegionFactory {

public:
    virtual Infantry* createInfantry() = 0;
    virtual Cavalry* createCavalry() = 0;
    virtual Artillery* createArtillery() = 0;
    virtual ~LegionFactory();
};

#endif