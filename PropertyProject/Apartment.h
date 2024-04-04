#pragma once
#include "Property.h"

class Apartment : public Property
{
protected:
	int rooms;
	int floor;

public:
	Apartment();
	Apartment(char* paddress, char* powner, double pprice, double parea,int prooms, int pfloor);
	void Print();


};

