#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
 public:
	Book();
	Book(string anAuthor, string aTitle, string aDate);
	string getAuthor() const;
	string getTitle() const;
	string getDate() const;
	friend bool operator <(const Book &book1, const Book &book2);
 private:
	string author;
	string title;
	string date;
};
#endif // BOOK_H
