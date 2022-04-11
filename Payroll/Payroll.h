#pragma once

#include <iostream>

using namespace std;

class Payroll
{
private:
	double hours;
	double payRate;

public:
	Payroll() { hours = 0.0; payRate = 0.0; }
	Payroll(double h, double r);
	~Payroll();
	void setHours(double hours);
	void setPayRate(double payRate);
	double getHours();
	double getPayRate();
};