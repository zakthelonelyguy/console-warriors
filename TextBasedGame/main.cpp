// Glossary
/*
    c stands for `character`
    speed = whoever attacks first
*/

#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>

#include<NewCharacter.h>

// Variables
NewCharacter NC;

float c_health; // The Current Character Health;
float c_maxHealth; // The Maximum Character Health
float c_shield; // The Shield Can Recharge And Must Be Depleted Before The Health Goes Down
float c_damage; // The Character Damage
float c_class; // The Character Class
float c_speed; // The Character Speed
float c_blockChance; // Chance of blocking someone
float c_attackSpeed; // Less Chance of getting blocked
float c_attackRange; // The range of the character
float c_defence; // Characters Defence

int choice;

int numberOfAbilities;

int maxInventorySize;

// Function Decleration
bool init ();
bool newCharacter ();
bool c_displayStats();

// Functions
bool c_displayStats() {
    bool success = true;

    cout << "\n\nYour stats are:" << endl
        << "  health " << c_health << endl
        << "  max health " << c_maxHealth << endl
        << "  shield " << c_shield << endl
        << "  damage " << c_damage << endl
        << "  class " << c_class << endl
        << "  speed " << c_speed << endl
        << "  block chance " << c_blockChance << endl
        << "  attack speed " << c_attackSpeed << endl
        << "  attack range " << c_attackRange << endl
        << "  defence " << c_defence << endl << endl;

    return success;
}


bool init () {
    bool success = true;

    c_health = 100;
    c_maxHealth = 100;
    c_shield = 0;
    c_damage = 0;
    c_class = 0;
    c_speed = 5;
    c_blockChance = 0;
    c_attackSpeed = 5;
    c_attackRange = 0;
    c_defence = 5;

    numberOfAbilities = 0;

    maxInventorySize = 5;

    if (!NC.createCharacter()) {
        cout << "Coudln't create player" << endl;
        success = false;
    } else {
        c_defence = NC.getDefence();
        c_speed = NC.getSpeed();
        c_attackSpeed = NC.getAttackSpeed();
        c_attackRange = NC.getAttackRange();
        c_damage = NC.getDamage();
    }

    return success;
}

int main () {
    if (!init()) {
        cout << "Couldn't initialise" << endl;
    } else { // Main Code
        c_displayStats();
        system("PAUSE");
        system("CLS");
        cout<<"GAME START:::"<<endl;










    }

    cout<<"\ntipe to end\n"<<endl;
    string plc_holder = "";
    cin>>plc_holder;
    return 0;
}
