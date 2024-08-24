#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h";
#include "TacticalMemento.h";

// Responsibility : Manages the strategic decisions and state changes in battle operations,
// Using the Memento Pattern to save and restore previous states

class TacticalPlanner { // Originator
    private :
    BattleStrategy* currentStrategy ; // Current State

    public :
    TacticalPlanner() : currentStrategy(nullptr) {};
    void setStrategy(BattleStrategy* newStrategy);
    TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
    ~TacticalPlanner();
};  

#endif