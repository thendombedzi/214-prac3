#include <iostream>
#include "OpenField_A.h"

using namespace std;

void OpenField_A::move()
{
    Artillery::move();
    cout << "Openfield Artillery is moving on the battlefield."<<endl;
}

void OpenField_A::attack()
{
    Artillery::attack();
    cout << "Openfield Artillery is engaging in combat."<<endl;
}