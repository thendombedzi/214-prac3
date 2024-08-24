#include "TacticalMemento.h";

void TacticalMemento::storeStrategy(BattleStrategy* strategy){
    if(storedStrategy != nullptr){
        delete storedStrategy ;
    }
    storedStrategy = strategy ;
}

BattleStrategy* TacticalMemento::getStoredStrategy() const{
    return storedStrategy ;
}