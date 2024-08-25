#include <iostream>
using namespace std;

#include "Infantry.h"


void Infantry::move()
{
    cout << "Infantry is moving on the battlefield."<<endl;
}

void Infantry::attack()
{
    cout << "Infantry is engaging in combat."<<endl;
}

void Infantry::fight(){
    cout << "Infantry engaging in combat ." << endl ;
}

void Infantry::add(UnitComponent* component)  {
        std::cout << "Cannot add to leaf unit." << std::endl;
    }

void Infantry :: remove(UnitComponent* component)  {
        std::cout << "Cannot remove from leaf unit." << std::endl;
    }

Infantry::~Infantry()
{}