#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

class Fortification : public BattleStrategy {
    private :
        string StrategyLabel ;
    public :
        virtual void engage() ;
        string getStrategyLabel() const override ;
        ~Fortification();
};

#endif