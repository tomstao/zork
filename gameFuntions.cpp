//
// Created by su tommy on 10/16/24.
//

#include "gameFuntions.h"

#include <iostream>
using namespace std;

static char nextMove = 'y';

void nextNarration()
{
    cout << "Enter a character to continue: ";
    while (!(cin >> nextMove))
    {
        clearInput();
    }
    clearInput();
}

void clearInput()
{
    cin.clear();
    cin.ignore(1000, '\n');
}
