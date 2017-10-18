#include "ship.h"
#include "escort.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor pushes extra intput into ship constructor which it inheritace from
escort::escort() : ship()
{
	number_of_soldiers = 0;
	equiptment_of_peace = 0;
}

// input constructor foe escort
escort::escort(int initial_crew_capacity, string inital_ship_name, 
			   int initial_number_of_soldiers, int initial_eqiptment_of_peace)
			   : ship(initial_crew_capacity, inital_ship_name)
{
	number_of_soldiers = initial_number_of_soldiers;
	equiptment_of_peace = initial_eqiptment_of_peace;
}	

//returns #of soldiers in a escort ship
int escort::get_soldiers_amount()
{
	return number_of_soldiers;
}

//returns #of weapons in a escort ship
int escort::get_peace_equiptment_amount()
{
	return equiptment_of_peace;
}

//allows #of weapons to change retroactively
void escort::change_peace_equiptment_amount(int new_equiptment_of_peace)
{
	equiptment_of_peace = new_equiptment_of_peace;
}

//allows #of soldiers to change retroactively
void escort::defence_center_renevation(int new_numbers_of_soldiers)
{
	number_of_soldiers = new_numbers_of_soldiers;
}

//calculates maintenance
int escort::get_maintance_cost()
{
	int cost = crew_capacity*10 + number_of_soldiers*15 
	+ equiptment_of_peace *2.5; 

	return cost;
}

