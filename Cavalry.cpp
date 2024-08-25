#include <iostream>
using namespace std;

#include "Cavalry.h"


void Cavalry::move()
{
    cout << "Cavalry is moving on the battlefield."<<endl;
}

void Cavalry::attack()
{
    cout << "Cavalry is engaging in combat."<<endl;  
}

void Cavalry::fight(){
    cout << "Cavalry attacking the enemy ." << endl ;
}

void Cavalry::add(UnitComponent* component)  {
        std::cout << "Cannot add to leaf unit." << std::endl;
    }

void Cavalry :: remove(UnitComponent* component)  {
        std::cout << "Cannot remove from leaf unit." << std::endl;
    }
Cavalry::~Cavalry()
{}

