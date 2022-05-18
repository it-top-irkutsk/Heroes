#include <iostream>
#include <string>

#include "Hero.h"
#include "Mage.h"
#include "Barbarian.h"

#include "CLI.h"

using namespace std;

int main() {

    Hero* hero;
    Hero* enemy;

    CLI::welcome();
    char selectType;
    cout << "Select character type:" << endl;
    cout << "1 -> Mage" << endl;
    cout << "2 -> Barbarian" << endl;
    cin >> selectType;

    string name;
    cout << "Enter character name: ";
    cin >> name;

    switch (selectType) {
        case '1':
            hero = new Mage(name);
            enemy = new Barbarian("Enemy");
            break;
        case '2':
            hero = new Barbarian(name);
            enemy = new Mage("Enemy");
            break;
    }

    CLI::printHero(hero);
    CLI::printHero(enemy);

    hero->attack(enemy);
    enemy->attack(hero);

    CLI::printHero(hero);
    CLI::printHero(enemy);

    return 0;
}
