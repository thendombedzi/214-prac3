#include <iostream>
#include "Woodland_C.h"

using namespace std;

void Woodland_C::move()
{
    Cavalry::move();
    cout << "Woodland Cavalry is moving on the battlefield."<<endl;
}

void Woodland_C::attack()
{
    Cavalry::attack();
    cout << "Woodland Cavalry is engaging in combat."<<endl;
}