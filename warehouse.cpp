#include "warehouse.h"
#include "building.h"
#include <iostream>
#include <string>
using namespace std;

warehouse::warehouse() : building()
{
	no_ship_repair_stations = 0;
	no_truck_loading_bay = 0;
	no_ports = 0;
}

warehouse::warehouse(string inital_building_material, 
		      		 int inital_worker_capacity, 
		      		 string inital_branch_location, 
		      		 int initail_no_ship_repair_stations,
		             int inital_no_truck_loading_bay,
		             int inital_no_ports) : building(
		             inital_building_material, 
		      		 inital_worker_capacity, 
		      		 inital_branch_location)
					
{
	no_ship_repair_stations = initail_no_ship_repair_stations;
	no_truck_loading_bay = inital_no_truck_loading_bay;
	no_ports = inital_no_ports;
}

int warehouse::get_no_ship_repair_stations()
{
	return no_ship_repair_stations;
}

void warehouse::change_no_ship_repair_stations(int new_no_ship_repair_stations)
{
	no_ship_repair_stations = new_no_ship_repair_stations;
}

int warehouse::get_no_truck_loading_bay()
{
	return no_truck_loading_bay;
}

void warehouse::change_no_truck_loading_bay(int new_no_truck_loading_bay)
{
	no_truck_loading_bay = new_no_truck_loading_bay;
}

int warehouse::get_no_ports()
{
	return no_ports;
}

void warehouse::change__no_ports(int new_no_ports)
{
	no_ports = new_no_ports;
}

int warehouse::get_maintance_cost()
{
	return worker_capacity*5 + no_ship_repair_stations*4
		   + no_ports*3 + no_truck_loading_bay*2;
}