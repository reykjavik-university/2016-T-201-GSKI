#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class Stack
{
    public:
        Stack();    //Initializes the object to an empty stack.
        Stack(const Stack& aStack); //Copy constructor.
        ~Stack();   //Destroys the stack and returns all the memory

        void push(T elem);  // Adds elem to the top of the stack
        T pop();            //Returns the top element and removes it
        Node<T>* getTop() const;  // Returns the top node

       // A friend function for writing the contents of aStack to an output stream
        template <typename U>
        friend ostream& operator <<(ostream& outs, const Stack<U>& aStack);

        bool empty() const; //Returns true if the stack is empty.
    private:
        Node<T>* top;
};

#endif //STACK_H

