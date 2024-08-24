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
    }}

TacticalMemento* WarArchives::getTacticalMemento(const std::string& label) 
{
    // Simple loop to find the memento
    for (const Pair& p : mementoList) {
        if (p.key == label) {
            return p.memento; // Return the memento if the label matches
        }
    }
    return nullptr; // Return nullptr if not found
}

