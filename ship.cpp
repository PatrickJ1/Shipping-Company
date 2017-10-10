#include "ship.h"
#include <iostream>
#include <string>
using namespace std;
int ship::currentID = 0;

ship::ship()
{
	
	crew_capacity = 0;
	ship_name = "Vacant";
}

ship::ship(int initial_crew_capacity, string inital_ship_name)//takes crew capacity and name from the user function
{
	shipID = currentID;
	currentID++; //increments currentID
	crew_capacity = initial_crew_capacity;
	ship_name = inital_ship_name;
}

void ship::crew_quaters_renevation(int new_crew_capacity)//add new crew capacity from the user function
{
	crew_capacity = new_crew_capacity;
}

int ship::get_crew_amount()
{
	return crew_capacity;
}

string ship::get_ship_name()//returns name from user function
{
	return ship_name;
}

void ship::change_ship_name(string new_name)//change name to boatymcboatface
{
	ship_name = new_name;
}

int ship::get_ship_id()//returns shipID from user function
{
	return shipID;
}

int ship::get_maintance_cost()//creates a lit maintenance cost 
{
	return crew_capacity * 5;
}
