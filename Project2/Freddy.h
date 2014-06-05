/* 
 * File:   Freddy.h
 * Author: Luis Pow sang
 * Created on June 4, 2014, 5:09 PM
 */

#ifndef FREDDY_H
#define	FREDDY_H

#include "Character.h"

#include <string>
using namespace std;


class Freddy : public Character
{   
    public:
        // Constructor
        Freddy();
        // Calculation Functions
        int calcHP();
        int calcStr();
        int calcDef();   
        
        int attack();
        int defend();
};


#endif	/* FREDDY_H */

