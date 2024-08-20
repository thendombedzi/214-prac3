#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h";
#include <iostream>
using namespace std ;

class TacticalMemento{
    private :
    
    friend class Battlestrategy ;
    BattleStrategy* storedStrategy ;

    public :
    void storeStrategy(BattleStrategy* strategy);
};


#endif