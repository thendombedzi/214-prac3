#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

class Fortification : public BattleStrategy {
public:
    virtual void engage() ;
    ~Fortification();
};

#endif