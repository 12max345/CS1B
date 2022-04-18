#pragma once
#include "Book.h"

class Fantasy : public Book
{
private:
	string author;

public:
	Fantasy();
	Fantasy(string a, string t, float w);
	~Fantasy();
	float calcRetail();
};