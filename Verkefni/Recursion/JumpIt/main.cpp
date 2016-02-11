#include <iostream>
#include <cstring>
#include "jumpit.h"
using namespace std;

int main() {

    int board1[] = {0, 3, 80, 6, 57, 10};
    int board2[] = {0, 6, 8, 12, 4, 7, 9, 3, 1, 5, 9, 3, 11};

    int cost = jumpIt(board1, 0, 5);
    cout << "The lowest cost for board1 is: " << cost << endl;

    cost = jumpIt(board2, 0, 12);
    cout << "The lowest cost for board2 is: " << cost << endl;

    return 0;
}
