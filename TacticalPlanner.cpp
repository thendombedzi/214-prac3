#include "TacticalPlanner.h"

TacticalMemento* TacticalPlanner::createMemento(){
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento){
    
    if(memento){
        currentStrategy = memento->getStoredStrategy();
    }
}
 
TacticalPlanner::~TacticalPlanner(){
    delete currentStrategy ;
    currentStrategy = nullptr ;
}

void TacticalPlanner::setStrategy(BattleStrategy* newStrategy){
     if (currentStrategy) {
        delete currentStrategy;  
        currentStrategy = nullptr;  }
    currentStrategy = newStrategy;
}
BattleStrategy* TacticalPlanner::getCurrentStrategy() const {
        return currentStrategy;
    }

