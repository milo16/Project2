/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * Created on May 26, 2014, 3:20 PM
 * Survivor RPG Game
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//My libraries
#include "Character.h"
#include "Player.h"
#include "Darth.h"
#include "Freddy.h"
#include "Majin.h"

//No global constants

//Function Prototypes
char getAttack();
void printAttType(char);

int main(int argc, char** argv) {
   //Declare variables
    string name = "";
    int damage = 0;
    char attackType;
    
    srand(time(NULL));
    
    // title screen
    cout << "SURVIVOR GAME" << endl;
    cout << "-----------------------------" << endl << endl;
    
    //Instructions
    cout << "Hello, welcome to SURVIVOR." << endl;
    cout << "The instructions for this RPG game are very simple. This game is divided"<<endl;
    cout << "in 3 levels. You have to defeat an enemy in each level to survive and win"<<endl;
    cout << "the game. You are going to have the option to choose among three different"<<endl;
    cout << "attacks (p=punch,k=kick,and s=sword). Punch is the one that do the lowest"<<endl;
    cout << "damage but that has the highest accuracy to hit your opponent and the sword is "<<endl;
    cout << "the one that do highest damage, but that has the lowest accuracy to hit your "<<endl;
    cout << "opponent."<<endl;
    
    cout<< "*********************************************************************"<<endl;
    
    cout<<endl;
    cout << "Press ENTER to start your journey" << endl;
    std::cin.ignore();
    
     // get user's name
    cout << "Enter your name: ";
    cin >> name;
    
    // print plot
    
    
    // create player object
    Player *player = new Player(name);
    
    // "LEVEL ONE: darth fro now"
    
    // "description lkjfelfkjelfkj
    
    Darth *vader = new Darth();
    
    //Display player and Vader Statistics
    cout << endl;
    player->dispStats();
    cout << endl;
    vader->dispStats();
    
    while(player->isAlive() && vader->isAlive())
    {
        // player attacks
        attackType = getAttack();
        damage = player->attack(attackType);
        vader->hp -= damage;
        
        // print battle sequence
        // if successful 
        if (damage > 0)
        {
            cout << player->name;
            printAttType(attackType);
            cout << vader->name << " for " << damage << " HP!" << endl;
        }
        else // we missed
        {
            cout << player->name << " missed!!!" << endl;
        }
            
        // enemy attacks
        if(vader->isAlive())
        {
            damage = vader->attack();
            player->hp -= damage;
        }
        
    }
    
    //If player is not alive then is dead
    //else Vader is dead
    
    if (!player->isAlive())
    {
        cout << endl << player->name << " is dead :(" << endl << endl;
        return 0;
    }
    else
        cout << endl << vader->name << " has died!" << endl << endl;
    
    if (player->isAlive())
    {
        cout << "Congratulations, you defeated " << vader->name << endl;
        
        // print plot for level 2
        
        
        //cin.clear();
        cout <<"Press ENTER twice to continue"<<endl;
        cin.ignore(2);
        //cin.ignore();
       
        // player improves to next level
        player->incLevel();
        
        // recalculate players new HP max
        player->hp = player->calcHP();
    
    }
    
    
     // LEVEL 2
    //
    //
    //
    
    // create Krueger object
    Freddy *kruger = new Freddy();
    
    //Display player and Freddy Status
    cout <<"-------------------------------"<<endl;
    player->dispStats();
    cout << endl;
    kruger->dispStats();
    cout <<"-------------------------------"<<endl;
    
    while(player->isAlive() && kruger->isAlive())
    {
        // player attacks
        attackType = getAttack();
        damage = player->attack(attackType);
        kruger->hp -= damage;
        
        // print battle sequence
        // if successful 
        if (damage > 0)
        {
            cout << player->name;
            printAttType(attackType);
            cout << kruger->name << " for " << damage << " HP!" << endl;
        }
        else // we missed
        {
            cout << player->name << " missed!!!" << endl;
        }
            
        // enemy attacks
        if(kruger->isAlive())
        {
            damage = kruger->attack();
            player->hp -= damage;
        }
        
    }
    
    //If player is not alive then is dead
    //else Freddy Kruger is dead
    
    if (!player->isAlive())
    {
        cout << endl << player->name << " is dead :(" << endl << endl;
        return 0;
    }
    else
        cout << endl << kruger->name << " has died!" << endl << endl;
    
     if (player->isAlive())
    {
        // congratulations message
        // You defeat your opponent
        cout << endl << "Congratulations, you defeated " << kruger->name << endl;
        
        
        // print plot for level 3
        
        
         cout <<"Press ENTER twice to continue"<<endl;
        cin.ignore(2);
        
        // player improves to next level
        player->incLevel();
        
        // recalculate players new HP max
        player->hp = player->calcHP();
     }
    
    
     //
    //
    // LEVEL 3
    //
    //
    
    // create Buu object
    Majin *buu = new Majin();
    
    //Display player and Buu Status
    cout <<"-------------------------------"<<endl;
    player->dispStats();
    cout << endl;
    buu->dispStats();
    cout <<"-------------------------------"<<endl;
    
    while(player->isAlive() && buu->isAlive())
    {
        // player attacks
        attackType = getAttack();
        damage = player->attack(attackType);
        buu->hp -= damage;
        
        // print battle sequence
        // if successful 
        if (damage > 0)
        {
            cout << player->name;
            printAttType(attackType);
            cout << buu->name << " for " << damage << " HP!" << endl;
        }
        else // we missed
        {
            cout << player->name << " missed!!!" << endl;
        }
            
        // enemy attacks
        if(buu->isAlive())
        {
            damage = buu->attack();
            player->hp -= damage;
        }
        
    }
    
    //If player is not alive then is dead
    //else Freddy Kruger is dead
    
    if (!player->isAlive())
    {
        cout << endl << player->name << " is dead :(" << endl << endl;
        return 0;
    }
    else
        cout << endl << buu->name << " has died!" << endl << endl;
    
    if (player->isAlive())
    {
        // congratulations message
        cout << endl << "Congratulations, you defeated " << buu->name << endl;
        
        // display message
        cout << " YOU won the game" << endl;
 

    }
    
    
    
   return 0;
}

//Function displays type of attacks
char getAttack()
{
    char type;  // type of attack
    
    //Loops until player the available attacks
    do {
        cout << endl;
        cout << "Choose your attack:" << endl;
        cout << "Punch" << endl;
        cout << "Kick"  << endl;
        cout << "Sword" << endl;
        
        cin >> type;
        
        cout << endl;
        
    } while(type != 'p' && type != 'P' && type != 'k' && type != 'K' && type != 's' && type != 'S');
    
    
    return type;   
}

//Function prints type of attack depending of your choice
void printAttType(char type)
{
    if (type == 'p' || type == 'P')
        cout << " punched ";
    else if (type == 'k' || type == 'K')
        cout << " kicked ";
    else if (type == 's' || type == 'S')
        cout << " sliced ";
}