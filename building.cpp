#include "building.h"
#include <iostream>
#include <string>
using namespace std;
int building::currentID = 0;


building::building()
{
	width = 10;
	height = 10;
	building_material = "brick";
	worker_capacity = 3;
	branch_location = "unknown";
	buildingID = currentID;
	currentID++;

}

building::building(int intial_width, int intial_height, string inital_building_material, 
		 int inital_worker_capacity, string inital_branch_location)
{
	width = intial_width;
	height = intial_height;
	building_material = inital_building_material;
	worker_capacity = inital_worker_capacity;
	branch_location = inital_branch_location;
	buildingID = currentID;
	currentID++;
}

void building::change_building_dimentions(int new_width, int new_height)
{
	width = new_width;
	height = new_height; 	
}

int building::get_building_area()
{
	return (width*height);
}

void building::change_building_material(int new_building_material)
{
	building_material = new_building_material;
}

string building::get_building_material()
{
	return building_material;
}

void building::change_worker_capacity(int new_worker_capacity)
{
	worker_capacity = new_worker_capacity;
}

int building::get_worker_capacity()
{
	return worker_capacity;
}

void building::change_branch_location(string new_branch_location)
{
	branch_location = new_branch_location;
}

string building::get_branch_location()
{
	return branch_location;
}

int building::get_ID()
{
	return buildingID;
}

string building::get_building_type()
{
	return "building";
}

int building::number_of_bathroom()
{
	int no_bathroom = worker_capacity/5;
	
	if(no_bathroom == 0)
	{
		no_bathroom = 1;
	}

	return no_bathroom;
}

int building::get_maintance_cost()
{
	return (width*height + worker_capacity*5);
}

