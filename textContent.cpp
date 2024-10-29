//
// Created by su tommy on 10/15/24.
//

#include "textContent.h"
#include "gameFuntions.h"
#include <iostream>
#include "command.h"
#include "invetory.h"
#include "status.h"
bool weaponChoice = false;


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
    cout << "You can explore various city locations: " << endl;
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
    cout << "The life line has been shut down long ago, stay here any longer only causes resources wasting." <<endl;
    cout << "You've decide no matter what happens, you are going to leave in three days" << endl;
    nextNarration();
    cout << "Pick up your key to drive to exploring the nearby area(Enter key)." <<endl;
    cout << "Gather initial supplies without driving your car in order to save gas.(Enter gather)." <<endl;
    cout << "Try to catch the last hope in the old lab nearby to find clues about the virus outbreak (Enter lab)." <<endl;
    cout << "To check the radio one last time at the dock.(Enter radio)" << endl;
}

void dayTwo()
{
    using namespace std;
    cout << "DAY 2 : " << endl;
    cout << "You wake with a start, the faint light of dawn filtering through the barricaded windows." << endl;
    cout << "The room is silent, save for the soft ticking of the clock on the wall." << endl;
    nextNarration();
    cout << "Your body aches from yesterday’s ordeal," << endl;
    cout << " a dull reminder of the dangers lurking outside. " << endl;
    nextNarration();
    cout << " The stale air hangs heavy, and your stomach twists with hunger." << endl;
    cout << "Another day in a world that barely feels alive—yet you must face it again," << endl;
    cout << " before the sun dips and the night returns." << endl;

    if (food >= 5 && gas >= 5)
    {
        cout << "With enough gas, you are able to drive further where you know there is a weapon store" << endl;
        cout << "Maybe you can find some weapons for later escaping or you should act safely?" << endl;
        weaponChoice = true;
    }
    cout << "What would you want to do?" << endl;
    nextNarration();

    if(weaponChoice)
    {
        cout << "Drive to the upper town, there might have weapon, but it could be dangerous"
                "-- enter 'weapon' " << endl;
    }
    cout << "Try to check the radio one last time-- enter 'radio' " << endl;
    cout << "Do the vaccine research one last time-- enter 'lab'" << endl;
    if (food < 5)
    cout << "In order to escape to another city, you need to gather more food and gas-- enter 'gather' " << endl;
}
void dayThree()
{
    string choice = "placeholder";
    using namespace std;
    cout << "DAY 3 : " << endl;
    if(cure >= 2 )
    {
        cout << " The sunlight filters into your makeshift lab, a harsh reminder that time is slipping away. " << endl;
        cout << " The vial rests before you, containing the last threads of hope—but it’s raw, unrefined." << endl;
        cout << " You don't have more time to waste, maybe to carry the unrefined vaccine and escape is a better option"
                "what would you do?" << endl;
        nextNarration();
        cout << R"(enter "refine" or "escape")" << endl;
        do
        {
            cin >> choice;
            clearInput();
        } while (choice != "refine" && choice != "escape");
        if (choice == "refine")
        {
            cout << " Your hands move with urgency, setting up the extraction equipment, " << endl;
            cout << " carefully measuring each step as you work against the creeping shadow of the coming dusk. " << endl;
            nextNarration();
            cout << " Outside, you hear the occasional distant groan, "
                    " a chilling reminder of what awaits if you don’t finish in time." << endl;
            cout << " Sweat beads on your forehead as the minutes tick by," << endl;
            cout << " and finally, the last drop filters through, clear and potent. " << endl;
            nextNarration();
            cout << " You seal the syringe, tuck it safely in your bag," << endl;
            cout << " and take one last look at the room before stepping into the daylight." << endl;
            cout << " There’s no more time—the night will soon bring them back, and you must be gone before then." << endl;
            nextNarration();
        }
        if (choice == "escape")
        {
            nextNarration();
            cout << " You stare at the vial, knowing it’s unrefined, incomplete." << endl;
            cout << "  But the approaching shadows and distant, echoing moans make the choice clear:" << endl;
            cout << " there’s no time. You slip the raw vaccine carefully into your pack,"
                    " hoping it holds the potential to turn the tide" << endl;
            nextNarration();
            cout << " —even if it’s untested. Heart pounding, you gather your remaining supplies, "
                    "feeling the weight of this desperate gamble. " << endl;
            cout << " As you step into the fading daylight, you clutch your pack tightly, nerves taut." << endl;
            nextNarration();
            cout << " The sun is already beginning its descent; nightfall—and the undead—are only hours away." << endl;
            cout << " There’s no room for hesitation now. With one last glance at your abandoned hideout, " << endl;
            cout << "  you turn and make for the open road, carrying both hope and uncertainty on your back." << endl;
            nextNarration();
        }
    }
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
