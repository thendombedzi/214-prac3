#include <iostream>
#include "Woodland_I.h"

using namespace std;

void Woodland_I::move()
{
    Infantry::move();
    cout << "Woodland Infantry is moving on the battlefield."<<endl;
}

void Woodland_I::attack()
{
    Infantry::attack();
    cout << "Woodland Infantry is engaging in combat."<<endl;
}