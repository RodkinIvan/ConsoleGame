#pragma once
#include "../Unit.h"

class Enemy : public Unit{
public:
    int LVL = 0;
    explicit Enemy(int lvl);
    virtual ~Enemy() = 0;
protected:
    ull STR = 0;
};
