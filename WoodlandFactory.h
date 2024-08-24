#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "LegionFactory.h"
#include "Woodland_I.h"
#include "Woodland_C.h"
#include "Woodland_A.h"

class WoodlandFactory : public LegionFactory 
{
public:
    Infantry* createInfantry() ;
    Cavalry* createCavalry() ;
    Artillery* createArtillery() ;
    void deployArtillery();
};

#endif