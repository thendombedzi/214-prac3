#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H
// Am sorry , I needed this class for some implementation
// please tell me if you adjust something 
class BattleStrategy{
   public:
    virtual void engage() = 0;
    virtual ~BattleStrategy();
};

#endif

//Thendo:I added the virtual engage function