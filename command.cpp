//
// Created by su tommy on 10/15/24.
//
#include "command.h"
#include <iostream>
#include "gameFuntions.h"
#include "status.h"
#include "invetory.h"
#include <ctime>
#include <cstdlib>

void getCommand(string &command) {
    using namespace std;
    cout << "> ";
    getline(cin, command);
}
     string stay = "stay";
bool alive = true;


int movePlayer(int currentMove, const string &command) {
    if (command == "north") {
        if (currentMove == 0) {
            return 1;  // Move to hallway
        }

        if (currentMove == 1) {
            return 2;  // Move to treasure room
        }
    } else if (command == "south") {
        if (currentMove == 1) {
            return 0;  // Move back to dark room
        }
    } else if (command == "quit") {
        exit(0);  // Exit the game
    } else {
        cout << "I don't understand that command." << endl;
    }
    return currentMove;  // No movement if command is invalid
}

int dayOneChoice(string &command)
{
    using namespace std;
    if (command == "key")
    {
        key = true;
        gas -= 1;
        food += 3;
        cout << "You raided a supermarket in the middle of the town." << endl;
        cout << "You gathered a lot of food, next, you should gather some more gas here." << endl;
        cout << "But, searching gas will cause to go back home when night falls, that's dangerous." << endl;
        cout << "Enter 'stay' or 'back'" << endl;
        do
        {
            cin >> stay;
            clearInput();
        } while (stay != "stay" && stay != "back");

        if (stay == "stay")
        {   srand(time(0));
            int chance = rand() % 100;
            if (chance < 40)
            {
                cout << "Your noise attracted the zombies, you got bitten, that's the end of your life." << endl;
                alive = false;
            }
            else
            {
                cout << "After you gathered enough gas, you decided to sleep in car," << endl;
                cout << "if anything happens, you just drive your car and run away." << endl;
                cout << "Luckily, you didn't encounter any danger, safely drove back home" << endl;
                gas += 2;
            }

        }

    }
    if (command == "gather")
    {
        food += 1;
        cout << "You found some food and supplies, not too much, but with the remained gas," << endl;
        cout << "You are able to drive to another city with potential survivors." << endl;
    }
    if (command == "lab")
    {
        cure += 1;
        cout << "You walk into the  laboratory under your basement" << endl;
        cout << "The mouse you did experiment on didn't show any cured sign." << endl;
        cout << "That's depressing, maybe it's time to give up" << endl;
    }
    if (command == "radio")
    {   radio +=1;
        cout << "You decide go to the port to send radio signal" << endl;
        cout << "You walked to the empty dock, sent the signal again," << endl;
        cout << "That's depressing, nobody answered you radio, " << endl;
        cout << "maybe it's time to give up" << endl;
    }
    return 0;
}

int dayTwoChoice(string &command)
{
    return 0;
}

int dayThreeChoice(string &command)
{
    return 0;
}

int dayFourChoice(string &command)
{
    return 0;
}

int dayFiveChoice(string &command)
{
    return 0;
}

int daySixChoice(string &command)
{
    return 0;
}

int daySevenChoice(string &command)
{
    return 0;
}