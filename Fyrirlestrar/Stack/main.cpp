#include <iostream>
#include "Stack.cpp"
using namespace std;

void test1() {
    Stack<char> myStack;

    myStack.push('a');
    myStack.push('b');
    myStack.push('c');
    cout << "The content of stack inside test1 is " << myStack;
}

template <class T>
void test2(Stack<T> myStack) {

    myStack.push('x');
    myStack.push('x');
    myStack.push('x');
    cout << "The content of stack inside test2 is " << myStack;
}

int main( )
{
    test1();

    Stack<char> s;
    char next;

    cout << "Enter a word: ";
    cin.get(next);
    while (next != '\n')
    {
        s.push(next);
        cin.get(next);
    }

    Stack<char> s2(s);

    cout << "Written backward that is: ";
    while ( !s.empty() )
        cout << s.pop();
    cout << endl;

    cout << "Contents of first stack after pop(): " << s;

    cout << "Contents of copy before calling test2: " << s2;
    test2(s2);
    cout << "Contents of copy after calling test2: " << s2;

    return 0;
}


