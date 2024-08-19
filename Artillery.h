#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "UnitComponent.h";
#include <iostream>
#include <string>
using namespace std ;

class  Artillery : public UnitComponent {
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