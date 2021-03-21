#pragma once
#include "Unit.h"

class Enemy : public Unit{
public:
    int LVL = 0;
    explicit Enemy(int lvl);
protected:
    ull STR = 0;
};