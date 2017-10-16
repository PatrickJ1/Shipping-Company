#include "building.h"
#include <iostream>
#include <string>
using namespace std;
int building::currentID = 0;

//default building initialiser
building::building()
{
	building_material = "brick";
	worker_capacity = 3;
	branch_location = "unknown";

}

//takes in material, capacity and location parameters from main function and implements into code
building::building(string inital_building_material, 
				   int inital_worker_capacity, 
				   string inital_branch_location)
{
	building_material = inital_building_material;
	worker_capacity = inital_worker_capacity;
	branch_location = inital_branch_location;
	buildingID = currentID;
	currentID++;
}

//allows building material to be changed
void building::change_building_material(int new_building_material)
{
	building_material = new_building_material;
}

//returns building material
string building::get_building_material()
{
	return building_material;
}

//allows worker capacity to be changed
void building::change_worker_capacity(int new_worker_capacity)
{
	worker_capacity = new_worker_capacity;
}

//returns worker capacity
int building::get_worker_capacity()
{
	return worker_capacity;
}

//changes branch location
void building::change_branch_location(string new_branch_location)
{
	branch_location = new_branch_location;
}

//returns branch location
string building::get_branch_location()
{
	return branch_location;
}

//returns building ID
int building::get_ID()
{
	return buildingID;
}

//returns the building type
string building::get_building_type()
{
	return "building";
}

//determines the number of bathrooms based on the number of workers
int building::number_of_bathroom()
{
	int no_bathroom = worker_capacity/5;
	
	if(no_bathroom == 0)
	{
		no_bathroom = 1;
	}

	return no_bathroom;
}

//determines maintenance cost
int building::get_maintance_cost()
{
	return (worker_capacity*5);
}

