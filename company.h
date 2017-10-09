#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>
#include "ship.h"
#include "carrier.h"
#include "escort.h"
#include "building.h"
#include "office.h"
#include "warehouse.h"

class company
{
private:
	int max_number_of_ships;
	int max_number_of_carriers;
	int max_number_of_escorts;
	
	int max_number_of_buildings;
	int max_number_of_offices;
	int max_number_of_warehouses; 

	//tracker in array
	int current_ship; 
	int current_carrier;
	int current_escort;

	int current_building;
	int current_office;
	int current_warehouse;

	//int number_of_ports;
	std::string company_name;

	ship *ship_store_pointer;
	carrier *carrier_store_pointer;
	escort *escort_store_pointer;

	building *building_store_pointer;
	office *office_store_pointer;
	warehouse *warehouse_store_pointer;
public:
	company();
	company(std::string inital_company_name,
			int inital_max_number_of_ships,
			int inital_max_number_of_carriers,
			int inital_max_number_of_escorts,
			int inital_max_number_of_buildings,
			int inital_max_number_of_offices,
			int inital_max_number_of_warehouses);
	void change_company_name(std::string new_company_name);
	std::string get_name();
	void add_ship(ship new_ship);
	void add_carrier(carrier new_carrier);
	void add_escort(escort new_escort);
	void add_building(building new_building);
	void add_office(office new_office);
	void add_warehouse(warehouse new_warehouse);
	ship* get_ships(); // return first address of array
	carrier* get_carrier();
	escort* get_escort();
	building* get_buildings(); //return first address of array
	office* get_office();
	warehouse* get_warehouse();
	int get_no_ships();
	int get_no_carrier();
	int get_no_escort();
	int get_no_buildings();
	int get_no_office();
	int get_no_warehouse();
	void renevate_ship_storage_capability(int new_max_number_of_ships);
	void rescale_building_budget(int new_max_number_of_buildings);
	void remove_ship(int id_of_ship);
	building* remove_building(int id_of_building);
	//~company();
	
};
#endif 