#include <iostream>
#include "Fortification.h"
using namespace std ;

void Fortification::engage() 
{
   cout << "Implementing the Fortification's engage()" << endl;
}
Fortification::~Fortification()
{
      cout << "Fortification deleting" << endl;
}

string Fortification::getStrategyLabel() const{
      return StrategyLabel;
}

void Fortification::setStrategyLabel(string Label){
      StrategyLabel = Label ;
}