#pragma once

#include <iostream>

using namespace std;

class Automobile 
{
private:
	string make;
	int model;
	int mileage;
	double price;

public:
	Automobile();
	Automobile(string autoMake, int autoModel, int autoMileage, double autoPrice);
	~Automobile();
	string getMake()const;
	int getModel()const;
	int getMileage()const;
	double getPrice()const;
	void setMake(string autoMake);
	void setModel(int autoModel);
	void setMileage(int autoMileage);
	void setPrice(double autoPrice);
};