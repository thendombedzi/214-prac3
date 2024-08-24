#include <iostream>
using namespace std;

#include "Infantry.h"


void Infantry::move()
{
    cout << "Infantry is moving on the battlefield."<<endl;
}

void Infantry::attack()
{
    cout << "Infantry is engaging in combat."<<endl;
}

Infantry::~Infantry()
{}