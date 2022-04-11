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
	~Payroll();
	void setHours(double h);
	void setPayRate(double r) { payRate = r; }
	double getHours()const { return hours; }
	double getPayRate()const { return payRate; }
	double getTotal()const { return hours * payRate; }
};