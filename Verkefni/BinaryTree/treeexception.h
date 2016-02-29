#ifndef TREEEXCEPTION_H
#define TREEEXCEPTION_H

#include <string>
using namespace std;

class TreeException {
    public:
        TreeException();
        TreeException(string str) : message(str) {};
        ~TreeException() {};
        string getMessage() const { return message; };
    protected:
    private:
        string message;
};

#endif // TREEEXCEPTION_H
