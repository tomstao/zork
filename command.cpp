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
                 return alive = false;
            }
            cout << "After you gathered enough gas, you decided to sleep in car," << endl;
            cout << "if anything happens, you just drive your car and run away." << endl;
            cout << "Luckily, you didn't encounter any danger, safely drove back home" << endl;
            gas += 3;
        }

    }
    if (command == "gather")
    {
        food += 1;
        gas += 1;
        cout << "Determined and focused, you move through the ruins of nearby buildings, " << endl;
        cout << "scavenging anything that could help with the journey ahead. " << endl;
        cout << "Each step is careful, every rustle and shadow "
                "inspected before you enter abandoned shops and homes," << endl;
        nextNarration();
        cout << " scanning shelves stripped bare yet hoping to find a"
                " few overlooked cans or a forgotten bottle of water." << endl;
        cout << "You add each item to your pack, feeling the weight grow—a mix of food, a spare flashlight,"
                " a map with the nearest city circled in red." <<endl;
        cout << "Every resource you gather feels like a small victory,"
                " a step closer to leaving this desolate place." <<endl;
        nextNarration();
        cout << " As you make your way back to your hideout, you can almost picture the road ahead," <<endl;
        cout << "and a flicker of hope begins to kindle in the face of the risks waiting in the unknown." <<endl;
        nextNarration();
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
    if(command == "weapon")
    {
        string choice;
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
                alive = false;
            } else weapon = true;
            {
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

            if(choice == "back")
            {
                cout << "Each creak and echo in the darkened aisles stirs an uneasy feeling, a growing sense that you're not alone." << endl;
                cout << "The weight of the silence presses down, and an icy chill creeps up your spine, urging you to turn back." << endl;
                cout << "You take one last look at the cluttered shelves, swallowing your frustration and fear." << endl;
                cout << "Deciding it’s not worth the risk, you back away carefully, keeping an eye on the shadows as you slip out the door." << endl;
                cout << "Once outside, you let out a breath you didn’t realize you were holding, grateful to have escaped whatever lurked within." << endl;
            }

        }


    }
    if(command == "lab")
    {
        cure += 1;
        cout << "Exhausted and on the edge of despair, you slump over the lab table," << endl;
        cout << "papers scattered and notebooks filled with dead ends and failures." << endl;
        nextNarration();
        cout << "Every experiment feels like a nail in the coffin of hope." << endl;
        if (cure > 1)
        {
            cout << "As your gaze falls on the rows of cages, you nearly look away—until a faint,"
                   " unexpected movement catches your eye." << endl;
            nextNarration();
            cout << "One of the test mice, which had shown every symptom, now stands alert, its breathing steady." << endl;
            cout << "You blink, hardly daring to believe it. Heart pounding, you lean closer. Could it be? " << endl;
            cout << "Amidst all the failures, "
                    "this one resilient creature might just hold the answer you’ve been searching for." << endl;
            nextNarration();
        }
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
    if (food <= 4)
    {
        if(command == "gather")
        {
            if(food <= 3)
            {
                food += 1;
                gas += 1;
                cout << "Determined and focused, you move through the ruins of nearby buildings, " << endl;
                cout << "scavenging anything that could help with the journey ahead. " << endl;
                cout << "Each step is careful, every rustle and shadow "
                        "inspected before you enter abandoned shops and homes," << endl;
                nextNarration();
                cout << " scanning shelves stripped bare yet hoping to find a"
                        " few overlooked cans or a forgotten bottle of water." << endl;
                cout << "You add each item to your pack, feeling the weight grow—a mix of food, a spare flashlight,"
                        " a map with the nearest city circled in red." <<endl;
                cout << "Every resource you gather feels like a small victory,"
                        " a step closer to leaving this desolate place." <<endl;
                nextNarration();
                cout << " As you make your way back to your hideout, you can almost picture the road ahead," <<endl;
                cout << "and a flicker of hope begins to kindle in the face of the risks waiting in the unknown." <<endl;
                nextNarration();
            }
            else if (food > 3)
            {
                food += 1;
                gas += 1;

                cout << "You glance at your dwindling supplies, "
                        "knowing it won’t be enough for the journey ahead." << endl;
                cout << " The road to the next city is long and uncertain, and without more food and gas," << endl;
                cout << "the attempt would be suicide. " << endl;
                nextNarration();
                cout << " You push further into the outskirts, scanning for any gas stations, " << endl;
                cout << " abandoned cars, or stores that might still hold something useful. " << endl;
                nextNarration();
                cout << " The few cans of food in your pack clink together, feeling pathetically light." << endl;
                cout << " You approach a rusted car and pry open the fuel cap, " << endl;
                nextNarration();
                cout << " hoping against hope as you siphon the dregs of gas into a small canister." << endl;
                cout << " The process is painstaking and yields little, but every drop counts." << endl;
                cout << " With each find, your plan becomes a little more real,"
                        " even if survival remains a distant, fragile hope." << endl;
            }
        }
    }
    // cout << "The world is draped in shadows as you finally make it back to the familiar, "
    //     "weathered door of your refuge." << endl;
    // cout  << "Exhaustion weighs heavy in your limbs,"
    //          " each bruise and scrape reminding you of the close calls that filled the day." << endl;
    // cout << " You slip inside, securing every lock and bolt with practiced hands, " << endl;
    // nextNarration();
    // cout << "shutting out the dangers that lurk in the darkened streets. " << endl;
    // cout << ". The silence that greets you is thick but comforting. " << endl;
    // cout << "You lean back against the door,"
    //         " taking a moment to let the tension drain from your body. Another day survived." << endl;

    cout << "As you return to your hideout under the cover of dusk, an uneasy feeling stirs." << endl;
    cout << "Scratches mark the walls outside, fresh and deep, trailing toward your front door. " << endl;
    cout << "Bits of dirt and debris are scattered near the entrance,"
            " and faint footprints—shuffling and dragging—lead ominously away from the building." << endl;
    nextNarration();
    cout << " The realization hits you like a punch to the gut: they’ve found you." << endl;
    cout << " Anxiety tightens your chest as you glance around, the familiar surroundings now"
            " feeling like a trap." << endl;
    nextNarration();
    cout << " There’s no choice left; by tomorrow, you’ll have to be gone." << endl;
    cout << " You retreat inside, packing with urgency, knowing tonight is your last"
            " in what was once a place of safety." << endl;
    nextNarration();
    cout << "As you peer through a crack in the boarded-up window, you see the shadowy figures of "
            "zombies slowly gathering outside," << endl;
    cout << "their lifeless eyes fixed on your hideout."
            " Your stomach tightens—staying here isn’t an option." << endl;
    cout << "But as you scan your supplies, the reality sinks in: you’re low on weapons,"
            " and the gas in your tank won’t carry you far." << endl;
    nextNarration();
    cout << "The nearby police department might hold what you need, "
            "but venturing out at night means facing them in their element," << endl;
    cout << "in the dark, where every sound could bring them swarming." << endl;
    cout << endl;
    cout << "Your mind races, weighing the options. Do you risk a night raid,"
            " slipping through the shadows to search for fuel";
    if (weapon)
    {
        cout << " and weapons?" << endl;
    } else cout << endl;
    nextNarration();
    cout << "Or do you wait for the dawn,"
            " escaping as soon as the light can shield you—knowing your supplies may not last?" << endl;
    cout << "The silence presses down, the undead just beyond your walls, "
            "and time slips away as you stand on the brink of a decision" << endl;
    cout << "that could mean survival or the end." << endl;
    string option;
    do
    {       cout << R"(Enter "raid" or "wait")" << endl;
            cin >> option;
        clearInput();

    } while ( option != "raid" && option!= "wait" );

    if ( option == "raid" )
    {
        if (int chance = rand() % 100; chance < 10 )
        {
            cout << "Determined, you slip into the night, hoping to reach the police department undetected." << endl;
            cout << "The silence is thick, every step a reminder of the danger around you." << endl;
            cout << "Halfway there, your foot lands on broken glass, the sharp crack echoing through the empty streets." << endl;
            cout << "You freeze, but it’s too late. Shadows begin to stir, and from every alleyway, the undead emerge, drawn by the sound." << endl;
            nextNarration();
            cout << "Panic floods your veins as they close in, blocking the path forward and sealing off your escape route." << endl;
            cout << "You turn, breaking into a desperate sprint, but there’s nowhere left to run." << endl;
            cout << "Cold, lifeless hands grasp at you, pulling you down as the moans grow louder." << endl;
            cout << "As the world fades, you realize this night raid was your last." << endl;
            cout << endl;
            return alive = false;
        }
        weapon = true;
        cout << "You take a deep breath, steeling yourself for the night raid." << endl;
        cout << "With your supplies strapped tight, you slip into the darkness,"
            " moving carefully between shadows to avoid the undead." << endl;
        cout << "The city is eerily silent, each step echoing in the night, but you keep your focus sharp." << endl;
        cout << "After what feels like an eternity, you reach the police department,"
            " prying open the door and slipping inside." << endl;
        nextNarration();
        cout << "Rows of lockers line the walls, and after a few tense moments, "
            "you find a stash of weapons and a canister of gas." << endl;
        cout << "Heart pounding, you make your way back,"
            " retracing your path in silence." << endl;
        cout << "When you finally reach your hideout, you close the door behind you,"
            " victorious and better prepared for the escape tomorrow." << endl;
    }
    if ( option == "wait" )
    {
        cout << "You glance out into the pitch-black streets,"
                " the distant sounds of shuffling and groaning reaching your ears." << endl;
        cout << "The weight of the night presses down, every shadow hiding unseen dangers." << endl;
        cout << "You tighten your grip on your supplies, nerves fraying, but sense prevails." << endl;
        cout << "Venturing out now, into the dark, could mean certain death." << endl;
        cout << "Instead, you decide to wait until dawn,"
                " when the sun will force the undead into hiding." << endl;
        cout << "Settling back into your hideout, you keep your ears alert,"
                " every creak of the building reminding you that time is running out." << endl;
        cout << "With a plan set, you hold on, "
                "eyes trained on the first hint of morning light, ready to move as soon as day breaks." << endl;
    }

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