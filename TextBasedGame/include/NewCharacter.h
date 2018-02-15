#ifndef NEWCHARACTER_H
#define NEWCHARACTER_H


class NewCharacter
{
    float defence;
    float speed;
    float attackSpeed;
    float attackRange;
    float damage;

    float c_class;

    public:
        NewCharacter();
        bool createCharacter();

        float getDefence();
        float getSpeed();
        float getAttackRange();
        float getAttackSpeed();
        float getDamage();
};

#endif // NEWCHARACTER_H
