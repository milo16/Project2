/* 
 * File:   Player.cpp
 * Author: Luis Pow Sang
 * Created on May 26, 2014, 4:13 PM
 */

#include "Player.h"

#include <string>
using namespace std;

// constructor
Player::Player(std::string n)
{
    name = n;
    level = 1;
    
    hp  = calcHP();
    str = calcStr();
    def = calcDef();
}

// calculate players hit points
int Player::calcHP()
{
    return this->level * (10 + random(10));
}

// calculate players initial strength
int Player::calcStr()
{
    return random(10) + 1;
}

// calcuate players defense
int Player::calcDef()
{
    return random(10) + 1;
}

// increment players level
void Player::incLevel()
{
    (this->level)++;
}

int Player::attack(char type)
{
    int damage = 0;
    
    int punchAcc = 90; // punch accuracy
    int kickAcc  = 80; // kick accuracy
    int swordAcc = 65; // sword accuracy
    
    int punchMin = 1; // Minimum punch damage
    int punchMax = 4; // Maximum punch damage
    int kickMin  = 5;
    int kickMax  = 7; 
    int swordMin = 8;
    int swordMax = 10;
    
    // Punch
    if (type == 'p' || type == 'P')
    {
        if((random(100) + 1) <= punchAcc)
            damage = punchMin + random(punchMax - punchMin + 1); 
    }
    // Kick
    else if (type == 'k' || type == 'K')
    {
        if((random(100) + 1) <= kickAcc)
            damage = kickMin + random(kickMax - kickMin + 1);
    }
    // Sword
    else 
    {
        if((random(100) + 1) <= swordAcc)
            damage = swordMin + random(swordMax - swordMin + 1);
    }
    
    // multiply damage by players level
    return damage * this->level;
}

int Player::defend()
{
    return 0;
}
