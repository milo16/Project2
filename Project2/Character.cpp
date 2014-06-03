/* 
 * File:   Character.cpp
 * Author: Luis Pow sang
 * Created on May 26, 2014, 3:24 PM
 */

#include "Character.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// return characters name
std::string Character::getName()
{
    return this->name;
}

// return characters hit points
int Character::getHP()
{
    return this->hp;
}

// return characters strength
int Character::getStr()
{
    return this->str;
}

// return characters defense
int Character::getDef()
{
    return this->def;
}

// return bool indicating if characters is alive or dead
// true = alive, false = dead
bool Character::isAlive()
{
    if (this->getHP() > 0)
        return true;
    else
        return false;
}

// print characters statistics on the screen
void Character::dispStats()
{
    cout << "Name: " << this->getName() << endl;
    cout << "HP  : " << this->getHP()  << endl;
    cout << "STR : " << this->getStr() << endl;
    cout << "DEF : " << this->getDef() << endl;
}

// return a random integer between 0 and max-1
int random(int max)
{
    return (rand() % max);
}
