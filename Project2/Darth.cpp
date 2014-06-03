/* 
 * File:   Darth.cpp
 * Author: Luis Pow Sang
 * Created on May 28, 2014, 7:03 PM
 */

#include "Darth.h"

#include <iostream>
#include <string>

using namespace std;

Darth::Darth()
{
    name = "Darth Vader";
    
    hp  = calcHP();
    str = calcStr();
    def = calcDef();
}
    
int Darth::calcHP()
{
    return 10 + random(11);
}

int Darth::calcStr()
{
    return 5;
}

int Darth::calcDef()
{
    return 4;
}

int Darth::attack()
{
    int damage    = 0;
    int attackNum = 0; // random number that determines his attack
    
    int punchAcc = 90;  // punch accuracy
    int kickAcc  = 80;  // kick accuracy
    int saberAcc = 65;  // light-saber accuracy
    
    int punchMin = 1;   // Minimum punch damage
    int punchMax = 4;   // Maximum punch damage
    int kickMin  = 5;
    int kickMax  = 7; 
    int saberMin = 8;
    int saberMax = 10;
    
    // Darth Vader uses 3 different attacks.  The attack is randomly chosen by
    // setting attack value to a 1-10 which corresponds to one of the attacks
    // below.
    // [1-4]  Punch
    // [5-6]  Kick
    // [7-10] Light Saber
    
    attackNum = random(10) + 1;
    
    // Punch
    if (attackNum < 5)
    {
        if((random(100) + 1) <= punchAcc)
            damage = punchMin + random(punchMax - punchMin + 1);
        
        if (damage > 0)
            cout << this->name << " Punched you and you lost " << damage << " HP!" << endl;
        else
            cout << this->name << " tried to Punch you, but missed!!!" << endl;
    }
    // Kick
    else if (attackNum < 7)
    {
        if((random(100) + 1) <= punchAcc)
            damage = kickMin + random(kickMax - kickMin + 1);
        
        if (damage > 0)
            cout << this->name << " Kicked you and you lost " << damage << " HP!" << endl;
        else
            cout << this->name << " tried to Kick you, but missed!!!" << endl;
    }
    // Light Saber
    else
    {
        if((random(100) + 1) <= saberAcc)
            damage = saberMin + random(saberMax - saberMin + 1);
        
        if (damage > 0)
            cout << endl << this->name << " attacked with his Light Saber, taking " << damage << " HP!" << endl;
        else
            cout << endl << this->name << " swung his Light Saber at you, but missed!!!" << endl;
    }    
    
    return damage;
    
}

int Darth::defend()
{
    return 0; 
}
