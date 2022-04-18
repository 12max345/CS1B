#pragma once
#include "Book.h"

class Fiction : public Book
{
private:
	string genre;

public:
	Fiction();
	Fiction(string g, string t, float w);
	~Fiction();
	float calcRetail();
};