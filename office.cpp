#include "building.h"
#include "office.h"
#include <iostream>
#include <string>
using namespace std;

/*default constructor ofr office which also uses building cunstuctor 
which it inheritace from*/
office::office() : building()
{
	no_of_office_spaces = 0;
	no_of_meeting_rooms =0;
}

/* construtor with inputs for an office object*/
office::office(int inital_no_of_office_spaces, 
		       int inital_no_of_meeting_rooms, 
		       string inital_building_material, 
		       int inital_worker_capacity, 
		       string inital_branch_location) 
		       : building(inital_building_material, 
		                  inital_worker_capacity, 
		                  inital_branch_location) 
{
	no_of_office_spaces = inital_no_of_office_spaces;
	no_of_meeting_rooms = inital_no_of_meeting_rooms;
}

//allows for the office space to be changed retroactively
void office::renevate_office_spaces(int new_no_of_office_spaces)
{
	no_of_office_spaces = new_no_of_office_spaces;
}

//returns #of office spaces
int office::get_no_of_office_spaces()
{
	return no_of_office_spaces;
}

//allows for the office space to be changed retroactively
void office::renevate_meeting_rooms(int new_no_of_meeting_rooms)
{
	no_of_meeting_rooms = new_no_of_meeting_rooms;
}

//returns #of meeting rooms
int office::get_no_of_meeting_rooms()
{
	return no_of_meeting_rooms;
}

//returns office name
string office::get_building_type()
{
	return "office";
}

//calculates maintenance cost
int office::get_maintance_cost()
{
	int cost = no_of_office_spaces * 5 + no_of_meeting_rooms*4
				+ worker_capacity*5 ; 
}

