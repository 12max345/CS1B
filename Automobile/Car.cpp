#include "Car.h"

Car::Car()
{
	doors = 0;
}

Car::Car(string carMake, int carModel, int carMileage, double carPrice, int carDoors) : Automobile(carMake, carModel, carMileage, carPrice)
{
	doors = carDoors;
}

int Car::getDoors()const
{
	return doors;
}

void Car::setDoors(int carDoors)
{
	doors = carDoors;
}