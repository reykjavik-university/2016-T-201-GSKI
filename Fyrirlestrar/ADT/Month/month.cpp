#include "month.h"

Month::Month()
{
    _mnum = JAN;
    //_mnum = 1;
}

Month::Month(MonthNumber mnum)
{
    _mnum = mnum;
    //_mnum = static_cast<int>(mnum);
}

void Month::nextMonth() {
    if (_mnum == DEC) {
        _mnum = JAN;
    }
    else {
        int mvalue = static_cast<int>(_mnum) + 1;
        _mnum = static_cast<MonthNumber>(mvalue);
    }

    /*if (_mnum == 12) {
        _mnum = 1;
    }
    else {
        _mnum++;
    }*/

}

void Month::previousMonth() {
    if (_mnum == JAN) {
        _mnum = DEC;
    }
    else {
        int mvalue = static_cast<int>(_mnum) - 1;
        _mnum = static_cast<MonthNumber>(mvalue);
    }

    /*if (_mnum == 1) {
        _mnum = 12;
    }
    else {
        _mnum--;
    }*/
}


ostream& operator<<(ostream& out, Month& month) {
    out << month._mnum;

    return out;
}

