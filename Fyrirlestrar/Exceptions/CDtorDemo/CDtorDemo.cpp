#include <iostream>
using namespace std;

class CTest {
public:
    CTest(){};
    ~CTest(){};
    string ShowReason() const { return "Exception in CTest class."; }

};

class CDtorDemo {
public:
    CDtorDemo() {cout << "Constructing CDtorDemo." << endl;};
    ~CDtorDemo() {cout << "Destructing CDtorDemo." << endl;};
    void test() { cout << "Testing in CDtorDemo." << endl; };
};

void MyFunc() throw (CTest) {
    CDtorDemo D;
    cout<< "In MyFunc(). Throwing CTest exception." << endl;
    throw CTest();
    D.test();
}

int main()
{
    cout << "In main." << endl;
    try {
        cout << "In try block, calling MyFunc()." << endl;
        MyFunc();
    }
    catch( CTest e ) {
        cout << "Caught CTest exception type: ";
        cout << e.ShowReason() << endl;
    }
    cout << "Back in main. Execution resumes here." << endl;
    return 0;
}
