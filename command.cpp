//
// Created by su tommy on 10/15/24.
//
#include "command.h"
#include <iostream>

void getCommand(string &command) {
    using namespace std;
    cout << "> ";
    getline(cin, command);
}


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

void dayOneChoice()
{

}