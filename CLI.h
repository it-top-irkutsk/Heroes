#pragma once

#include <iostream>

#include "Hero.h"

using namespace std;

class CLI {
public:
    static void welcome() {
        cout << "=== ====== === " << endl;
        cout << "=== HEROES === " << endl;
        cout << "=== ====== === " << endl;
        cout << endl;
    }

    static void printHero(Hero hero) {
        cout << "--- name: " << hero.getName() << " ---" << endl;
    }
};
