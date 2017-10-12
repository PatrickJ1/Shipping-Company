#include "ship.h"
#include "carrier.h"
#include <iostream>
#include <string>
using namespace std;

//default carrier ship initialiser
carrier::carrier() : ship()
{
	storage_capacity =0;
}

//takes in storage capacity, crew capacity and ship name from the main function and implements it
carrier::carrier(int initial_storage_capacity,int initial_crew_capacity, string inital_ship_name) : ship(initial_crew_capacity, inital_ship_name)
{
	storage_capacity = initial_storage_capacity;
}

//returns the storage capacity
int carrier::get_storage_capacity()
{
	return storage_capacity;
}

//Allows the storage capacity to be modified
void carrier::ship_capactiy_renevation(int new_stroage_capacity)
{
	storage_capacity = new_stroage_capacity;
}

//calculates the maintenance cost and returns it
int carrier::get_maintance_cost()
{
	int cost = storage_capacity*5 + crew_capacity*10;

	return cost;
}
