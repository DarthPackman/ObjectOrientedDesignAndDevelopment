#pragma once
#include <iostream>
#include <string>

class Hero
{
private:
    std::string mName;
    unsigned mHealth;
    unsigned mStrength;
    unsigned mDexterity;
    unsigned mDefense;

public:
    Hero(std::string name, unsigned health, unsigned strength, unsigned dexterity, unsigned defense);

    void showStatus();

    bool isDead();

    void attackedBy(Hero& hero);

    ~Hero();

};

