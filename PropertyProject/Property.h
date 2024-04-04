#pragma once
#include <stdio.h>

class Property
{
protected:
	char address[30];
	char owner[30];
	double price;
	double area;

public:

	Property();
	Property(char* paddress, char* powner, double pprice, double parea);
	virtual void Print();
	double getPrice();
	char* getAddress();
	~Property();

};