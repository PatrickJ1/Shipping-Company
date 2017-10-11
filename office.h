#ifndef OFFICE_H
#define OFFICE_H
#include "building.h"
#include <iostream>
#include <string>

class office : public building
{
	int no_of_office_spaces;
	int no_of_meeting_rooms;
public:
	office();
	office(int inital_no_of_office_spaces, 
		   int inital_no_of_meeting_rooms, 
		   std::string inital_building_material, 
		   int inital_worker_capacity, 
		   std::string inital_branch_location);
	void renevate_office_spaces(int new_no_of_office_spaces);
	int get_no_of_office_spaces();
	void renevate_meeting_rooms(int new_no_of_meeting_rooms);
	int get_no_of_meeting_rooms();
	std::string get_building_type();
	int get_maintance_cost();
	//~office();
	
};
#endif