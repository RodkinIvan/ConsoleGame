#pragma once
#include "Enemy.h"
class EnemyFactory{
    virtual Enemy* createEnemy(int lvl) = 0;
};