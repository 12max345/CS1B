#pragma once
#include "Automobile.h"

class Truck : public Automobile
{
private:
	string driveType;

public:
	Truck(string truckMake, int truckModel, int truckMileage, double truckPrice, string truckDriveType);
	string getDriveType()const;
};