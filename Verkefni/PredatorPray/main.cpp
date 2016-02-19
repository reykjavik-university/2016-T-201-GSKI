#include <iostream>
#include "World.h"
using namespace std;

int main()
{
    World myWorld;

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
