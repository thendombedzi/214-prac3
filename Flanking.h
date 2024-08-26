#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

class Flanking : public BattleStrategy {
    private :
        string StrategyLabel ;
    public:
        void engage() ;
        string getStrategyLabel() const override ;
        void setStrategyLabel(string Label) override ;
        ~Flanking() ;

};

#endif