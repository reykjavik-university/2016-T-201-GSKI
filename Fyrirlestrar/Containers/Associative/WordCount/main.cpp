// Word frequencies -- using map

// Write a program that read words from standard input (until the word "QUIT")
// and stores the word frequencies in a map
// Finally use an iterator to display the results

#include <iostream>
#include <map>
using namespace std;

void readWords(map<string,int>& theMap) {
    string word;
    cin >> word;
    while (word != "QUIT") {

        theMap[word]++;
        cin >> word;
    }
}

void print(const map<string,int>& theMap) {

    map<string,int>::const_iterator it;
    for (it = theMap.begin(); it != theMap.end(); it++) {
        cout << it->second << " " << it->first << endl;
    }
}

int main() {

    map<string,int> freq;

    readWords(freq);
    print(freq);

    return 0;
}
