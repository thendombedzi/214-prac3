#include <iostream>
#include "TacticalCommand.h"


void TacticalCommand::setStrategy(BattleStrategy* s) 
{
    strategy = s;
}

void TacticalCommand::executeStrategy() 
{
    if (strategy) 
    {
        strategy->engage();
         for (auto unit : units) {
                unit->move();
                unit->attack();
            }
    }
}

void TacticalCommand::chooseBestStrategy() 
{
      TacticalMemento* memento = archives->getTacticalMemento("last_successful");
        if (memento) {
            planner->restoreMemento(memento);
            strategy = planner->getCurrentStrategy();
        } else {
            setStrategy(new Flanking());
        }
}
