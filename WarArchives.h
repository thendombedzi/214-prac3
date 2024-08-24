#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h";
#include <vector>
#include <iostream>
using namespace std ;

class WarArchives
{ 
    private:
    vector<TacticalMemento*> mementos ;

    public:
    void addTacticalMemento(TacticalMemento* memento, string label);
    void removeTacticalMemento(label: string)
    TacticalMemento* undo();
    ~WarArchives();
    
};



#endif