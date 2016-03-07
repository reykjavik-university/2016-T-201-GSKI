#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;
    // Add some elements to myIntVector
    myVector.push_back(1);
    myVector.push_back(4);
    myVector.push_back(8);

    for(unsigned int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;

    for(it = myVector.begin(); it != myVector.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
