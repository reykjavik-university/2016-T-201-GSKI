#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
using namespace std;

class Set
{
    public:
        Set();
        bool exist(int num);
        void insert(int num);
        void remove(int num);

        friend ostream& operator << (ostream& out, const Set& aSet);
    protected:
    private:
        vector<int> data;
};

#endif // SET_H
