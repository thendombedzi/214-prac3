#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"

class TacticalCommand {
private:
    BattleStrategy* strategy;
     
    WarArchives* archives ;

public:
    void setStrategy(BattleStrategy* s);
    void executeStrategy();
    void chooseBestStrategy();
};



#endif