#include <iostream>
#include "MainHeader.h"
#include <cassert>
int main() {
    auto* p = new Pyromancer;
    auto* f = new ImpFactory;
    Enemy* e = f->createEnemy(3);
    Imp* imp = dynamic_cast<Imp*>(e);
    assert(imp->LVL==e->LVL);
    std::cout << "Inheritance test passed";
    delete f;
    delete imp;
    delete p;
}
