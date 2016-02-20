#include <iostream>
#include <ctime>    // for time
#include "World.h"
using namespace std;

int main()
{
    World myWorld(time(0));

    myWorld.display();

    char ch;
    cin.get(ch);

    while (ch != 'q') {   // q for quit
        myWorld.simulateOneStep();
        myWorld.display();
        cin.get(ch);
    }

    return 0;
}
