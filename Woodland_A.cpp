#include <iostream>
#include "Woodland_A.h"

using namespace std;

void Woodland_A::move()
{
    Artillery::move();
    cout << "Woodland Artillery is moving on the battlefield."<<endl;
}

void Woodland_A::attack()
{
    Artillery::attack();
    cout << "Woodland Artillery is engaging in combat."<<endl;
}