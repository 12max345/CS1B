#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0.0;
	length - 0.0;
	cout << "Med is calling.\n";
}

Rectangle::Rectangle(double w, double l)
{
	width = w;
	length = l;
}

Rectangle::~Rectangle()
{
	cout << "Med is not here.\n";
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setLength(double l)
{
	length = l;
}