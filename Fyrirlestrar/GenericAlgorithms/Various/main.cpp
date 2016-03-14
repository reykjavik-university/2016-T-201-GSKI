#include <iostream>
#include <algorithm>

using namespace std;

void display(vector<int>& v) {
    vector<int>::const_iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

bool greaterThanFive(int i) {
    return i > 5;
}

template <class I, class P, class T>
void myReplace_if(I first, I last, P pred, const T& newValue) {

    while (first != last) {
        if (pred(*first))
            *first = newValue;
        ++first;
    }
}

int main()
{
    const int MAX = 10;
    const int SEARCH = 5;
    const int COPY = 3;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < MAX; i++) {
        v1.push_back(i);
        v2.push_back(i);
    }

    display(v1);
    display(v2);

    vector<int>::const_iterator it;
    it = find(v1.begin(), v1.end(), SEARCH);
    if (it != v1.end()) {
        copy(it, it+COPY, v2.begin());
        display(v2);
    }

    cout << SEARCH << " is found " << count(v2.begin(), v2.end(), SEARCH) << " times in vector v2" << endl;

    myReplace_if(v2.begin(), v2.end(), greaterThanFive, 100);
    display(v2);

    random_shuffle(v1.begin(), v1.end());
    display(v1);

    return 0;
}
