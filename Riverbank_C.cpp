#include <iostream>
#include "Riverbank_C.h"

using namespace std;

void Riverbank_C::move()
{
    Cavalry::move();
    cout << "Riverbank Cavalry is moving on the battlefield."<<endl;
}

void Riverbank_C::attack()
{
    Cavalry::attack();
    cout << "Riverbank Cavalry is engaging in combat."<<endl;
}