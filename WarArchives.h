#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include <algorithm>
#include "TacticalMemento.h"
#include <vector>
#include <iostream>

using namespace std ;

class WarArchives
{ 
    private :
        struct Pair {
            string key ;
            TacticalMemento* memento ;

            Pair(const std::string& key, TacticalMemento* memento) : key(key), memento(memento){}
        };
        vector<Pair> mementoList ;
    public : 
        void addTacticalMemento(TacticalMemento* memento, string label);
        void removeTacticalMemento(string label);
        TacticalMemento* getTacticalMemento(const string& label) const ;
        // void undo(); , maybe ?
        // might add more methods     
};



#endif