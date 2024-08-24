#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

class Flanking : public BattleStrategy 
{
public:
    virtual void engage() ;
    ~Flanking();

};

#endif