#pragma once
#include <iostream>

using namespace std;

class CellPhone
{
private:
	string model;
	float price;
	static int count;

public:
	CellPhone();
	CellPhone(string model, float price);
	~CellPhone();
	void setModel(string model);
	void setPrice(float price);
	string getModel()const;
	float getPrice()const;
	static int getCount();
	void showPhone()const;
	bool operator>(CellPhone& price);
	bool operator>(float PhonePrice);
	double operator+(CellPhone& phone);
	friend ostream& operator<<(ostream& screen, CellPhone& phone);
	friend void comparePrices(CellPhone& phone1, CellPhone& phone2);
};
