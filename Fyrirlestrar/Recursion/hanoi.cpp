/**************************************************************************

  -> This C++ program solves the Towers of Hanoi problem.
  -> Implemented using recursion.

***************************************************************************/

#include <iostream>
using namespace std;

int numberOfMoves=0;

void move(int n, const char *a, const char* b, const char* c)
// n stands for number of discs
// a stands for source tower
// b stands for intermediate tower
// c stands for destination tower
{
    if (n>0)
    {
        move(n-1,a,c,b);
        // move n-1 disks from source to intermediate tower
        numberOfMoves++;
        cout << "Move " << numberOfMoves << ": " << "Disk " << n << " is moved from " <<a << " to " << c <<endl;
        // move the disk from to source to destination
        move(n-1,b,a,c);
        // move n-1 disks from intermediate to destination
    }
}

int main()
{
    int n;
    const char* stack1 = "A";
    const char* stack2 = "B";
    const char* stack3 = "C";

    cout << "\n**********************************************************\n";
    cout << "This C++ program solves the Towers of Hanoi problem\n";
    cout << "The stacks are A, B and C\n";
    cout << "\n**********************************************************\n";
    cout << "Enter the no. of disks: ";

    cin>>n;
    move(n,stack1, stack2, stack3);

 return 0;
}
