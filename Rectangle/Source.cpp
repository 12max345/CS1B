#include "Rectangle.h"

int main()
{
	/* Rectangle* ptr = nullptr;

	ptr = new Rectangle; */

	Rectangle box;
	Rectangle* ptr;
	ptr = &box;

	double recWidth = 0.0;
	double recLength = 0.0;

	cout << "This will calculate the area of a rectangle.\n";
	cout << "Width: ";
	cin >> recWidth;

	cout << "Length: ";
	cin >> recLength;

	ptr->setWidth(recWidth);
	ptr->setLength(recLength);

	cout << "Here is the area of the rectangle.\n";

	cout << "Width: " << ptr->getWidth() << endl;
	cout << "Length: " << ptr->getLength() << endl;
	cout << "Area: " << ptr->getArea() << endl;

	delete ptr;
	ptr = nullptr;


	return 0;
}