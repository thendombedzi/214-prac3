#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"
#include "Flanking.h"
#include "LegionUnit.h"

class TacticalCommand{
private:
    BattleStrategy* strategy;
    TacticalPlanner* planner;
    WarArchives* archives ;
     std::vector<LegionUnit*> units;

public:
    void setStrategy(BattleStrategy* s); // sets strategy and automatically creates a memento of it 
    void executeStrategy();
    void chooseBestStrategy();
    ~TacticalCommand();
};



#endif