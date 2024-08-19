#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h";
#include <iostream>
#include <string>
using namespace std ;

class Infantry : public UnitComponent {
    public :
    void move() ; //MOVE ??
    void fight() ;

    private :
    int healthPerSoldier ;
    int damagePerSoldier ;
    int defencePerSoldier ;
    string untiName ;
};

#endif