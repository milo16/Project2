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