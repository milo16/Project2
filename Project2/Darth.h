/* 
 * File:   Darth.h
 * Author: Luis Pow Sang
 * Created on May 28, 2014, 7:03 PM
 */

#ifndef DARTH_H
#define	DARTH_H

#include "Character.h"

#include <string>
using namespace std;


class Darth : public Character
{   
    public:
        // Constructor
        Darth();
        // Calculation Functions
        int calcHP();
        int calcStr();
        int calcDef();   
        
        int attack();
        int defend();
};

#endif	/* DARTH_H */