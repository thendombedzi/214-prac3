#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>
#include <string>
using namespace std ;

class Infantry : public UnitComponent,public LegionUnit {
    public :
    Infantry(int health, int damage, int defence, int amount, string name);
    Infantry();
    void move() ; //MOVE ??
    void fight() ;
    void attack();
    virtual ~Infantry();


    private :
    int healthPerSoldier ;
    int damagePerSoldier ;
    int defencePerSoldier ;
    string untiName ;
};

#endif