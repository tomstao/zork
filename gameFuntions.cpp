//
// Created by su tommy on 10/16/24.
//

#include "gameFuntions.h"

#include <iostream>

static char nextMove = 'y';

void nextNarration()
{
    using namespace std;
    cout << "Enter a character to continue: ";
    while (!(cin >> nextMove))
    {
        clearInput();
    }
    clearInput();
    cout << "***********************************************************************************************" << endl;
}

void clearInput()
{
    using namespace std;
    cin.clear();
    cin.ignore(1000, '\n');
}

void endGame()
{
    nextNarration();
    using namespace std;
    cout << "end" << endl;
}
