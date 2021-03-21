#pragma once
#include "Unit.h"
#include <map>
#include "string"
class Protagonist: public Unit{
protected:
    std::map<std::string, std::string> spells;
public:
    Protagonist();
};