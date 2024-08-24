#include <iostream>
#include "OpenField_I.h"

using namespace std;

void OpenField_I::move()
{
    Infantry::move();
    cout << "Openfield Infantry is moving on the battlefield."<<endl;
}

void OpenField_I::attack()
{
    Infantry::attack();
    cout << "Openfield Infantry is engaging in combat."<<endl;
}