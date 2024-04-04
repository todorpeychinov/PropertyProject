#include "Plot.h"
#include <iostream>



Plot::Plot() : Property()
{
	water = false;
	electricity = false;
	road = false;
}

Plot::Plot(char* paddress, char* powner, double pprice, double parea, bool pwater, bool pelectricity, bool proad) :
	Property(paddress, powner, pprice, parea)
{
	water = pwater;
	electricity = pelectricity;
	road = proad;
}

void Plot::Print()
{
	printf("\nAddress: %s\n", address);
	printf("Owner: %s\n", owner);
	printf("Price: $%.2f\n", price);
	printf("Area: %.2f meters2\n", area);
	std::cout << std::boolalpha;
	std::cout << "Water supply: " << water << std::endl;
	std::cout << "Electricity availabilty: " << electricity << std::endl;
	std::cout << "Nearby road available: " << road << std::endl;

}
