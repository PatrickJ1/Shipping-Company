#ifndef BUILDING_H
#define BUILDING_H
#include <iostream>
#include <string>
#include "cost.h"

class building : public cost
{
	
	std::string building_material;
	std::string branch_location;
	int buildingID;
	static int currentID;

protected:

	int width;
	int height;
	int worker_capacity;
	
public:
	building();
	building(int intial_width, int intial_height,std::string inital_building_material, 
		     int inital_worker_capacity, std::string inital_branch_location);
	void change_building_dimentions(int new_width, int new_height);
	int get_building_area();
	void change_building_material(int new_building_material);
	std::string get_building_material();
	void change_worker_capacity(int new_worker_capacity);
	int get_worker_capacity();
	void change_branch_location(std::string new_branch_location);
	std::string get_branch_location();
	int get_ID();
	virtual std::string get_building_type();
	int number_of_bathroom();
	int get_maintance_cost();



	//~building();
	
};

#endif 