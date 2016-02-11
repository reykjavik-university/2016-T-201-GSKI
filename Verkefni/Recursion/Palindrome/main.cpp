#include <iostream>
#include <cstring>
#include "palindrome.h"

using namespace std;

int main()
{
    char a[] = "racecar";
    char b[] = "5885";
    char c[] = "blalab";

    if (palindrome(a, 0, strlen(a)-1)) {
        cout << a << " is a palindrome" << endl;
    }

    if (palindrome(b, 0, strlen(b)-1)) {
        cout << b << " is a palindrome" << endl;
    }

    if (palindrome(c, 0, strlen(c)-1)) {
        cout << c << " is a palindrome" << endl;
    }

    return 0;
}
