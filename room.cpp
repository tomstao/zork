//
// Created by su tommy on 10/15/24.
//
#include "room.h"
#include <iostream>
using namespace std;
void displayRoomDescription(int room) {
    switch (room) {
    case 0:
        cout << "You are in a dark room. There is a door to the north." << endl;
        break;
    case 1:
        cout << "You are in a hallway. There's a door to the south and a staircase leading up." << endl;
        break;
    case 2:
        cout << "You are in a treasure room! The treasure is here!" << endl;
        break;
    default:
        cout << "You are lost in the darkness." << endl;
        break;
    }
}
