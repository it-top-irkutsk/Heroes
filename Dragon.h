#pragma once

#include "Hero.h"
#include "IMagic.h"

using namespace std;

class Dragon : public Hero, public IMagic {
public:
    Dragon(const string &name) : Hero(name) {
        _health = 150;
        _damage = 50;
    }

    void magicalAttack(Hero *enemy) override {
        int h = enemy->getHealth() - _damage * 5;
        enemy->setHealth(h);
    }
};

