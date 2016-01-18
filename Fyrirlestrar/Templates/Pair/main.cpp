#include <iostream>
#include "pair.cpp"

using namespace std;

template <class T>
T addUp(const Pair<T>& thePair)
{
    return thePair.getFirst() + thePair.getSecond();
}

int main()
{
    Pair<int> score;
    score.setFirst(3);
    score.setSecond(1);

    Pair<char> seats('A', 'B');

    cout << score.getFirst() << endl;
    cout << seats.getSecond() << endl;

    cout << addUp(score) << endl;
    cout << addUp(seats) << endl;

    Pair<string> names("Hrafn", "Loftsson");
    cout << addUp(names) << endl;

    return 0;
}
