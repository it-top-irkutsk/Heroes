#pragma once

#include "Hero.h"
#include "IMagic.h"

using namespace std;

class Mage : public Hero, public IMagic {
public:
    Mage(const string &name) : Hero(name) {
        _health = 100;
        _damage = 10;
    }

    void magicalAttack(Hero* enemy) override {
        int h = enemy->getHealth() - _damage * 2;
        enemy->setHealth(h);
    }
};
