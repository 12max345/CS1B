#include "Fiction.h"
#include "Fantasy.h"

int main()
{
	Book b1;
	Book b2("For Me The Bell Tolls", 10);
	Fiction F("Mystery", "Murder On The LA Subway", 10);
	Fantasy F1("Med", "Won The Lotto", 10);

	b1.showBook();
	b2.showBook();
	F.showBook();
	F1.showBook();

	b1.setTitle("Maze Runner");
	b1.setWholesaleCost(10);

	b1.showBook();
	

	return 0;
}