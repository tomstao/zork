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