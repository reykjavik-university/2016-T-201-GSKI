//DISPLAY 15.6 Implementation for the Derived Class SalariedEmployee
//This is the file salariedemployee.cpp.
//This is the implementation for the class SalariedEmployee.
//The interface for the class SalariedEmployee is in
//the header file salariedemployee.h.
#include <iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;

namespace employeessavitch
{
    SalariedEmployee::SalariedEmployee() : Employee(), salary(0) {
        //deliberately empty
    }
    SalariedEmployee::SalariedEmployee(string the_name, string the_number, double the_weekly_salary)
                     : Employee(the_name, the_number), salary(the_weekly_salary) {
        //deliberately empty
    }

    double SalariedEmployee::get_salary( ) const {
        return salary;
    }

    void SalariedEmployee::set_salary(double new_salary) {
        salary = new_salary;
    }

    void SalariedEmployee::print_check( ) {
        set_net_pay(salary);
        cout << "\n__________________________________________________\n";
        cout << "Pay to the order of " << get_name( ) << endl;
        cout << "The sum of " << get_net_pay( ) << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << get_ssn( ) << endl;
        cout << "Salaried Employee. Regular Pay: "
             << salary << endl;
        cout << "_________________________________________________\n";
    }
}//employeessavitch
