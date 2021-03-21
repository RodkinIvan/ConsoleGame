#include "EnemyFactory.h"
#include "Imp.h"
class ImpFactory: public EnemyFactory{
public:
    Enemy* createEnemy(int lvl) override;
};