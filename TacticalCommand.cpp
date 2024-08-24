#include <iostream>
#include "TacticalCommand.h"


void TacticalCommand::setStrategy(BattleStrategy* s) 
{
    strategy = s;
    planner->setStrategy(s);
}

void TacticalCommand::executeStrategy() 
{
    if (strategy) 
    {
        strategy->engage();
    }
}

void TacticalCommand::chooseBestStrategy() 
{
      //still to implement
}

void TacticalCommand::saveState(const std::string& label) {
        TacticalMemento* memento = planner->createMemento();
        archives->addTacticalMemento(memento, label);
    }

    // Restore the state of TacticalPlanner from WarArchives using a label
void TacticalCommand::restoreState(const std::string& label) {
    TacticalMemento* memento = archives->getTacticalMemento(label);
    if (memento) {
        planner->restoreMemento(memento);
        delete memento; // Assuming ownership of the memento is transferred
    }
}