//DISPLAY 15.2 Implementation for the Base Class Employee
//This is the file: employee.cpp.
//This is the implementation for the class Employee.
//The interface for the class Employee is in the header file employee.h.
#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"
using namespace std;

namespace employeessavitch
{
    Employee::Employee( ) : name("No name yet"), ssn("No number yet"), net_pay(0) {
        //deliberately empty
    }

    Employee::Employee(string the_name, string the_number)
       : name(the_name), ssn(the_number), net_pay(0) {
        //deliberately empty
    }

    string Employee::get_name( ) const {
        return name;
    }

    string Employee::get_ssn( ) const {
        return ssn;
    }

    double Employee::get_net_pay( ) const {
        return net_pay;
    }

    void Employee::set_name(string new_name) {
        name = new_name;
    }

    void Employee::set_ssn(string new_ssn) {
        ssn = new_ssn;
    }

    void Employee::set_net_pay (double new_net_pay) {
        net_pay = new_net_pay;
    }

    void Employee::print_check( ) const {
        cout << "\nERROR: print_check FUNCTION CALLED FOR AN \n"
             << "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n"
             << "Check with the author of the program about this bug.\n";
        exit(1);
    }
}//employeessavitch
