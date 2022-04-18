#pragma once

#include <iostream>

using namespace std;

class Book 
{
private:
	string title;
	float wholesaleCost;

public:
	Book();
	Book(string title, float wholesaleCost);
	~Book();
	void setTitle(string title);
	void setWholesaleCost(float wholesaleCost);
	string getTitle()const;
	float getWholesaleCost()const;
	virtual float calcRetail();
	void showBook();
};