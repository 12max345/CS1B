#include "Fantasy.h"

Fantasy::Fantasy()
{
	author = "";
}

Fantasy::Fantasy(string a, string t, float w) : Book(t, w)
{
	author = a;
}

Fantasy::~Fantasy() {}

float Fantasy::calcRetail()
{
	return 2.25 * getWholesaleCost();
}