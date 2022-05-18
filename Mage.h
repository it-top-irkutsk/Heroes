#pragma once

#include "Hero.h"

using namespace std;

class Mage : public Hero {
public:
    Mage(const string &name) : Hero(name) {
        _health = 100;
        _damage = 10;
    }
};
