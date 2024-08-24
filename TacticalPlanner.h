#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h";
#include "TacticalPlanner.h";

class TacticalPlanner {
    private :
    BattleStrategy* currentStrategy ;

    public :
    TacticalMemento* TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
};

#endif