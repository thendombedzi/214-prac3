#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"

class OpenFieldFactory : public LegionFactory {
public:
    Infantry* createInfantry() ;
    Cavalry* createCavalry() ;
    Artillery* createArtillery() ;
    void deployArtillery()
    
};

#endif