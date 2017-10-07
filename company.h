#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>
#include "ship.h"
#include "building.h"

class company
{
private:
	int max_number_of_ships;
	int max_number_of_buildings;

	//tracker in array
	int current_ship; 
	int current_building;

	//int number_of_ports;
	std::string company_name;
	ship *ship_store_pointer;
	building *building_store_pointer;
public:
	company();
	company(int initial_number_of_ships,
			std::string inital_company_name,
			int inital_max_number_of_ships,
			int inital_max_number_of_buildings);
	void change_company_name(std::string new_company_name);
	std::string get_name();
	void add_ship(ship new_ship);
	void add_building(building new_building);
	ship* get_ships(); // return first address of array
	building* get_buildings(); //return first address of array
	int get_no_ships();
	int get_no_buildings();
	void renevate_ship_storage_capability(int new_max_number_of_ships);
	void rescale_building_budget(int new_max_number_of_buildings);
	void remove_ship(int id_of_ship);
	building* remove_building(int id_of_building);
	//~company();
	
};
#endif 