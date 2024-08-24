#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>
#include <string>
using namespace std ;

class  Artillery : public UnitComponent,public LegionUnit {
    public :
     void move() ; //MOVE ??
    void fight() ;
    void attack();
    virtual ~Artillery();

    private :
    int healthPerSoldier ;
    int damagePerSoldier ;
    int defencePerSoldier ;
    string untiName ;
};


#endif