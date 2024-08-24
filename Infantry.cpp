#include <iostream>
using namespace std;

#include "Infantry.h"


void Infantry::move()
{
    cout << "Infantry moving on the battlefield."<<endl;
}

void Infantry::attack()
{
    cout << "Infantry engaging in combat."<<endl;
}

void Infantry::fight(){
    cout << "Infantry engaging in combat ." << endl ;
}

Infantry::~Infantry()
{}