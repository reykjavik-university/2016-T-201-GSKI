#include <iostream>
#include "pair.cpp"

using namespace std;

int main()
{
    Pair<int> score;
    score.setFirst(3);
    score.setSecond(1);

    Pair<char> seats('A', 'B');

    cout << score.getFirst() << endl;
    cout << seats.getSecond() << endl;

    return 0;
}
