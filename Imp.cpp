#include "Imp.h"

/*bool Imp::poke(Unit& aim) {
    return false;
}*/

Imp::Imp(int lvl) : Enemy(lvl) {
    STR = 2 * LVL;
    VIT = 5 * LVL;
}
