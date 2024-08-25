#include <iostream>
#include "TacticalCommand.h"


void TacticalCommand::setStrategy(BattleStrategy* s) 
{
    this->strategy = s;
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
TacticalCommand::~TacticalCommand() 
{
    cout << "Deleting strategy" << endl;
    //delete strategy;
    // delete planner;
    // delete archives;
     for (LegionUnit* unit : units) {
        delete unit;
    }
    //strategy = 0;
}
