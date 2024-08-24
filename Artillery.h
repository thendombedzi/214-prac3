#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>
#include <string>
using namespace std ;

class  Artillery : public UnitComponent,public LegionUnit {
    public :
    void move() ; 
    void fight() ;
    void attack();
    virtual ~Artillery();
    
};


#endif