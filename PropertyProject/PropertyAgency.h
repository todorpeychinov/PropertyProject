#pragma once

#include "Property.h"
#include "Apartment.h"
#include "House.h"
#include "Plot.h"

class PropertyAgency
{
	char Agency_name[20];
	Property* PProperties [100];
	int property_count;

public:
	PropertyAgency();
	PropertyAgency(char* agency_name);
	int Add(Property* property);
	int Delete(char* paddress);
	int Search(double start_price, double end_price);
	void Print(char* type);


};

