#include <iostream>
#include "Riverbank_I.h"

using namespace std;

void Riverbank_I::move()
{
    Infantry::move();
    cout << "Riverbank Infantry is moving on the battlefield."<<endl;
}

void Riverbank_I::attack()
{
    Infantry::attack();
    cout << "Riverbank Infantry is engaging in combat."<<endl;
}