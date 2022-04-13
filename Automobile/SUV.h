#pragma once
#include "Automobile.h"

class SUV : public Automobile
{
private:
	int passengers;

public:
	SUV(string suvMake, int suvModel, int suvMileage, double suvPrice, int suvPassengers);
	int getPassengers()const;
};