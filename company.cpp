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
	max_number_of_carriers = 3;
	max_number_of_escorts = 5;
	ship_store_pointer = new ship[max_number_of_ships];
	carrier_store_pointer = new carrier[max_number_of_carriers];
	escort_store_pointer = new escort[max_number_of_escorts];
	current_ship =0; 
	current_carrier =0;
	current_escort =0;

	max_number_of_buildings = 5;
	max_number_of_offices = 2;
	max_number_of_warehouses = 1;
	building_store_pointer = new building[max_number_of_buildings];
	office_store_pointer = new office[max_number_of_offices];
	warehouse_store_pointer = new warehouse[max_number_of_warehouses];
	current_building=0;
	current_office = 0;
	current_warehouse=0;
	//number_number_of_ports = 0;
}

company::company(string inital_company_name,
				int inital_max_number_of_ships,
				int inital_max_number_of_carriers,
				int inital_max_number_of_escorts,
				int inital_max_number_of_buildings,
				int inital_max_number_of_offices,
				int inital_max_number_of_warehouses)
{
	company_name = inital_company_name;
	
	max_number_of_ships = inital_max_number_of_ships;
	max_number_of_carriers = inital_max_number_of_carriers;
	max_number_of_escorts = inital_max_number_of_escorts;
	ship_store_pointer = new ship[max_number_of_ships];
	carrier_store_pointer = new carrier[max_number_of_carriers];
	escort_store_pointer = new escort[max_number_of_escorts];
	current_ship =0; 
	current_carrier =0;
	current_escort =0;

	max_number_of_buildings = inital_max_number_of_buildings;
	max_number_of_offices = inital_max_number_of_offices;
	max_number_of_warehouses = inital_max_number_of_warehouses;
	building_store_pointer = new building[max_number_of_buildings];
	office_store_pointer = new office[max_number_of_offices];
	warehouse_store_pointer = new warehouse[max_number_of_warehouses];
	current_building=0;
	current_office = 0;
	current_warehouse=0;
}

void company::change_company_name(string new_company_name)
{
	/*cout<<"Enter new compnay name below: ";
	cin>>company_name;*/

	company_name = new_company_name;
}

std::string company::get_name()
{
	return company_name;
}

void company::add_ship(ship new_ship)
{
	if(current_ship < max_number_of_ships)
	{
		ship_store_pointer[current_ship] = new_ship;

		current_ship++;
	}
	else
	{
		cout<<"max_ships"<<endl;
	}
	
}

void company::add_carrier(carrier new_carrier)
{
	if(current_carrier < max_number_of_carriers)
	{
		carrier_store_pointer[current_carrier] = new_carrier;
		current_carrier++;
	}
	else
	{
		cout<<"max_carriers"<<endl;
	}
}

void company::add_escort(escort new_escort)
{
	if(current_escort < max_number_of_escorts)
	{
		escort_store_pointer[current_escort] = new_escort;
		current_escort++;
	}
	else
	{
		cout<<"max_escort"<<endl;
	}
}

void company::add_building(building new_building)
{
	if(current_building < max_number_of_buildings)
	{
		building_store_pointer[current_building] = new_building;
		current_building++;
	}
	else
	{
		cout<<"max_buildings"<<endl;
	}
}

void company::add_office(office new_office)
{
	if(current_office < max_number_of_offices)
	{
		office_store_pointer[current_office] = new_office;
		current_office++;
	}
	else
	{
		cout<<"max_office"<<endl;
	}
}

void company::add_warehouse(warehouse new_warehouse)
{
	if(current_warehouse < max_number_of_warehouses)
	{
		warehouse_store_pointer[current_warehouse] = new_warehouse;
		current_warehouse++;
	}
	else
	{
		cout<<"max_office"<<endl;
	}
}

ship* company::get_ships()
{
	return ship_store_pointer;
}

carrier* company::get_carrier()
{
	return carrier_store_pointer;
}

escort* company::get_escort()
{
	return escort_store_pointer;
}

building* company::get_buildings()
{
	return building_store_pointer;
}

office* company::get_office()
{
	return office_store_pointer;
}

warehouse* company::get_warehouse()
{
	return warehouse_store_pointer;
}

int company::get_no_ships()
{
	return current_ship;
}

int company::get_no_carrier()
{
	return current_carrier;
}

int company::get_no_escort()
{
	return current_escort;
}

int company::get_no_buildings()
{
	return current_building;
}

int company::get_no_office()
{
	return current_office;
}

int company::get_no_warehouse()
{
	return current_warehouse;
}

void company::renevate_ship_storage_capability(int new_max_number_of_ships)
{
	if(current_ship<new_max_number_of_ships)
	{
		ship* temp_pointer;
		temp_pointer = new ship[new_max_number_of_ships];

		for (int i = 0; i < current_ship; i++)
		{
			temp_pointer[i] = ship_store_pointer[i]; 
		}

		delete ship_store_pointer;

		ship_store_pointer = temp_pointer;
		max_number_of_ships = new_max_number_of_ships;
	}
	else
	{
		cout<<"remove ships before scaling down"<<endl;
	}
	
}

void company::rescale_building_budget(int new_max_number_of_buildings)
{
	if(new_max_number_of_buildings>0)
	{
		if(current_building<new_max_number_of_buildings)
		{
			building* temp_pointer;
			temp_pointer = new building[new_max_number_of_buildings];

			for(int i = 0; i< current_building; i++)
			{
				temp_pointer[i] = building_store_pointer[i];
			}

			delete building_store_pointer;

			building_store_pointer = temp_pointer;
			max_number_of_buildings = new_max_number_of_buildings;
		}
		else
		{
			cout<<"Remove buildings before scaling down"<<endl;
		}
	}
	else
	{
		cout<<"budget always allows for atleast one house"<<endl;
	}
	
}

void company::remove_ship(int id_of_ship)
{
	if(current_ship != 0)
	{
		ship* temp_pointer;
		temp_pointer = new ship[max_number_of_ships];
		int old_current_ship = current_ship;

		for (int i = 0; i < old_current_ship; i++)
		{
			if(ship_store_pointer[i].get_ship_id() != id_of_ship)
			{
				temp_pointer[i] = ship_store_pointer[i];

			}
			else
			{
				current_ship--;

				cout<<"ship of id "<<id_of_ship<<"has been removed"<<endl;
			}
		}

		delete ship_store_pointer;

		ship_store_pointer = temp_pointer;


	}
	else
	{
		cout<<"You already have no ships"<<endl;
	}
	
}

building* company::remove_building(int id_of_building)
{
	if(current_building != 0)
	{
		building* temp_pointer;
		temp_pointer = new building[max_number_of_buildings];
		int old_current_building = current_building;
		int k =0;

		for (int i = 0; i < old_current_building; i++)
		{
			if(building_store_pointer[i].get_ID() != id_of_building)
			{
				temp_pointer[i +k] = building_store_pointer[i];
				//cout<<temp_pointer[i].get_ID()<<endl;

			}
			else
			{
				current_building--;

				cout<<"building of id "<<id_of_building<<"has been removed"<<endl;

				//set i to i--
				k--;

			}
		}

		//delete building_store_pointer;

		building_store_pointer = temp_pointer;

		/*for(int i = 0; i<current_building; i++)
		{
			cout<<temp_pointer[i].get_ID()<<endl;
		}*/

		return building_store_pointer;


	}
	else
	{
		cout<<"You already have no buildings"<<endl;
	}
}