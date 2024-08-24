#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenField_I.h"
#include "OpenField_C.h"
#include "OpenField_A.h"

class OpenFieldFactory : public LegionFactory {
public:
    Infantry* createInfantry()  ;
    Cavalry* createCavalry() ;
    Artillery* createArtillery() ;
    void deployArtillery();
    
};

#endif