#include <algorithm>
#include "set.h"
using namespace std;

Set::Set()
{
}

bool Set::exist(int num) {
    //vector<int>::iterator it;
    //it = find(data.begin(), data.end(), num);
    //return (it != data.end());

    for (unsigned int i = 0; i < data.size(); i++)
        if (num == data[i])
            return true;
    return false;
}

void Set::insert(int num) {

    if (!exist(num))
        data.push_back(num);
}

void Set::remove(int num) {
    //vector<int>::iterator it;
    //it = find(data.begin(), data.end(), num);
    //if (it != data.end())
    //    data.erase(it, it+1);

    for (unsigned int i = 0; i < data.size(); i++)
        if (num == data[i]) {
            for (unsigned int j = i+1; j < data.size(); j++)
                data[j-1] = data[j];
            data.pop_back();
            return;
        }
}

 ostream& operator << (ostream& out, const Set& aSet) {
    for (unsigned int i = 0; i < aSet.data.size(); i++)
        out << aSet.data[i] << " ";
    out << endl;

    return out;
 }
