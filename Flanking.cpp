#include <iostream>
#include "Flanking.h"
using namespace std;

void Flanking::engage() 
{
   cout << "Implementing the Flanking's engage()" << endl;
}
Flanking::~Flanking()
{
      cout << "Flanking deleting" << endl;
}

string Flanking::getStrategyLabel() const{
      return StrategyLabel;
}