#include <iostream>
#include <string>
#include "command.h"
#include "gameFuntions.h"
#include "invetory.h"
#include "textContent.h"


// Function declarations
bool isGameOver(int room);

// Main game loop
int main() {
    char continueGame = 'y';
    do
    {
        string command;
        printIntroduction();
        nextNarration();
        printIntroduction2();
        nextNarration();

        while (alive) {
            dayExploration();

            dayOne();
            do
            {
                cin >> dayOneCommand;
                clearInput();
            }
            while(dayOneCommand != "key" && dayOneCommand != "gather" &&
                dayOneCommand != "radio" && dayOneCommand != "lab");
            dayOneChoice(dayOneCommand);
            nextNarration();
            days = days - 1;
            if (alive == false)
                break;

            cout << days << " days left." << endl;

            dayTwo();
            do
            {
                cin >> dayTwoCommand;
                clearInput();
            } while (dayTwoCommand != "weapon"  && weapon == false && dayTwoCommand != "gather" &&
                dayTwoCommand != "radio" && dayTwoCommand !="lab");
            dayTwoChoice(dayTwoCommand);
            nextNarration();
            if (alive == false)
                break;
            days = days - 1;
            cout << days << " day left." << endl;


            dayThree();
            dayThreeChoice(dayThreeCommand);
            nextNarration();
            break;

        }
        if (alive == false)
        {
            cout << "GAME OVER!" << endl;
        }
        else
        {
            cout << "Congratulations! You've completed the game!" << endl;
        }
        cout << "Would you like to play again? Press 'y' to continue, any other key to quit: ";
        while (!(cin >> continueGame))
        {
            clearInput();

        }




    } while (continueGame == 'y' || continueGame == 'Y');
    return 0;
}



bool isGameOver(int room) {
    return room == 2;
}