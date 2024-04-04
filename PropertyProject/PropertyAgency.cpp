#include "PropertyAgency.h"
#include <string.h>
#include <stdlib.h>



template<typename Base, typename T>
inline bool instanceof(const T* ptr) {
	return dynamic_cast<const Base*>(ptr) != nullptr;
}

int cf(const void* el1,const void* el2)
{
	Property* p1 = (Property*)el1;
	Property* p2 = (Property*)el2;
	if ((int)(p1->getPrice()) > (int)(p2->getPrice()))
		return 1;
	else if ((int)(p1->getPrice()) < (int)(p2->getPrice()))
		return -1;
	else
		return 0;
}

PropertyAgency::PropertyAgency()
{
	Agency_name[0] = '\0';
	PProperties[0] = NULL;
	property_count = 0;
}

PropertyAgency::PropertyAgency(char* pname)
{
	strcpy_s(Agency_name, pname);
	PProperties[0] = NULL;
	property_count = 0;
}

int PropertyAgency::Add(Property* property)
{
	if (property_count == 100)
		return 0;
	else
	{
		PProperties[property_count] = property;
		property_count++;
		return 1;
	}
}

int PropertyAgency::Delete(char* paddress)
{
	for (int i = 0; i < property_count; i++)
	{
		if (strcmp(PProperties[i]->getAddress(), paddress) == 0)
		{
			delete PProperties[i];
			for (int j = i; j < property_count - 1; j++)
			{
				PProperties[j] = PProperties[j + 1];
			}
			property_count--;
			return 1;
		}
	}
	printf("There is no such a property!");
	return 0;
}

int PropertyAgency::Search(double start_price, double end_price)
{
	for (int i = 0; i < property_count; i++)
	{
		if (PProperties[i]->getPrice() >= start_price && PProperties[i]->getPrice() <= end_price)
		{
			PProperties[i]->Print();
		}
	}
	return 1;
}

void PropertyAgency::Print(char* type)
{
	Property* temp_list[100];
	int help = 0;

	if (strcmp(type, "Apartment") == 0)
	{
		for (int i = 0; i < property_count; i++)
		{
			if (instanceof<Apartment>(PProperties[i]))
			{
				temp_list[help] = PProperties[i];
				help++;
			}
			
		}
	}

	else if (strcmp(type, "House") == 0)
	{
		for (int i = 0; i < property_count; i++)
		{
			if (instanceof<House>(PProperties[i]))
			{
				temp_list[help] = PProperties[i];
				help++;
			}

		}
	}

	else if (strcmp(type, "Plot") == 0)
	{
		for (int i = 0; i < property_count; i++)
		{
			if (instanceof<Plot>(PProperties[i]))
			{
				temp_list[help] = PProperties[i];
				help++;
			}

		}
	}

	qsort(temp_list, help, sizeof(Property*), cf);

	printf("All properties of type %s in ascending order of the price: \n", type);

	for (int i = 0; i < help; i++)
	{
		
			
					temp_list[i]->Print();
		
	}
	
}






