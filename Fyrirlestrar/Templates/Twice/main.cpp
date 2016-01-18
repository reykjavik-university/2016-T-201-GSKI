#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
void twiceIt(T& data) {
    data = data*2;
}

template <class T>
T twice(T data) {
    return data*2;
}

template <class T>
void PrintTwice(T data)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Twice is: " <<  twice(data) << endl;
}

template <class T>
T add(const T& val1, const T& val2) {
    return val1 + val2;
}


int main()
{
    PrintTwice(120); // 240
    PrintTwice(120.3); // 240.6

    int val = 10;
    twiceIt(val);
    cout << val << endl;

    int val1 = 5;
    int val2 = 12;
    int result = add(val1, val2);
    cout << result << endl;

    string str1 = "jon";
    string str2 = "jona";
    string strResult = add(str1, str2);
    cout << strResult << endl;

    //PrintTwice("prufa");

    return 0;
}
