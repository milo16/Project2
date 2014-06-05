/* 
 * File:   Freddy.h
 * Author: Luis Pow sang
 * Created on June 4, 2014, 5:09 PM
 */

#include "Freddy.h"

#include <iostream>
#include <string>

using namespace std;

Freddy::Freddy()
{
    name = "Freddy Krueger";
    
    hp  = calcHP();
    str = calcStr();
    def = calcDef();
}
    
int Freddy::calcHP()
{
    return 20 + random(21);
}

int Freddy::calcStr()
{
    return 5;
}

int Freddy::calcDef()
{
    return 4;
}

int Freddy::attack()
{
    int damage    = 0;
    int attackNum = 0; // random number that determines his attack
    
    int punchAcc = 90;  // punch accuracy
    int kickAcc  = 80;  // kick accuracy
    int clawsAcc = 65;  // light-saber accuracy
    
    int punchMin = 10;   // Minimum punch damage
    int punchMax = 14;   // Maximum punch damage
    int kickMin  = 15;
    int kickMax  = 17; 
    int clawsMin = 18;
    int clawsMax = 20;
    
    // Freddy Krueger uses 3 different attacks.  The attack is randomly chosen by
    // setting attack value to a 1-10 which corresponds to one of the attacks
    // below.
    // [1-4]  Punch
    // [5-6]  Kick
    // [7-10] Claws
    
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
    // Claws
    else
    {
        if((random(100) + 1) <= clawsAcc)
            damage = clawsMin + random(clawsMax - clawsMin + 1);
        
        if (damage > 0)
            cout << endl << this->name << " attacked with his claws, taking " << damage << " HP!" << endl;
        else
            cout << endl << this->name << " swung his claws at you, but missed!!!" << endl;
    }    
    
    return damage;
    
}

int Freddy::defend()
{
    return 0; 
}
