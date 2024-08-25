#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <iostream>
#include <string>
using namespace std ;

class Cavalry : public UnitComponent, public LegionUnit {
    public :
    void move() ; 
    void fight() ;
    void attack();
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
    virtual ~Cavalry();

};


#endif