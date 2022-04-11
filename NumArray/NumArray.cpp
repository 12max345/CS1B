#include "NumArray.h"

NumArray::NumArray(int s)
{
	arrayPointer = nullptr;
	arrayPointer = new double[s];
	size = s;
}

NumArray::~NumArray() 
{
	if (arrayPointer != nullptr)
	{
		delete[] arrayPointer;
		arrayPointer = nullptr;
	}
}

void NumArray::setCell(int c, double val)
{
	if (arrayPointer != nullptr && c >= 0 && c <= size)
		arrayPointer[c] = val;
	else
		cout << "Invalid data.\n";
	exit(EXIT_FAILURE);
}

int NumArray::getCell(int)
{

}