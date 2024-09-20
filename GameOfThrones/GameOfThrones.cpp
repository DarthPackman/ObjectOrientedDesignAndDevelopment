// GameOfThrones.cpp : This file contains the 'main' function.
// Program execution begins and ends there.


#include <iostream>
#include "Hero.h"
#include "Hero.cpp"


int main()
{
    std::cout << "Winter is Coming!\n";

 /* @   create one object of Hero and show it's status
 *      functions involved:
 *          -constructor
 *          -showStatus
 */

    Hero hero1("Jon Snow", 100, 10, 10, 10);
    hero1.showStatus();

/*  @   create another hero and let them attack each other in turns until one of them is dead, and show status:
*       functions involved:
 *          -constructor
 *          -showStatus
 *          -attackedBy
 *          -isDead(optional)
 *      Note:
            -loop is not required but is welcome
            -if not using loop, just repeat function calls
*/

    Hero hero2("Night King", 100, 20, 5, 5);
    hero2.showStatus();

    // Let them attack each other until one of them is dead
    while (!hero1.isDead() && !hero2.isDead()) {
        hero1.attackedBy(hero2);
        if (!hero1.isDead()) {
            hero2.attackedBy(hero1);
        }
    }
}
