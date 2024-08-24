#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "Riverbank_I.h"
#include "Riverbank_C.h"
#include "Riverbank_A.h"

class RiverbankFactory : public LegionFactory {
public:
    Infantry* createInfantry() ;
    Cavalry* createCavalry() ;
    Artillery* createArtillery() ;
    void deployArtillery();
};

#endif