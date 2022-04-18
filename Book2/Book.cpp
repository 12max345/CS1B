#include "Book.h"

Book::Book()
{
	title = "";
	wholesaleCost = 0.0;
}

Book::Book(string t, float w)
{
	title = t;
	wholesaleCost = w;
}

Book::~Book() {}

void Book::setTitle(string t)
{
	title = t;
}

void Book::setWholesaleCost(float w)
{
	wholesaleCost = w;
}

string Book::getTitle()const
{
	return title;
}

float Book::getWholesaleCost()const
{
	return wholesaleCost;
}

float Book::calcRetail()
{
	return 1.5 * wholesaleCost;
}

void Book::showBook()
{
	cout << "Title: " << title << ".\n"
		<< "Retail Price of " << calcRetail() << ".\n\n";
}