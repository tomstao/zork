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
        food += 2;
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
            if (chance < 5)
            {
                cout << "Your noise attracted the zombies, you got bitten, that's the end of your life." << endl;
                alive = false;
            }
            else
            {
                cout << "After you gathered enough gas, you decided to sleep in car," << endl;
                cout << "if anything happens, you just drive your car and run away." << endl;
                cout << "Luckily, you didn't encounter any danger, safely drove back home" << endl;
                gas += 3;
            }

        }

    }
    if (command == "gather")
    {
        food += 1;
        gas += 1;
        cout << "You found some food and supplies, not too much, but with the remained gas, " << endl;
        cout << "and the gas you gathered from abandoned cars," << endl;
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
        cout << "You grip the radio tightly, pressing the worn button as you speak into the cold silence,"
                " your voice echoing faintly in the empty port. " << endl;
        cout << "Static hums back at you, relentless and indifferent." << endl;
        nextNarration();
        cout << "You adjust the frequency, try again, sending out another call into the endless night.  " << endl;
        cout << "But only the same empty hiss returns,"
                " as if the whole world beyond has gone quiet, too far out of reach." << endl;
        cout << "A sense of isolation settles over you, heavy and unyielding, as you let go of the button. " << endl;
        cout << "The hope that someone—anyone—might answer slips further away,"
                " leaving only the lonely rhythm of the static." << endl;
    }

    cout << "Night has fallen, and the streets lie in heavy silence "
            "as you slip back toward the safety of your makeshift "
            "fortress. " << endl;
    cout << "Every shadow looms large, and every distant rustle keeps "
            "your pulse racing until the familiar sight of your "
            "front door finally comes into view." << endl;
    nextNarration();
    cout << "You press your back against it, take a steadying breath, "
            "and listen for any sounds from within—only silence." <<endl;
    cout << "With a last glance over your shoulder, you slide the bolts shut, "
            "sealing yourself away from the dangers lurking in the darkness. " << endl;
    nextNarration();
    cout  << "The day’s tension seeps from your body, but you know the respite is only temporary." << endl;

    return 0;
}

int dayTwoChoice(string &command)
{
    string choice = "placeholder";
    if(command == "weapon")
    {

        cout << "You step cautiously into the abandoned shop,"
                " the faint stench of rot filling the air. " << endl;
        cout << "The shelves are in disarray, items strewn across the floor,"
                " and broken glass crunches underfoot as you move deeper inside." << endl;
        nextNarration();
        cout << "Your eyes scan the aisles, searching for anything you could use—" << endl;
        cout << "a crowbar, a sturdy knife—anything that might give you an edge." << endl;
        cout << "Then, from behind a fallen shelf, you hear it:" << endl;
        cout << "the faint, unsettling shuffle of feet. Shadows stir, and a low,"
                " guttural moan echoes through the aisles." << endl;
        cout << "Your heart skips. They’re here, lurking among the aisles, hidden in the gloom." << endl;
        cout << " You tighten your grip, preparing to fight your way out if necessary." << endl;
        nextNarration();
        cout << "If you continue to search for weapons, you might be attacked by these zombies" << endl;
        cout << R"(What is your choice? enter "back" or "search")" << endl;
        do
        {
            cin >> choice;
            clearInput();
        } while (choice != "search" && choice != "back");
        if (choice == "search")
        {
            int chance = rand() % 100;
            if (chance < 10)
            {
                cout << "The shuffling grows louder, closer. You freeze, but it’s too late—a pale, "
                        "decomposing face rises from behind the shelf, hollow eyes locking onto you." << endl;
                cout << "Another figure stirs nearby, followed by another,"
                        " their rasping breaths filling the silence." << endl;
                nextNarration();
                cout << "Panic claws at your chest as you back away, heart hammering." << endl;
                cout << "The first zombie lurches toward you, arms outstretched,"
                        " its broken nails clawing the air." << endl;
                cout << "There’s no time to think—only to act. You grip your weapon tightly,"
                        " bracing yourself as the undead converge, determined to tear you apart." << endl;
                return alive = false;
            }
            weapon = true;
            cout << "You hold your breath, keeping still as the moans drift closer,"
                " shadows moving just out of sight." << endl;
            cout << "Carefully, you edge toward a shelf lined with tools and spot an old "
                "crowbar glinting faintly in the dim light." << endl;
            nextNarration();
            cout << " Hands shaking, you reach for it, lifting it with deliberate silence."
                " Armed now, you grab a small hammer and a sturdy knife, slipping them into your bag." << endl;
            cout << "With one last glance toward the shuffling figures hidden in "
                "the aisles, you inch your way back to the door. " << endl;
            cout << "The zombies remain oblivious as you step outside, heart pounding but victorious." << endl;
        }



    }
    if(command == "lab")
    {
        cout << "Exhausted and on the edge of despair, you slump over the lab table," << endl;
        cout << "papers scattered and notebooks filled with dead ends and failures." << endl;
        nextNarration();
        cout << "Every experiment feels like a nail in the coffin of hope." << endl;
        cout << "As your gaze falls on the rows of cages, you nearly look away—until a faint,"
                " unexpected movement catches your eye." << endl;
        nextNarration();
        cout << "One of the test mice, which had shown every symptom, now stands alert, its breathing steady." << endl;
        cout << "You blink, hardly daring to believe it. Heart pounding, you lean closer. Could it be? " << endl;
        cout << "Amidst all the failures, "
                "this one resilient creature might just hold the answer you’ve been searching for." << endl;
        nextNarration();
    }
    if(command == "radio")
    {
        if(radio == 0)
        {
            cout << "You grip the radio tightly, pressing the worn button as you speak into the cold silence,"
              " your voice echoing faintly in the empty port. " << endl;
            cout << "Static hums back at you, relentless and indifferent." << endl;
            nextNarration();
            cout << "You adjust the frequency, try again, sending out another call into the endless night.  " << endl;
            cout << "But only the same empty hiss returns,"
                    " as if the whole world beyond has gone quiet, too far out of reach." << endl;
            cout << "A sense of isolation settles over you, heavy and unyielding, as you let go of the button. " << endl;
            cout << "The hope that someone—anyone—might answer slips further away,"
                    " leaving only the lonely rhythm of the static." << endl;
            nextNarration();
        } else
        {
            radio += 1;
            cout << "You sit by the old radio transmitter at the port,"
                    " fingers trembling as you press the button and speak into the void. " << endl;
            cout << "Static crackles in response, just like every other time—a frustrating wall of silence." << endl;
            nextNarration();
            cout << " The cold night air chills you, "
                    "seeping through torn layers as you prepare to give up, shoulders sagging. " << endl;
            cout << "Then, suddenly, a faint, broken voice cuts through the static,"
                    " barely audible but unmistakably human." << endl;
            nextNarration();
            cout << " You freeze, hardly daring to breathe as the voice crackles back to life." << endl;
            cout << "“Hello… anyone… there?”" << endl;
            cout << "A wave of disbelief hits you, followed quickly by relief."
                    " Someone heard you. You lean forward, fumbling to respond, your voice shaking with hope." << endl;
        }
        nextNarration();
    }
    if(command == "gather")
    {
        cout << "gather" << endl;
    }
    cout << "The world is draped in shadows as you finally make it back to the familiar, "
        "weathered door of your refuge." << endl;
    cout  << "Exhaustion weighs heavy in your limbs,"
             " each bruise and scrape reminding you of the close calls that filled the day." << endl;
    cout << " You slip inside, securing every lock and bolt with practiced hands, " << endl;
    nextNarration();
    cout << "shutting out the dangers that lurk in the darkened streets. " << endl;
    cout << ". The silence that greets you is thick but comforting. " << endl;
    cout << "You lean back against the door,"
            " taking a moment to let the tension drain from your body. Another day survived." << endl;

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