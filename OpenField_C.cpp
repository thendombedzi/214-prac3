#include <iostream>
#include "OpenField_C.h"

using namespace std;

void OpenField_C::move()
{
    Cavalry::move();
    cout << "Openfield Cavalry is moving on the battlefield."<<endl;
}

void OpenField_C::attack()
{
    Cavalry::attack();
    cout << "Openfield Cavalry is engaging in combat."<<endl;
}