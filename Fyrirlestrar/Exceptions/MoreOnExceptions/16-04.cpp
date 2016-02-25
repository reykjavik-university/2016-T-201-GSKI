//DISPLAY 16.4 Catching Multiple Exceptions
#include <iostream>
#include <string>
using namespace std;

class NegativeNumber
{
public:
    NegativeNumber();
    NegativeNumber(string take_me_to_your_catch_block);
    string get_message();
private:
    string message;
};

class DivideByZero
{};

int main()
{
    int jem_hadar, klingons;
    double portion;


try
    {
        cout << "Enter number of Jem Hadar warriors:\n";
        cin >> jem_hadar;
        if (jem_hadar < 0)
             throw NegativeNumber("Jem Hadar");

        cout << "How many Klingon warriors do you have?\n";
        cin >> klingons;
        if (klingons < 0)
            throw NegativeNumber("Klingons");
        if (klingons != 0)
            portion = jem_hadar/static_cast<double>(klingons);
        else
            throw DivideByZero();
        cout << "Each Klingon must fight "
             << portion << " Jem Hadar.\n";
    }
    catch(NegativeNumber e)
    {
       cout << "Cannot have a negative number of "
             << e.get_message() << endl;
    }
    catch(DivideByZero)
    {
       cout << "Send for help.\n";
    }

    cout << "End of program.\n";
    return 0;
}


NegativeNumber::NegativeNumber()
{}

NegativeNumber::NegativeNumber(string take_me_to_your_catch_block)
    : message(take_me_to_your_catch_block)
 {}

string NegativeNumber::get_message()
{
    return message;
}

