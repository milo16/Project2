/* 
 * File:   Majin.h
 * Author: Luis pow Sang
 * Created on June 4, 2014, 5:05 PM
 */

#ifndef MAJIN_H
#define	MAJIN_H

#include "Character.h"

#include <string>
using namespace std;


class Majin : public Character
{   
    public:
        // Constructor
        Majin();
        // Calculation Functions
        int calcHP();
        int calcStr();
        int calcDef();   
        
        int attack();
        int defend();
};


#endif	/* MAJIN_H */

