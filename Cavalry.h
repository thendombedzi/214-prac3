#ifndef CAVALRY_H
#define CAVALRY_H

#include "UnitComponent.h";
#include <iostream>
#include <string>
using namespace std ;

class Cavalry : public UnitComponent {
    public :
    void move() ; // MOVE ??
    void fight() ;

    private :
    int healthPerSoldier ;
    int damagePerSoldier ;
    int defencePerSoldier ;
    string untiName ;
};


#endif