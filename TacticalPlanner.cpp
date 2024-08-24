#include "TacticalPlanner.h"

TacticalMemento* TacticalPlanner::createMemento(){
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento){
    if(memento == nullptr){
        cout << "No Memento was passed into arguments " << endl ;
        return ;
    }

    if(currentStrategy != nullptr){
        delete currentStrategy ;
    }

    currentStrategy = memento->getStoredStrategy();
}
 
TacticalPlanner::~TacticalPlanner(){
    delete currentStrategy ;
    currentStrategy = nullptr ;
}

void TacticalPlanner::setStrategy(BattleStrategy* newStrategy){
    currentStrategy = newStrategy ;
}
BattleStrategy* TacticalPlanner::getCurrentStrategy() const {
        return currentStrategy;
    }

