#include "Hero.h"
using namespace std;

Hero::Hero(std::string name, unsigned health, unsigned strength, unsigned dexterity, unsigned defense) :
    mName(name),
    mHealth(health),
    mStrength(strength),
    mDexterity(dexterity),
    mDefense(defense) {
    std::cout << "hero " << mName << " is constructed" << std::endl;
}

/*  @   show status of a hero including:
*           -name
*           -current attributes
*/
void Hero::showStatus() {
    cout << "Name:" << mName;
    cout << "Health:" << mHealth;
    cout << "Strength:" << mStrength;
    cout << "Dexterity:" << mDexterity;
    cout << "Defense:" << mDefense;
}

bool Hero::isDead() {
    return mHealth == 0;
}

/*@     Hero attacked by another one will decrease it's health
*       Try to implement an attack-damage algorithm/model using attributes of heros.
*       Take dexterity and defense into consideration.
*       For example:
*           - damage is positively related to attacker's strength and dexterity
*           - damage is neagatively related to defender's dexterity and defense
*
*       Note: if health == 0, the hero dies
*/
void Hero::attackedBy(Hero& hero) {
}

Hero::~Hero() {
    std::cout << "hero " << mName <<" is destroyed" << std::endl;
}
