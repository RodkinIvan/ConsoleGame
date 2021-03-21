#include <iostream>
#include <cassert>
#include "../MainHeader.h"

void runFactoryTest(){
    auto* f = new ImpFactory;
    Enemy* e = f->createEnemy(3);
    assert(e->LVL == 3);
    std::cout << "############################" << '\n';
    std::cout << "#    Factory test passed   #" << '\n';
    std::cout << "############################" << '\n';
    delete f;
    delete e;
}

void runInheritanceTest(){
    auto* f = new ImpFactory;
    Enemy* e = f->createEnemy(3);
    Imp* imp = dynamic_cast<Imp*>(e);
    assert(imp->LVL==e->LVL);
    std::cout << "############################" << '\n';
    std::cout << "#  Inheritance test passed #" << '\n';
    std::cout << "############################" << '\n';
    delete f;
    delete imp;
}

void runHeroCreationTest(){
    auto* p = new Pyromancer;
    delete p;
    std::cout << "############################" << '\n';
    std::cout << "# HeroCreation test passed #" << '\n';
    std::cout << "############################" << '\n';
}
void runAllTests(){
    runHeroCreationTest();
    runFactoryTest();
    runInheritanceTest();
}