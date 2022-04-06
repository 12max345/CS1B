#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0.0;
	length - 0.0;
	cout << "Med is calling.\n";
}

Rectangle::Rectangle(double w, double l)
{
	w = width;
	l = length;
}

Rectangle::~Rectangle()
{
	cout << "Med is not here.\n";
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setLength(double length)
{
	length = l;
}