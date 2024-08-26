#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, string label){
    mementoList.emplace_back(label, memento);
}

void WarArchives::removeTacticalMemento(string label){
    auto it = remove_if(mementoList.begin(), mementoList.end(),[&](const Pair& pair){
        return pair.key == label ;
    });
    if(it != mementoList.end()){
        mementoList.erase(it, mementoList.end());
    }
}

TacticalMemento* WarArchives::getTacticalMemento(const string& label) const 
{
        for (const auto& pair : mementoList) 
        {
            if (pair.key == label) 
            {
                return pair.memento;
            }
        }
        return nullptr; 
    }

WarArchives::~WarArchives() {
   
}