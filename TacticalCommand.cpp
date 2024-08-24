#include <iostream>
#include "TacticalCommand.h"


void TacticalCommand::setStrategy(BattleStrategy* s) 
{
    strategy = s;
}

void TacticalCommand::executeStrategy() 
{
    if (strategy) 
    {
        strategy->engage();
    }
}

void TacticalCommand::chooseBestStrategy() 
{
      //still to implement
}
