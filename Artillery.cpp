#include <iostream>
using namespace std;

#include "Artillery.h"


void Artillery::move()
{
     cout << "Artillery is moving on the battlefield."<<endl;
}

void Artillery::attack()
{
    cout << "Artillery is engaging in combat."<<endl;
}
void Artillery::fight(){
    cout << "Artillery firing ." << endl ;
}

Artillery::~Artillery()
{}