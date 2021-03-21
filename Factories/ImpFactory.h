#pragma once

#include "EnemyFactory.h"
#include "../Units/Enemies/Imp.h"
class ImpFactory: public EnemyFactory{
public:
    Enemy* createEnemy(int lvl) override;
    ~ImpFactory() override;
};