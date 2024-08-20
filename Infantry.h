#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h";
#include <iostream>
#include <string>
using namespace std ;

class Infantry : public UnitComponent {
    public :
    Infantry(int health, int damage, int defence, int amount, string name);
    Infantry();
    void move() ; //MOVE ??
    void fight() ;


    private :
    int healthPerSoldier ;
    int damagePerSoldier ;
    int defencePerSoldier ;
    string untiName ;
};

#endif