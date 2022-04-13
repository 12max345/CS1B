#include <iomanip>
#include "Car.h"
#include "SUV.h"
#include "Truck.h"

int main()
{
	Car car("BMW", 2007, 50000, 15000, 4);
	Truck truck("Toyota", 2006, 40000, 1200.00, "4WD");
	SUV suv("Volvo", 2005, 30000, 18000.00, 5);

	cout << fixed << showpoint << setprecision(2);

	cout << "We have the following car in inventory:\n"
		<< car.getModel() << " " << car.getMake()
		<< " with " << car.getDoors() << " doors and "
		<< car.getMileage() << " miles.\nPrice: $"
		<< car.getPrice() << endl << endl;
	cout << "We have the following car in inventory:\n"
		<< truck.getModel() << " " << truck.getMake()
		<< " with " << truck.getDriveType()
		<< " drive type and " << truck.getMileage()
		<< " miles. \nPrice: $" << truck.getPrice()
		<< endl << endl;
	cout << "We have the following SUV in inventory:\n"
		<< suv.getModel() << " " << suv.getMake()
		<< " with " << suv.getMileage() << " miles and "
		<< suv.getPassengers() << " passenger capacity.\n"
		<< "Price: $" << suv.getPrice() << endl << endl;

	Car car_Ford;

	car_Ford.setMake("Ford");
	car_Ford.setModel(2001);
	car_Ford.setMileage(99999);
	car_Ford.setDoors(12);
	car_Ford.setPrice(9999.99);

	cout << "We have the following car in inventory:\n"
		<< car_Ford.getModel() << " " << car_Ford.getMake()
		<< " with " << car_Ford.getDoors() << " doors and "
		<< car_Ford.getMileage() << " miles.\nPrice: $"
		<< car_Ford.getPrice() << endl << endl;

	return 0;
}