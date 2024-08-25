#ifndef OPENFIELD_A_H
#define OPENFIELD_A_H

#include "Artillery.h"


class OpenField_A : public Artillery{
    public:
     void move();
     void attack();
     ~OpenField_A() override;
};

#endif