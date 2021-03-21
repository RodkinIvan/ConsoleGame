#pragma once
#include "../Unit.h"
#include <map>
#include <string>
class Protagonist: public Unit{
protected:
    std::map<std::string, std::string> spells;
    std::map<std::string, std::string> inventory;
public:
    Protagonist();
    ~Protagonist() override = 0;
    //virtual bool castSpell(Unit& aim);
};
