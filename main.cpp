#include <iostream>
#include "MainHeader.h"
#include <cassert>
int main() {
    auto* p = new Pyromancer;
    auto* f = new ImpFactory;
    Enemy* e = f->createEnemy(3);
    assert(e->LVL == 3);
    std::cout << "###########################" << '\n';
    std::cout << "#   Factory test passed   #" << '\n';
    std::cout << "###########################" << '\n';
    Imp* imp = dynamic_cast<Imp*>(e);
    assert(imp->LVL==e->LVL);
    std::cout << "###########################" << '\n';
    std::cout << "# Inheritance test passed #" << '\n';
    std::cout << "###########################" << '\n';

    delete f;
    delete imp;
    delete p;
}
