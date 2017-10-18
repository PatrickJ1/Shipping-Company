#include "ship.h"
#include <iostream>
#include <string>
using namespace std;
int ship::currentID = 0;

//default constructor for ship objects
ship::ship()
{
	
	crew_capacity = 0;
	ship_name = "Vacant";
}

/* constructor with inputs for ship object*/
ship::ship(int initial_crew_capacity, string inital_ship_name)
{
	shipID = currentID;
	currentID++;
	crew_capacity = initial_crew_capacity;
	ship_name = inital_ship_name;
}

//allows crew capacity to be changed retroactively
void ship::crew_quaters_renevation(int new_crew_capacity)
{
	crew_capacity = new_crew_capacity;
}

//returns crew capacity
int ship::get_crew_amount()
{
	return crew_capacity;
}

// returns ship name
string ship::get_ship_name()
{
	return ship_name;
}

//allows ship name to be changed retroactively
void ship::change_ship_name(string new_name)
{
	ship_name = new_name;
}

//returns ship id
int ship::get_ship_id()
{
	return shipID;
}

//calculates maintenance cost
int ship::get_maintance_cost()
{
	return crew_capacity * 5;
}
