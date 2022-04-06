#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int isbn;
	string title;

public:
	Book();
	Book(int bookNum, string bookName);
	~Book();

	void setIsbn(int isbn);
	void setTitle(string title);
	int getIsbn()const;
	string getTitle()const;
	void display()const;
};