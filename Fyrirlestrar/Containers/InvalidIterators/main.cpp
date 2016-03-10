#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vecArr;
    for(int i = 1; i <= 10; i++)
        vecArr.push_back(i);

    vector<int>::iterator it;
    for(it = vecArr.begin(); it != vecArr.end(); it++)
        cout << *it << " ";

    cout << endl;

    // Erase and element with value 5.
    it = find(vecArr.begin(), vecArr.end(), 5);
    cout << *it << endl;
    if (it != vecArr.end()) {
        vecArr.erase(it);
    }

    // Now iterator 'it' is invalidated because it still points to
    // old location, which has been deleted. So, if you will try to
    // do the use the same iterator then it can show undefined
    // behavior.

    for(; it != vecArr.end(); it++)
        cout << *it << " ";          // Unpredicted Behavior

    return 0;
}
