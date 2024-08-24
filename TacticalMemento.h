#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h";
#include <iostream>
using namespace std ;

class TacticalMemento{
    private :
    BattleStrategy* storedStrategy ;

    public :
    TacticalMemento(BattleStrategy* strategy = nullptr) : storedStrategy(strategy){};
    void storeStrategy(BattleStrategy* strategy);
    BattleStrategy* getStoredStrategy() const;
    
    ~TacticalMemento(){
        cout << "Memento deleted and storedStrategy deleted .";
        delete storedStrategy ;
    }
};


#endif