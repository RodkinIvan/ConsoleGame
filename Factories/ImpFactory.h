#include "EnemyFactory.h"
#include "../Units/Imp.h"
class ImpFactory: public EnemyFactory{
public:
    Enemy* createEnemy(int lvl) override;
};