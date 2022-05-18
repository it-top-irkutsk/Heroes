#pragma once

#include <string>

using namespace std;

class Hero {
private:
    string _name;
    int _health;
    int _damage;

public:
    Hero(const string &name, int health, int damage) : _name(name), _health(health), _damage(damage) {}

    const string &getName() const {
        return _name;
    }

    void setHealth(int health) {
        if (health <= 0) {
            _health = 0;
        } else {
            _health = health;
        }
    }

    int getHealth() const {
        return _health;
    }

    virtual void attack(Hero enemy) {
        int h = enemy.getHealth() - _damage;
        enemy.setHealth(h);
    }
};
