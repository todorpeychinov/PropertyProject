

#include <iostream>
#include "PropertyAgency.h"

int main()
{
	char agency_name[] = "Agency1";
	char current_address[] = "2255";
	char current_address2[] = "43255";
	char current_address3[] = "1335";
	char current_owner[] = "George Ivanov";
	char current_owner2[] = "Peter Petrov";
	char current_owner3[] = "Ivan Georgiev";
	char type[] = "Plot";

	PropertyAgency Agency(agency_name);
	Agency.Add(new Apartment(current_address, current_owner, 2555.5, 120, 7, 1));
	Agency.Add(new Apartment(current_address2, current_owner2, 120000, 240, 3, 4));
	Agency.Add(new Apartment(current_address3, current_owner3, 70000, 68, 2, 2));
	Agency.Add(new House(current_address3, current_owner3, 70000, 68, 2, 2, 12.5));
	Agency.Delete(current_address2);
	Agency.Add(new Plot(current_address, current_owner2, 85000, 250, true, false, true));
	Agency.Print(type);

}

