#include "ImpFactory.h"

Enemy* ImpFactory::createEnemy(int lvl) {
    return new Imp(lvl);
}

ImpFactory::~ImpFactory() = default;
