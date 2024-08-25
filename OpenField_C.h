#ifndef OPENFIELD_C_H
#define OPENFIELD_C_H

#include "Cavalry.h"


class OpenField_C : public Cavalry{
    public:
     void move();
     void attack();
     ~OpenField_C() override;
};

#endif