#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"

class TacticalCommand {
private:
    BattleStrategy* strategy;
    TacticalPlanner* planner;
    WarArchives* arvhives ;

public:
    void setStrategy(BattleStrategy* s);
    void executeStrategy();
    void chooseBestStrategy();
};



#endif