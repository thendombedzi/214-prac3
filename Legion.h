#ifndef LEGION_H
#define LEGION_H

#include "UnitComponent.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

// Composite  
class Legion : public UnitComponent {
    private : 
        vector<UnitComponent*> children ;
    public :
        int getSize(){
            return children.size();
        }
        void move() override ;
        void fight() override ;
        void add(UnitComponent* component) override ;
        void remove(UnitComponent* component) override ;
        ~Legion()override;
};

#endif