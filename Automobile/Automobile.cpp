#include "Automobile.h"

Automobile::Automobile()
{
	make = " ";
	model = 0;
	mileage = 0;
	price = 0.0;

}

Automobile::Automobile(string autoMake, int autoModel, int autoMileage, double autoPrice)
{
	make = autoMake;
	model = autoModel;
	mileage = autoMileage;
	price = autoPrice;
}

Automobile::~Automobile() {}

string Automobile::getMake()const
{
	return make;
}

int Automobile::getModel()const
{
	return model;
}

int Automobile::getMileage()const
{
	return mileage;
}

double Automobile::getPrice()const
{
	return price;
}

void Automobile::setMake(string autoMake)
{
	make = autoMake;
}

void Automobile::setModel(int autoModel)
{
	model = autoModel;
}

void Automobile::setMileage(int autoMileage)
{
	mileage = autoMileage;
}

void Automobile::setPrice(double autoPrice)
{
	price = autoPrice;
}