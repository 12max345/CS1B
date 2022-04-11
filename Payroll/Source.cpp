#include "Payroll.h"

int main()
{
	double hours = 0.0;
	double rate = 0.0;

	const int NUM_EMPLOYEES = 7;

	Payroll employees[NUM_EMPLOYEES];

	cout << "Enter hours worked and pay rate"
		<< " for " << NUM_EMPLOYEES << " employees:\n";

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "\nEmployee #" << i + 1 << " pay rate: ";
		cin >> rate;
		employees[i].setPayRate(rate);

		cout << "\nEmployee #" << i + 1 << " hours worked: ";
		cin >> hours;
		employees[i].setHours(hours);
	}

	cout << "Total pay:\n";

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "\nEmployee #" << i + 1 << ": ";
		cout << employees[i].getTotal();
	}


	return 0;
}