#pragma once
#include "../Units/Enemy.h"
class EnemyFactory{
    virtual Enemy* createEnemy(int lvl) = 0;

public:
    EnemyFactory();
    virtual ~EnemyFactory() = 0;
};