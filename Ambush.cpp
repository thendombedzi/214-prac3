#include <iostream>
using namespace std ;

#include "Ambush.h"

void Ambush::engage() 
{
   cout << "Implementing the Ambush's engage()" << endl;
}
Ambush::~Ambush()
{
      cout << "Ambush deleting" << endl;
}

string Ambush::getStrategyLabel() const {
      return StrategyLabel ;
}

void Ambush::setStrategyLabel(string Label){
      StrategyLabel = Label ;
}