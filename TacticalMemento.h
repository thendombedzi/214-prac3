#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

class TacticalMemento{
    private :
    BattleStrategy* storedStrategy ;
    
    public :
    void storeStrategy(BattleStrategy* strategy);
};


#endif