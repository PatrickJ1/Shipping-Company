#include "ship.h"
#include <iostream>
#include <string>
using namespace std;
int ship::currentID = 0;

ship::ship()
{
	shipID = currentID;
	currentID++;
	crew_capacity = 0;
	ship_name = "Vacant";
}

ship::ship(int initial_crew_capacity, string inital_ship_name)
{
	shipID = currentID;
	currentID++;
	crew_capacity = initial_crew_capacity;
	ship_name = inital_ship_name;
}

void ship::crew_quaters_renevation(int new_crew_capacity)
{
	crew_capacity = new_crew_capacity;
}

int ship::get_crew_amount()
{
	return crew_capacity;
}

string ship::get_ship_name()
{
	return ship_name;
}

void ship::change_ship_name(string new_name)
{
	ship_name = new_name;
}

int ship::get_ship_id()
{
	return shipID;
}

int ship::get_maintance_cost()
{
	return crew_capacity * 5;
}