#pragma once
#include "Automobile.h"

class Car : public Automobile
{
private:
	int doors;

public:
	Car();
	Car(string carMake, int carModel, int carMileage, double carPrice, int carDoors);
	int getDoors()const;
	void setDoors(int carDoors);
};