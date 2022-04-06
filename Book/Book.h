#pragma once

#include <iostream>

using namespace std;

class Book
{
private:
	int isbn;
	string title;

public:
	Book();
	Book(int isbn, string title);
	~Book();

	void setIsbn(int isbn);
	void setTitle(string title);
	int getIsbn(int isbn)const;
	string getTitle(string title)const;
	void display();
};