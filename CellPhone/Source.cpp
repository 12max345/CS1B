#include "CellPhone.h"

int CellPhone::count = 0;

int main()
{
	CellPhone samsung;
	CellPhone iPhone("iPhone 13", 1299.99);

	cout << "Number of cellphones: " << CellPhone::getCount() << endl << endl;

	samsung.showPhone();
	iPhone.showPhone();

	samsung.setModel("Samsung Galaxy S7");
	samsung.setPrice(114.99);

	samsung.showPhone();
	iPhone.showPhone();

	if (iPhone > 1000.00)
	{
		cout << "Price of iPhone is greater than $1000.00\n\n";
	}

	double avg = 0.0;
	avg = (samsung + iPhone) / 2.0;

	cout << "The Average Price " << avg << endl << endl;

	comparePrices(samsung, iPhone);
	cout << samsung << endl << iPhone;
}
