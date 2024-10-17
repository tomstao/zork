#include <iostream>
#include <string>
#include "room.h"
#include "command.h"
#include "gameFuntions.h"
#include "invetory.h"
#include "textContent.h"
#include "status.h"


// Function declarations
bool isGameOver(int room);

// Main game loop
int main() {
    int currentMove = 0;  // Starting room
    string command;
    bool gameWon = false;

    printIntroduction();
    nextNarration();
    printIntroduction2();
    nextNarration();
    while (!gameWon) {
        dayExploration();
        displayRoomDescription(currentMove);

        dayOne();
        getCommand(dayOneCommand);
        dayOneChoice(dayOneCommand);
        nextNarration();

        dayTwo();
        getCommand(dayTwoCommand);
        dayTwoChoice(dayTwoCommand);
        nextNarration();

        dayThree();
        getCommand(dayThreeCommand);
        dayThreeChoice(dayThreeCommand);
        nextNarration();

        dayFour();
        getCommand(dayFourCommand);
        dayFourChoice(dayFourCommand);
        nextNarration();

        dayFive();
        getCommand(dayFiveCommand);
        dayFiveChoice(dayFiveCommand);
        nextNarration();

        daySix();
        getCommand(daySixCommand);
        daySixChoice(daySixCommand);
        nextNarration();

        daySeven();
        getCommand(daySevenCommand);
        daySevenChoice(daySevenCommand);
        nextNarration();


        getCommand(command);
        currentMove = movePlayer(currentMove, command);

        if (isGameOver(currentMove)) {
            gameWon = true;
        }
    }

    cout << "Congratulations! You've completed the game!" << endl;

    return 0;
}

// Function definitions


bool isGameOver(int room) {
    return room == 2;  // Game is over when the player reaches the treasure room
}