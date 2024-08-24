#include <iostream>
#include "Riverbank_A.h"

using namespace std;

void Riverbank_A::move()
{
    Artillery::move();
    cout << "Riverbank Artillery is moving on the battlefield."<<endl;
}

void Riverbank_A::attack()
{
    Artillery::attack();
    cout << "Riverbank Artillery is engaging in combat."<<endl;
}