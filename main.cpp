#include <iostream>
#include <string>
#include "room.h"
#include "command.h"
#include "gameFuntions.h"
#include "invetory.h"
#include "textContent.h"

using namespace std;

// Function declarations
int movePlayer(int currentRoom, const string &command);
bool isGameOver(int room);

// Main game loop
int main() {
    int currentRoom = 0;  // Starting room
    string command;
    bool gameWon = false;

    printIntroduction();
    nextNarration();
    printIntroduction2();
    nextNarration();
    while (!gameWon) {
        dayExploration();
        displayRoomDescription(currentRoom);
        dayOne();
        getCommand(command);
        currentRoom = movePlayer(currentRoom, command);

        if (isGameOver(currentRoom)) {
            gameWon = true;
        }
    }

    cout << "Congratulations! You've completed the game!" << endl;

    return 0;
}

// Function definitions

int movePlayer(int currentRoom, const string &command) {
    if (command == "north") {
        if (currentRoom == 0) {
            return 1;  // Move to hallway
        }

        if (currentRoom == 1) {
            return 2;  // Move to treasure room
        }
    } else if (command == "south") {
        if (currentRoom == 1) {
            return 0;  // Move back to dark room
        }
    } else if (command == "quit") {
        exit(0);  // Exit the game
    } else {
        cout << "I don't understand that command." << endl;
    }
    return currentRoom;  // No movement if command is invalid
}

bool isGameOver(int room) {
    return room == 2;  // Game is over when the player reaches the treasure room
}