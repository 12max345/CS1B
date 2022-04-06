#include "Book.h"

int main()
{
	Book book;
	Book book1(34572, "Harry Potter");

	int booksNum = 0;
	string booksName = "";

	cout << "Please enter information about book a book.\n";
	cout << "ISBN: ";
	cin >> booksNum;
	cin.ignore(10000, '\n');

	cout << "Title: ";
	getline(cin, booksName);

	book.setIsbn(booksNum);
	book.setTitle(booksName);

	

	cout << "Here is the information about the books.\n\n";

	book.display();
	book1.display();

	return 0;
}