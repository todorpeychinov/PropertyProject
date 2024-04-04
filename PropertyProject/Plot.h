#pragma once
#include "Property.h"

class Plot : public Property
{
protected:
	bool water;
	bool electricity;
	bool road;

public:

	Plot();
	Plot(char* paddress, char* powner, double pprice, double parea, bool pwater, bool pelectricity, bool proad);
	void Print();

};
