#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
    private :
        string StrategyLabel ;
    public:
        virtual void engage() ;
        string getStrategyLabel() const override ;
        ~Ambush() ;
};

#endif