#include "ship.h"
#include "carrier.h"
#include <iostream>
#include <string>
using namespace std;

carrier::carrier() : ship()
{
	storage_capacity =0;
}

carrier::carrier(int initial_storage_capacity,int initial_crew_capacity, 
				 string inital_ship_name) : ship(initial_crew_capacity, 
				 								 inital_ship_name)
{
	storage_capacity = initial_storage_capacity;
}

int carrier::get_storage_capacity()
{
	return storage_capacity;
}

void carrier::ship_capactiy_renevation(int new_stroage_capacity)
{
	storage_capacity = new_stroage_capacity;
}

int carrier::get_maintance_cost()
{
	int cost = storage_capacity*5 + crew_capacity*10;

	return cost;
}