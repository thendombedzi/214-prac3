#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h";

class Infantry : public UnitComponent {
    public :
    void move() ;
    void fight() ;
};

#endif