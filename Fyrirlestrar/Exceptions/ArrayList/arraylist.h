#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <string>
using namespace std;

class ArrayListException {
public:
    ArrayListException(string m) : message(m) {}
    string getMessage() const { return message;};
private:
    string message;
};

template <class T>
class ArrayList
{
    public:
        ArrayList(int size);        // Constructor
        ~ArrayList();               // Destructor
        void append (T elem);       // Appends an element at the end of the list
        void next();                // Moves the current position one step right
        void moveToStart();         // Set the current position to the start of the list
        int currPos() const;        // Returns the position of the current element
        int length() const;         // Returns the current length of the list
        T value() const throw (ArrayListException); // Returns the current element

        void clear();               // Clears the contents of the list
        void moveToEnd();           // Sets the current position to the end of the list
        void moveToPos(int pos) throw (ArrayListException);    // Sets the current position to pos
        void prev();                // Moves the current position on step left
        void insert (T elem);       // Inserts an element at the current position
        T remove() throw (ArrayListException); // Removes and return the current element


    protected:
    private:
        void init();        // Initialization
        void doubleSize();  // Doubles the size of the list
        int maxSize;        // Maximum size of list
        int currSize;       // Current number of list items
        int currElemPos;    // Position of the current element of the list
        T* arr;             // A pointer to the array holding the list elements
};

#endif // ARRAYLIST_H
