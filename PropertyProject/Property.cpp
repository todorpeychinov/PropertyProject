#include <stdio.h>
#include <string.h>
#include "Property.h"

Property::Property()
{
	address[0] = '\0';
	owner[0] = '\0';
	price = 0;
	area = 0;

}

Property::Property(char* paddress, char* powner, double pprice, double parea)
{
	strcpy_s(address, paddress);
	strcpy_s(owner, powner);
	price = pprice;
	area = parea;
}

void Property::Print()
{
	printf("\nAddress: %s\n", address);
	printf("Owner: %s\n", owner);
	printf("Price: $%.2f\n", price);
	printf("Area: %.2f meters2\n", area);
}

double Property::getPrice()
{
	return price;
}

char* Property::getAddress()
{
	return address;
}

Property::~Property()
{

}