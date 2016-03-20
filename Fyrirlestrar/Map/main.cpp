#include <iostream>
#include "mymap.cpp"

using namespace std;

void display(MyMap<string, int>& months) {
    MyMap<string, int>::iterator it;
    for (it = months.begin(); it != months.end(); it++)
        cout << it->first << "->" << it->second << endl;
    cout << endl;
}

int main()
{
    MyMap<string, int> months;

    months["january"] = 31;
    months["february"] = 28;
    months["march"] = 31;
    months["april"] = 30;
    months["may"] = 31;
    months["june"] = 30;
    months["july"] = 31;
    months["august"] = 31;
    months["september"] = 30;
    months["october"] = 31;
    months["november"] = 30;
    months["december"] = 31;

    cout << "Map size: " << months.size() << endl;
    if (months.empty())
        cout << "Map is empty!" << endl;
    else
        cout << "Map is not empty!" << endl;

    cout << "june -> " << months["june"] << endl;
    cout << "blabla -> " << months["blabla"] << endl;
    cout << endl;

    display(months);

    MyMap<string, int>::iterator it;
    it = months.find("blabla");
    months.erase(it);

    display(months);

    return 0;
}
