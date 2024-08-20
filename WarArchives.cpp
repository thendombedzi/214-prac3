#include "WarArchives.h"

void WarArchives::addMemento(TacticalMemento* state){
    mementos.push_back(state);
}

TacticalMemento* WarArchives::undo(){
    if(!mementos.empty()){
        TacticalMemento* lastMemento = mementos.back();
        mementos.pop_back();
        return lastMemento ;
    }
    return nullptr ;
}

WarArchives::~WarArchives(){
    for(TacticalMemento* memento : mementos){
        delete memento ;
    }
    mementos.clear();
}