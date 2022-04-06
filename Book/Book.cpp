#include "Book.h"

Book::Book()
{
	isbn = 0;
	title = "";
}

Book::Book(int bookNum, string bookName)
{
	isbn = bookNum;
	title = bookName;
}

Book::~Book() {}

void Book::setIsbn(int isbn)
{
	this->isbn = isbn;
}

void Book::setTitle(string title)
{
	this->title = title;
}

int Book::getIsbn()const
{
	return isbn;
}

string Book::getTitle()const
{
	return title;
}

void Book::display()const
{
	cout << "This books isbn is " << isbn << " and is titled \"" << title << "\".\n";
}