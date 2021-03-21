#pragma once
#include "Enemy.h"

class Imp: public Enemy{
public:
    //bool poke(Unit& aim);
    explicit Imp(int lvl);
    virtual ~Imp();
};
