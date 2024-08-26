#include "Legion.h"

void Legion::move(){
    cout << "Legion moving as a unit ." << endl ;
    for(UnitComponent* child : children){
        child->move();
    }
}

void Legion::fight(){
    cout << "Legion engaging in battle ." << endl ;
    for(UnitComponent* child : children){
        child->fight();
    }
}

void Legion::add(UnitComponent* child){
    children.push_back(child);
}

void Legion::remove(UnitComponent* child) {
    for (auto it = children.begin(); it != children.end(); ++it) {
        if (*it == child) {
            children.erase(it);
            return;  
        }
    }
}
Legion::~Legion()
{
    for (auto child : children) {
            delete child; 
        }
}