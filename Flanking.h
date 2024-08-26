#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

class Flanking : public BattleStrategy {
    private :
        string StrategyLabel ;
    public:
        virtual void engage() ;
        string getStrategyLabel() const override ;
        ~Flanking() ;

};

#endif