// ****************************************************************
//
// This program implements an in-memory database of books using
// a vector and sorts them using the generic sort function from
// the algorithm library.
// ****************************************************************

#include <vector>
#include <algorithm>
#include "book.h"

using namespace std;

// Function prototypes
void AddNewBook(vector<Book> &bookdata);
void PrintBooks(vector<Book> &bookdata);
void SortBooks(vector<Book> &bookdata);
void PrintMenu();

