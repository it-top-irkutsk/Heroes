#include <iostream>
#include <string>

#include "Hero.h"
#include "Mage.h"
#include "Barbarian.h"
#include "Dragon.h"

#include "CLI.h"

using namespace std;

void MagicAttack(Hero*, Hero*);
void Attack(Hero*, Hero*);

int main() {

    Hero* hero;
    Hero* enemy;

    CLI::welcome();
    char selectType;
    cout << "Select character type:" << endl;
    cout << "1 -> Mage" << endl;
    cout << "2 -> Barbarian" << endl;
    cout << "3 -> Dragon" << endl;
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
        case '3':
            hero = new Dragon(name);
            enemy = new Mage("Enemy");
            break;
    }

    CLI::printHero(hero);
    CLI::printHero(enemy);

    Attack(hero, enemy);

    MagicAttack(hero, enemy);

    return 0;
}

void Attack(Hero* hero, Hero* enemy) {
    cout << "Attack..." << endl;

    hero->attack(enemy);
    enemy->attack(hero);

    CLI::printHero(hero);
    CLI::printHero(enemy);
}

void MagicAttack(Hero* hero, Hero* enemy) {
    IMagic* magic1 = dynamic_cast<IMagic*>(hero);
    if (magic1 != nullptr) {
        cout << "Magic attack..." << endl;
        magic1->magicalAttack(enemy);
    }
    IMagic* magic2 = dynamic_cast<IMagic*>(enemy);
    if (magic2 != nullptr) {
        cout << "Magic attack..." << endl;
        magic2->magicalAttack(hero);
    }
    CLI::printHero(hero);
    CLI::printHero(enemy);
}
