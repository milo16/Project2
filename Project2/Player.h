/* 
 * File:   Player.h
 * Author: Luis Pow Sang
 * Created on May 26, 2014, 4:13 PM
 */

#ifndef PLAYER_H
#define	PLAYER_H

#include "Character.h"

#include <string>
using namespace std;

class Player : public Character
{
    private:
        int level;
        
    public:
        // Constructor
        Player(string);
        // Calculation Functions
        int calcHP();
        int calcStr();
        int calcDef(); 
        
        void incLevel();  
        
        int attack(char);
        int defend();
};

#endif	/* PLAYER_H */
