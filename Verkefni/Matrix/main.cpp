#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    Matrix A(3,3), B(3,3), C(2,3);

    cout << "A:" << endl << A << endl;

    cin >> A;
    cin >> B;
    cin >> C;
    cout << "A:" << endl << A << endl;
    cout << "B:" << endl << B << endl;
    cout << "C:" << endl << C << endl;
    cout << endl;

    Matrix D = A + B;
    cout << "D=A+B:" << endl << D << endl;

    D = C * B;
    cout << "D=C*B:" << endl << D << endl;

    D = C.transpose();
    cout << "D=C.transpose()" << endl << D << endl;

    return 0;
}
