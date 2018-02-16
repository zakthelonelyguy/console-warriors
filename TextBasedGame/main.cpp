// Glossary
/*
    c stands for `character`
    speed = whoever attacks first
*/

#include "main.h"

#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>
#include<windows.h>
#include<vector>

#include<NewCharacter.h>
#include<Item.h>
#include<Goblin.h>

// Variables
NewCharacter NC;
Goblin goblin;

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
int currentInventorySize;

Item item1;
Item item2;
Item item3;
Item item4;
Item item5;

// Function Decleration
bool init ();
bool newCharacter ();
bool c_displayStats();
void showInventory();

// Functions
void Red()
{
    SetConsoleTextAttribute
    (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
} //Intensive red console text color.

void Green()
{
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
} //Intensive green console text color.

void Blue()
{
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
} //Intensive green console text color.

void Normal()
{
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
} //Default console text color.

bool c_displayStats() {
    bool success = true;

    Red();

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

    Normal();

    return success;
}


bool init () {
    bool success = true;

    system("Title Console Warriors");

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

    currentInventorySize = 0;

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
        system("PAUSE");
        system("CLS");

        Blue();

        cout<<"You better hurry, the gobilins are coming!"<<endl;

        Red();

        cout<<"You start to follow the rest of the group..."<<endl;

        Blue();

        cout<<"This way!"<<endl;

        Green();

        cout<<"A few minutes later..."<<endl;

        Red();

        goblin.spawnGoblin(1);

        Normal();

    }

    Normal();
 //   cout<<"\ntipe to end\n"<<endl;
 //   string plc_holder = "";\
    cin>>plc_holder;
    return 0;
}

void showInventory() {
    cout<<"Your inventory contains..."<<endl;

    Red();

    cout<<"[1]. "<<item1.name<<endl;
    cout<<"[2]. "<<item2.name<<endl;
    cout<<"[3]. "<<item3.name<<endl;
    cout<<"[4]. "<<item4.name<<endl;
    cout<<"[5]. "<<item5.name<<endl;

    Normal();
}
