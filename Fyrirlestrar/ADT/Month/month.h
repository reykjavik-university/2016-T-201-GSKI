#ifndef MONTH_H
#define MONTH_H

#include <iostream>
using namespace std;

class Month
{
    public:
        enum MonthNumber {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
        Month();
        Month(MonthNumber mnum);
        void nextMonth();
        void previousMonth();

        friend ostream& operator<<(ostream& out, const Month& month);

    protected:
    private:
        MonthNumber _mnum;
        //int _mnum;
};

#endif // MONTH_H
