#pragma once

#include <string>

#include "Hero.h"

using namespace std;

class IMagic {
public:
    virtual void magicalAttack(Hero* enemy) = 0;
};

