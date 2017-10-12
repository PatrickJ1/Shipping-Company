#include "ship.h"
#include <iostream>
#include <string>
using namespace std;
int ship::currentID = 0;

//default ship initialiser
ship::ship()
{
	
	crew_capacity = 0;
	ship_name = "Vacant";
}

//takes the crew capacity and ship names from the main function and implements it
ship::ship(int initial_crew_capacity, string inital_ship_name)
{
	shipID = currentID;
	currentID++;
	crew_capacity = initial_crew_capacity;
	ship_name = inital_ship_name;
}

//allows the crew capacity to be modified
void ship::crew_quaters_renevation(int new_crew_capacity)
{
	crew_capacity = new_crew_capacity;
}

//returns crew capacity
int ship::get_crew_amount()
{
	return crew_capacity;
}

//returns ship name
string ship::get_ship_name()
{
	return ship_name;
}

//allows ship name to be modified
void ship::change_ship_name(string new_name)
{
	ship_name = new_name;
}

//returns the id of the ship
int ship::get_ship_id()
{
	return shipID;
}
//calculates maintenance cost and returns it
int ship::get_maintance_cost()
{
	return crew_capacity * 5;
}
