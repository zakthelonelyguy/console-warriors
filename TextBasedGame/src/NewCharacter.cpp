#include "main.h"
#include "NewCharacter.h"
#include <iostream>
using namespace std;
#include <string>
#include<windows.h>

NewCharacter::NewCharacter()
{
    defence = 0;
    speed = 0;
    attackSpeed = 0;
    attackRange = 0;
    damage = 0;

    c_class = 0;
}

float NewCharacter::getDefence()
{ return defence; }

float NewCharacter::getSpeed()
{ return speed; }

float NewCharacter::getAttackSpeed()
{ return attackSpeed; }

float NewCharacter::getAttackRange()
{ return attackRange; }

float NewCharacter::getDamage()
{ return damage; }

bool NewCharacter::createCharacter() {
    bool success = true;

    c_class = 0; // Reset to default

    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    cout << "Choose your class!" << endl;
    cout << "1. Mage: " << endl
            << "    Low Defence" << endl
            << "    High Speed" << endl
            << "    Moderate-High Range" << endl
            << "    High Attack" << endl << endl;

    cout << "2. Warrior: " << endl
            << "    High Defence" << endl
            << "    Slow Speed" << endl
            << "    Low Attack Speed" << endl
            << "    Low Range" << endl
            << "    High Attack" << endl << endl;

    cout << "3. Archer: " << endl
            << "    Low Defence" << endl
            << "    Very High Range" << endl
            << "    High Attack Speed" << endl
            << "    Moderate Attack" << endl << endl;

    cin>>c_class;

    if (c_class == 1) {
        cout << "Mage Chosen!" << endl;

        defence = 0;
        speed = 10;
        attackRange = 1;
        damage = 24;

    } else

    if (c_class == 2) {
        cout << "Warrior Chosen!" << endl;

        defence = 10;
        speed = 0;
        attackSpeed = 0;
        attackRange = 0;
        damage = 24;

    } else

    if (c_class == 3) {
        cout << "Archer Chosen!" << endl;

        defence = 0;
        attackRange = 2;
        attackSpeed = 10;
        damage = 14;

    } else {
        success == false;
        c_class = 0;
    }

    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);

    return success;
}
