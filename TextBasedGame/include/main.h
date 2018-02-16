//#ifndef MAIN_H
//#define MAIN_H

#include<Item.h>
#include<NewCharacter.h>

#include<windows.h>

// Variables
    extern NewCharacter NC;

    extern float c_health; // The Current Character Health;
    extern float c_maxHealth; // The Maximum Character Health
    extern float c_shield; // The Shield Can Recharge And Must Be Depleted Before The Health Goes Down
    extern float c_damage; // The Character Damage
    extern float c_class; // The Character Class
    extern float c_speed; // The Character Speed
    extern float c_blockChance; // Chance of blocking someone
    extern float c_attackSpeed; // Less Chance of getting blocked
    extern float c_attackRange; // The range of the character
    extern float c_defence; // Characters Defence

    extern int choice;

    extern int numberOfAbilities;

    extern int maxInventorySize;
    extern int currentInventorySize;

    extern Item item1;
    extern Item item2;
    extern Item item3;
    extern Item item4;
    extern Item item5;

    extern void Red(); //Intensive red console text color.

    extern void Green(); //Intensive green console text color.

    extern void Blue(); //Intensive green console text color.

    extern void Normal(); //Default console text color.

//#endif // MAIN_H
