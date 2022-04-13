#include "SUV.h"

SUV::SUV(string suvMake, int suvModel, int suvMileage, double suvPrice, int suvPassengers) : Automobile(suvMake, suvModel, suvMileage, suvPrice)
{
	passengers = suvPassengers;
}

int SUV::getPassengers()const
{
	return passengers;
}