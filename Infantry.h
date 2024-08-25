#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>
#include <string>
using namespace std ;

class Infantry : public UnitComponent,public LegionUnit {
    public :
    void move() ;
    void fight() ;
    void attack();
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
    virtual ~Infantry();

};

#endif