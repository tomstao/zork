//
// Created by su tommy on 10/15/24.
//
#include "command.h"
#include <iostream>

using namespace std;
void getCommand(string &command) {
    cout << "> ";
    getline(cin, command);
}