#include "CellPhone.h"

CellPhone::CellPhone()
{
	model = "";
	price = 0.0;
	count++;
}

CellPhone::CellPhone(string model, float price)
{
	this->model = model;
	this->price = price;
	count++;
}

CellPhone::~CellPhone() {}

void CellPhone::setModel(string model)
{
	this->model = model;
}

void CellPhone::setPrice(float price)
{
	this->price = price;
}

string CellPhone::getModel()const
{
	return model;
}

float CellPhone::getPrice()const
{
	return price;
}

int CellPhone::getCount()
{
	return count;
}

void CellPhone::showPhone()const
{
	cout << "Model: " << model << "\n" << "Price: " << price << "\n\n";
}

bool CellPhone::operator>(CellPhone& phone)
{
	return (price > phone.price);
}

bool CellPhone::operator>(float PhonePrice)
{
	return (price > PhonePrice);
}


double CellPhone::operator+(CellPhone& phone)
{
	return (price + phone.price);
}

ostream& operator<<(ostream& screen, CellPhone& phone)
{
	screen << "Model: " << phone.model << endl
		<< "Price: " << phone.price << endl << endl;
	return screen;
}

void comparePrices(CellPhone& phone1, CellPhone& phone2)
{
	if (phone1.getPrice() == phone2.getPrice())
	{
		cout << "They are the same price\n\n";
	}
	else
	{
		cout << "They are different prices\n\n";
	}
}