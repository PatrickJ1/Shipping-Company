#include "building.h"
#include "office.h"
#include <iostream>
#include <string>
using namespace std;

office::office() : building()
{
	no_of_office_spaces = 0;
	no_of_meeting_rooms =0;
}

office::office(int inital_no_of_office_spaces, 
		       int inital_no_of_meeting_rooms, 
		       int intial_width, int intial_height,
		       string inital_building_material, 
		       int inital_worker_capacity, 
		       string inital_branch_location) 
		       : building(intial_width, intial_height,
		  			      inital_building_material, 
		                  inital_worker_capacity, 
		                  inital_branch_location) 
{
	no_of_office_spaces = inital_no_of_office_spaces;
	no_of_meeting_rooms = inital_no_of_meeting_rooms;
}

void office::renevate_office_spaces(int new_no_of_office_spaces)
{
	no_of_office_spaces = new_no_of_office_spaces;
}

int office::get_no_of_office_spaces()
{
	return no_of_office_spaces;
}

void office::renevate_meeting_rooms(int new_no_of_meeting_rooms)
{
	no_of_meeting_rooms = new_no_of_meeting_rooms;
}

int office::get_no_of_meeting_rooms()
{
	return no_of_meeting_rooms;
}

string office::get_building_type()
{
	return "office";
}

int office::get_maintance_cost()
{
	int cost = no_of_office_spaces * 5 + no_of_meeting_rooms*4
				+ width*height + worker_capacity*5 ; 
}

