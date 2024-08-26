#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
    private :
        string StrategyLabel ;
    public:
        virtual void engage() override ;
        string getStrategyLabel() const override ;
        void setStrategyLabel(string Label) override ;
        ~Ambush() ;
};

#endif