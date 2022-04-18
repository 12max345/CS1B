#include "Fiction.h"

Fiction::Fiction()
{
	genre = "";
}

Fiction::Fiction(string g, string t, float w) : Book(t, w)
{
	genre = g;
}

Fiction::~Fiction() {}

float Fiction::calcRetail()
{
	return 2 * getWholesaleCost();
}