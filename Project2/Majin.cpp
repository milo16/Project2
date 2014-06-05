/* 
 * File:   Majin.h
 * Author: Luis pow Sang
 * Created on June 4, 2014, 5:05 PM
 */

#include "Majin.h"

#include <iostream>
#include <string>

using namespace std;

Majin::Majin()
{
    name = "Majin Buu";
    
    hp  = calcHP();
    str = calcStr();
    def = calcDef();
}
    
int Majin::calcHP()
{
    return 30 + random(31);
}

int Majin::calcStr()
{
    return 5;
}

int Majin::calcDef()
{
    return 4;
}

int Majin::attack()
{
    int damage    = 0;
    int attackNum = 0; // random number that determines his attack
    
    int punchAcc = 90;  // punch accuracy
    int kickAcc  = 80;  // kick accuracy
    int beamAcc = 65;  // light-saber accuracy
    
    int punchMin = 20;   // Minimum punch damage
    int punchMax = 24;   // Maximum punch damage
    int kickMin  = 25;
    int kickMax  = 27; 
    int beamMin = 28;
    int beamMax = 30;
    
    // Majin Buu uses 3 different attacks.  The attack is randomly chosen by
    // setting attack value to a 1-10 which corresponds to one of the attacks
    // below.
    // [1-4]  Punch
    // [5-6]  Kick
    // [7-10] Beam Attack
    
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
    // Beam Attack
    else
    {
        if((random(100) + 1) <= beamAcc)
            damage = beamMin + random(beamMax - beamMin + 1);
        
        if (damage > 0)
            cout << endl << this->name << " attacked with his beam attack, taking " << damage << " HP!" << endl;
        else
            cout << endl << this->name << " used his beam attack, but missed!!!" << endl;
    }    
    
    return damage;
    
}

int Majin::defend()
{
    return 0; 
}
