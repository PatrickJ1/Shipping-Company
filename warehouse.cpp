#include "warehouse.h"
#include "building.h"
#include <iostream>
#include <string>
using namespace std;


/*default constructor, takes in functions and variables from
the building abstract class */
warehouse::warehouse() : building()
{
	no_ship_repair_stations = 0;
	no_truck_loading_bay = 0;
	no_ports = 0;
}

/* Takes in building material, worker capacity, branch location, 
#of shipRepair stations, #of truck loading bays and #of ports
from main function and implements into functions*/
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

//returns #of ship repair stations
int warehouse::get_no_ship_repair_stations()
{
	return no_ship_repair_stations;
}

//allows the #of ship repair stations to be changed retroactively
void warehouse::change_no_ship_repair_stations(int new_no_ship_repair_stations)
{
	no_ship_repair_stations = new_no_ship_repair_stations;
}

//returns #of truck loading bays
int warehouse::get_no_truck_loading_bay()
{
	return no_truck_loading_bay;
}

//allows the #of truck loading bays to be changed retroactively
void warehouse::change_no_truck_loading_bay(int new_no_truck_loading_bay)
{
	no_truck_loading_bay = new_no_truck_loading_bay;
}

//return #of ports
int warehouse::get_no_ports()
{
	return no_ports;
}

//allows the #of ports to be changed retroactively
void warehouse::change__no_ports(int new_no_ports)
{
	no_ports = new_no_ports;
}

//calculates the maintenance cost
int warehouse::get_maintance_cost()
{
	return worker_capacity*5 + no_ship_repair_stations*4
		   + no_ports*3 + no_truck_loading_bay*2;
}
