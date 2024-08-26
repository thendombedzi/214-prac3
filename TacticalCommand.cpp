#include <iostream>
#include "TacticalCommand.h"


void TacticalCommand::setStrategy(BattleStrategy* s) 
{
     if (!planner) {
        
        return;
     }
    if(strategy){
        delete strategy;
    }
    this->strategy = s;
    planner->setStrategy(s);
    archives->addTacticalMemento(planner->createMemento(),s->getStrategyLabel());/// saves the set strategy into the Tactical Planner
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
        strategy->setStrategyLabel("last_successful");
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
    delete strategy ;
    delete planner ;
    delete archives ;
     for (LegionUnit* unit : units) {
        delete unit;
    }
}
