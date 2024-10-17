//
// Created by su tommy on 10/15/24.
//

#include "textContent.h"
#include "gameFuntions.h"
#include <iostream>
#include "command.h"

void printIntroduction() {
    using namespace std;
    cout << "You wakes up in an abandoned city, overgrown with nature." << endl;
    cout << "it’s been years since a catastrophic event--" << endl;
    cout << "turned the population into bloodthirsty creatures." <<endl;
    cout << "During the day, the city seems desolate," << endl;
    cout << "but at night, the streets are crawling with dangers." << endl;
    cout << "you are one of the last known survivors." << endl;
}

void printIntroduction2()
{
    using namespace std;
    cout << "The world as you knew it ended long ago. "<< endl;
    cout << "Civilization collapsed after a virus turned most of the population into night-dwelling monsters. " << endl;
    cout << "You are one of the last humans, alone in a vast, empty city, " <<endl;
    cout << "where safety exists only in the daylight. But as night falls, survival is everything." <<endl;
}

void dayExploration()
{
    using namespace std;
    cout << "The player can explore various city locations: " << endl;
    cout << "an old lab, a library, abandoned houses, and barricaded stores. "<< endl;
    cout << "Each place holds clues, supplies, or remnants of humanity."<< endl;
    cout << "There are no enemies during the day, but there is always a sense of danger."<< endl;
    nextNarration();
}

void dayOne()
{
    using namespace std;
    cout << "DAY 1 : " << endl;
    cout << "Scene Description:" << endl;
    cout << "You awaken in your dilapidated safe-house," << endl;
    cout << "surrounded by remnants of a once-bustling city." << endl;
    cout << "Sunlight spills through the broken windows," << endl;
    cout << "giving you a moment of peace before the danger returns." << endl;
    nextNarration();
    cout << "Narration:" <<endl;
    cout << "You stretch and breathe in the stale air. Outside, the echoes of a long-lost world await. " <<endl;
    cout << "You gather your courage and prepare for your first venture into the dangerous streets." <<endl;
    nextNarration();
    cout << "Explore the nearby area(Enter explore)." <<endl;
    cout << "Gather initial supplies (Enter gather)." <<endl;
    cout << "Find clues about the virus outbreak (Enter lab)." <<endl;
    cout << "Send the radio message to the potential survivors.(Enter radio)" << endl;
}

void dayTwo()
{
    using namespace std;
    cout << "DAY 2 : " << endl;
    cout << "test" << endl;
}
void dayThree()
{
    using namespace std;
    cout << "DAY 3 : " << endl;
    cout << "test" << endl;
}

void dayFour()
{
    using namespace std;
    cout << "DAY 4 : " << endl;
    cout << "test" << endl;
}
void dayFive()
{
    using namespace std;
    cout << "DAY 5 : " << endl;
    cout << "test" << endl;
}
void daySix()
{
    using namespace std;
    cout << "DAY 6 : " << endl;
    cout << "test" << endl;
}

void daySeven()
{
    using namespace std;
    cout << "DAY 7 : " << endl;
    cout << "test" << endl;
}
