#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
public:
    virtual void engage() ;
    ~Ambush();
};

#endif