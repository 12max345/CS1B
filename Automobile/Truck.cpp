#include "Truck.h"

Truck::Truck(string truckMake, int truckModel, int truckMileage, double truckPrice, string truckDriveType) : Automobile(truckMake, truckModel, truckMileage, truckPrice)
{
	driveType = truckDriveType;
}

string Truck::getDriveType()const
{
	return driveType;
}