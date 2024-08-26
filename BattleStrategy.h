#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <string>
#include <iostream>
using namespace std ;
// Am sorry , I needed this class for some implementation
// please tell me if you adjust something 
class BattleStrategy{
   public:
    virtual void engage() = 0;
    virtual ~BattleStrategy();
    virtual string getStrategyLabel() const = 0 ;
    virtual void setStrategyLabel(string Label) = 0 ;
};

#endif

//Thendo:I added the virtual engage function