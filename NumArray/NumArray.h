#pragma once

#include <iostream>

using namespace std;

class NumArray
{
private:
	int size;
	double* arrayPointer;

public:
	NumArray(int);
	~NumArray();
	void setCell(int, double);
	int getCell(int numCell);
	double getHighest()const;
	double getLowest()const;
	double getAverage()const;

};