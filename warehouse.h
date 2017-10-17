#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "building.h"
#include <iostream>
#include <string>

//objects inherits from building class
class warehouse : public building 
{
	int no_ship_repair_stations;
	int no_truck_loading_bay;
	int no_ports;

//initializing functions
public:
	warehouse();
	warehouse(std::string inital_building_material, 
		      int inital_worker_capacity, 
		      std::string inital_branch_location, 
		      int initail_no_ship_repair_stations,
		      int inital_no_truck_loading_bay,
		      int inital_no_ports);
	int get_no_ship_repair_stations();
	void change_no_ship_repair_stations(int new_no_ship_repair_stations);
	int get_no_truck_loading_bay();
	void change_no_truck_loading_bay(int new_no_truck_loading_bay);
	int get_no_ports();
	void change__no_ports(int new_no_ports);
	int get_maintance_cost();
	//~warehouse();
	
};
#endif
