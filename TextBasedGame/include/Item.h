#ifndef ITEM_H
#define ITEM_H
#include<string>

struct Item
{
    std::string name = "---";
    int price = 0;
    int rarity = 0;
};

struct Weapon: public Item {
    int damage = 0;
    int type = 1;
};

struct Potion: public Item {
    bool drank = false;
};

#endif // ITEM_H
