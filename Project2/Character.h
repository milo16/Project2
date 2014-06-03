/* 
 * File:   Character.h
 * Author: Luis Pow Sang
 * Created on May 26, 2014, 3:24 PM
 */

#ifndef CHARACTER_H
#define	CHARACTER_H

#include <string>

using namespace std;

class Character
{     
   public:
        std::string name;       // Name of character
        int hp;                 // Hit Points (health)
        int str;                // Strength
        int def;                // Defense                                      
        
        std::string getName();
        int getHP();
        int getStr();
        int getDef();
        bool isAlive();
        
        void dispStats();

        virtual int calcHP() = 0;
        virtual int calcStr() = 0;
        virtual int calcDef() = 0; 
        
        virtual int defend() = 0;
};

//function for randomizer
int random(int);

#endif	/* CHARACTER_H */
