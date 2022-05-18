#pragma once

#include "Hero.h"

using namespace std;

class Barbarian : public Hero {
public:
    Barbarian(const string &name) : Hero(name) {
        _health = 110;
        _damage = 20;
    }
};
