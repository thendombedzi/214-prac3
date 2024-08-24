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
Cavalry::~Cavalry()
{}

