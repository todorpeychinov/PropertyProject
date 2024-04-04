#include "Apartment.h"

Apartment::Apartment() :Property()
{
	rooms = 0;
	floor = 0;

}

Apartment::Apartment(char* paddress, char* powner, double pprice,
	double parea, int prooms, int pfloor) :Property(paddress, powner, pprice, parea)
{
	rooms = prooms;
	floor = pfloor;
}

void Apartment::Print()
{
	printf("\nAddress: %s\n", address);
	printf("Owner: %s\n", owner);
	printf("Price: $%.2f\n", price);
	printf("Area: %.2f meters2\n", area);
	printf("Rooms: %d\n", rooms);
	printf("Floor: %d\n", floor);
}




