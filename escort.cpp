#include "ship.h"
#include "escort.h"
#include <iostream>
#include <string>
using namespace std;

escort::escort() : ship()
{
	number_of_soldiers = 0;
	equiptment_of_peace = 0;
}

//intialises the crew capacity, ship name, soldier numbers and weapons from the main function
escort::escort(int initial_crew_capacity, string inital_ship_name, 
			   int initial_number_of_soldiers, int initial_eqiptment_of_peace)
			   : ship(initial_crew_capacity, inital_ship_name)
{
	number_of_soldiers = initial_number_of_soldiers;
	equiptment_of_peace = initial_eqiptment_of_peace;
}	

int escort::get_soldiers_amount()
{
	return number_of_soldiers;
}

int escort::get_peace_equiptment_amount()
{
	return equiptment_of_peace;
}

void escort::change_peace_equiptment_amount(int new_equiptment_of_peace)
{
	equiptment_of_peace = new_equiptment_of_peace;
}

void escort::defence_center_renevation(int new_numbers_of_soldiers)
{
	number_of_soldiers = new_numbers_of_soldiers;
}

int escort::get_maintance_cost()
{
	int cost = crew_capacity*10 + number_of_soldiers*15 
	+ equiptment_of_peace *2.5; 

	return cost;
}

