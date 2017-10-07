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