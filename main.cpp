#include <iostream>
#include "Pyromancer.h"
#include "ImpFactory.h"
#include <cassert>
int main() {
    Pyromancer p;
    auto* f = new ImpFactory;
    Enemy* e = f->createEnemy(3);
    Imp* imp = static_cast<Imp*>(e);
    assert(imp->LVL==e->LVL);
    std::cout << "Inheritance test passed";
}
