#include <string>
#include <iostream>
#include "company.h"
#include "ship.h"
#include "building.h"
using namespace std;

company::company()
{
	company_name = "Vacant";
	max_number_of_ships = 10;
	max_number_of_buildings = 2;
	ship_store_pointer = new ship[max_number_of_ships];
	building_store_pointer = new building[max_number_of_buildings];
	current_ship =0; 
	current_building=0;
	//number_number_of_ports = 0;
}

company::company(int initial_number_of_ships,
			string inital_company_name,
			int inital_max_number_of_ships,
			int inital_max_number_of_buildings)
{
	company_name = inital_company_name;
	max_number_of_ships = inital_max_number_of_ships;
	max_number_of_buildings = inital_max_number_of_buildings;
	ship_store_pointer = new ship[max_number_of_ships];
	building_store_pointer = new building[max_number_of_buildings];
}

void company::change_company_name()
{
	cout<<"Enter new compenay name below: ";
	cin>>company_name;
}

std::string company::get_name()
{
	return company_name;
}

void company::add_ship(ship new_ship)
{
	if(current_ship <max_number_of_ships)
	{
		ship_store_pointer[current_ship] = new_ship;

		current_ship++;
	}
	else
	{
		cout<<"max_ships"<<endl;
	}
	
}

void company::add_building(building new_building)
{
	if(current_building<max_number_of_buildings)
	{
		building_store_pointer[current_building] = new_building;
		current_building++;
	}
	else
	{
		cout<<"max_buildings"<<endl;
	}
}

ship* company::get_ships()
{
	return ship_store_pointer;
}

building* company::get_buildings()
{
	return building_store_pointer;
}

int company::get_no_ships()
{
	return current_ship;
}

int company::get_no_buildings()
{
	return current_building;
}