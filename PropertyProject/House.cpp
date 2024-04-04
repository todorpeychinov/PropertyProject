#include "House.h"

House::House() : Property()
{
	rooms = 0;
	floors = 0;
	garden_area = 0;
}

House::House(char* paddress, char* powner, double pprice, double parea, int prooms, int pfloors, double garden) :
	Property(paddress, powner, pprice, parea)
{
	rooms = prooms;
	floors = pfloors;
	garden_area = garden;
}

void House::Print()
{
	printf("\nAddress: %s\n", address);
	printf("Owner: %s\n", owner);
	printf("Price: $%.2f\n", price);
	printf("Area: %.2f meters2\n", area);
	printf("Rooms: %d\n", rooms);
	printf("Floor: %d\n", floors);
	printf("Garden area: %.2f meters2\n", garden_area);
}

