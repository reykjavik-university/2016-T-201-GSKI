#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
    public:
        ArrayList(int size);        // Constructor
        ~ArrayList();               // Destructor
        void append (int elem);     // Appends an element at the end of the list
        void next();                // Moves the current position one step right
        void moveToStart();         // Set the current position to the start of the list
        int currPos() const;        // Returns the position of the current element
        int length() const;         // Returns the current length of the list
        int value() const;          //Returns the current element

    private:
        int maxSize;        // Maximum size of list
        int currSize;       // Current number of list items
        int currElemPos;    // Position of the current element of the list
        int* arr;           // A pointer to the array holding the list elements
};

#endif // ARRAYLIST_H
