#pragma once
#include "Property.h"

class House : public Property
{
protected:
	int rooms;
	int floors;
	double garden_area;

public:
	House();
	House(char* paddress, char* powner, double pprice, double parea, int prooms, int pfloors, double garden);
	void Print();

};
