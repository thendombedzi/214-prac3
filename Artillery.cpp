#include <iostream>
using namespace std;

#include "Artillery.h"


void Artillery::move()
{
     cout << "Artillery is moving on the battlefield."<<endl;
}

void Artillery::attack()
{
    cout << "Artillery is engaging in combat."<<endl;
}
void Artillery::fight(){
    cout << "Artillery firing ." << endl ;
}
void Artillery::add(UnitComponent* component) {
        std::cout << "Cannot add to leaf unit." << std::endl;
    }

void Artillery :: remove(UnitComponent* component)  {
        std::cout << "Cannot remove from leaf unit." << std::endl;
    }

Artillery::~Artillery()
{}