#include <string>
#include <iostream>
#include "company.h"
#include "ship.h"
#include "building.h"
using namespace std;

//default company constructor 
company::company()
{
	company_name = "Vacant";

	max_number_of_ships = 10; 
	max_number_of_carriers = 3;
	max_number_of_escorts = 5;
	ship_store_pointer = new ship[max_number_of_ships];
	carrier_store_pointer = new carrier[max_number_of_carriers];
	escort_store_pointer = new escort[max_number_of_escorts];
	current_ship =0; //represents having zero ships initially
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
}

//company constructor with inputs
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

//allows company name to be changed
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

//allows a ship to be added, provided it doesn't cause the fleet to exceed
//the maximum number of ships
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

//allows a carrier to be added, provided it doesn't exceed
//the maximum number of carriers
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

//allows a escort ship to be added, provided it doesn't exceed
//the maximum number of escort ships
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

//allows a building to be added, provided it doesn't cause the 
//buildings to exceed the maximum number of buildings 
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

//allows a office to be added, provided it doesn't cause the 
//buildings to exceed the maximum number of offices
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

//allows a office to be added, provided it doesn't cause the 
//buildings to exceed the maximum number of offices
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

//returns pointer which contains ship objects
ship* company::get_ships()
{
	return ship_store_pointer;
}

//returns pointer which contains carrier objects
carrier* company::get_carrier()
{
	return carrier_store_pointer;
}

//returns pointer which contains escort objects
escort* company::get_escort()
{
	return escort_store_pointer;
}

//returns pointer which contains building objects
building* company::get_buildings()
{
	return building_store_pointer;
}

//returns pointer which contains office objects
office* company::get_office()
{
	return office_store_pointer;
}

//returns pointer which contains warehouse objects
warehouse* company::get_warehouse()
{
	return warehouse_store_pointer;
}

//gets current amount of ships stored in the ship pointer
int company::get_no_ships()
{
	return current_ship;
}

//gets current amount of carriers stored in the carrier pointer
int company::get_no_carrier()
{
	return current_carrier;
}

//gets current amount of escort ships stored in the escort pointer
int company::get_no_escort()
{
	return current_escort;
}

//gets current amount of buildings stored in the building pointer
int company::get_no_buildings()
{
	return current_building;
}

//gets current amount of offices stored in the office pointer
int company::get_no_office()
{
	return current_office;
}

//gets current amount of warehouses stored in the warehouse pointer
int company::get_no_warehouse()
{
	return current_warehouse;
}

//get max number of ships which can be stored in ship array
int company::get_max_no_ships()
{
	return  max_number_of_ships; 
}

//get max number of carriers which can be stored in carrier array
int company::get_max_no_carrier()
{
	return max_number_of_carriers;
	
}

//get max number of escort ships which can be stored in escort array
int company::get_max_no_escort()
{
	return max_number_of_escorts;
	
}

//get max number of buildings which can be stored in building array
int company::get_max_no_buildings()
{
	return max_number_of_buildings; 
}

//get max number of offices which can be stored in office array
int company::get_max_no_office()
{
	return max_number_of_offices; 
}

//get max number of warehouses which can be stored in warehouse array
int company::get_max_no_warehouse()
{
	return max_number_of_warehouses; 
}

/*updates ship storage capacity, ensuring a
valid number is entered*/
ship* company::renevate_ship_storage_capability(int new_max_number_of_ships)
{
	if(new_max_number_of_ships>=0) //new max is more than -1
	{
		if(current_ship<=new_max_number_of_ships) // if new max is less than current amount of ships 
		{
			ship* temp_pointer; //creates a temporary pointer with new size
			temp_pointer = new ship[new_max_number_of_ships];
                        
                        //copies ship into new scaled array
			for (int i = 0; i < current_ship; i++)
			{
				temp_pointer[i] = ship_store_pointer[i]; 
			}

			delete[] ship_store_pointer; 

			ship_store_pointer = temp_pointer;
			max_number_of_ships = new_max_number_of_ships;

			return ship_store_pointer; // returns new scaled array to user
		}
		else
		{
			cout<<"remove ships before scaling down"<<endl;
			return ship_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero ships"<<endl;
	}
}

//same as renevate_ship_storage_capability but with carrier
carrier* company::renevate_carrier_storage_capability(int new_max_number_of_carriers)
{
	if(new_max_number_of_carriers>=0)
	{


		if(current_carrier<=new_max_number_of_carriers)
		{
			carrier* temp_pointer;
			temp_pointer = new carrier[new_max_number_of_carriers];

			for (int i = 0; i < current_carrier; i++)
			{
				temp_pointer[i] = carrier_store_pointer[i]; 
			}

			delete[] carrier_store_pointer;

			carrier_store_pointer = temp_pointer;
			max_number_of_carriers = new_max_number_of_carriers;

			return carrier_store_pointer;
		}
		else
		{
			cout<<"remove carrier before scaling down"<<endl;
			return carrier_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero carriers"<<endl;
		return carrier_store_pointer;
	}
}

//same as renevate_ship_storage_capability but with escort
escort* company::renevate_escort_storage_capability(int new_max_number_of_escorts)
{
	if(new_max_number_of_escorts>=0)
	{
		if(current_escort<=max_number_of_escorts)
		{
			escort* temp_pointer;
			temp_pointer = new escort[new_max_number_of_escorts];

			for (int i = 0; i < current_escort; i++)
			{
				temp_pointer[i] = escort_store_pointer[i]; 
			}

			delete[] escort_store_pointer;

			escort_store_pointer = temp_pointer;
			max_number_of_escorts = new_max_number_of_escorts;

			return escort_store_pointer;
		}
		else
		{
			cout<<"remove escort ships before scaling down"<<endl;
			return escort_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero escort ships"<<endl;
		return escort_store_pointer;
	}
}

//same as renevate_ship_storage_capability but with building
building* company::rescale_building_budget(int new_max_number_of_buildings)
{
	if(new_max_number_of_buildings>=0)
	{
		if(current_building<=new_max_number_of_buildings)
		{
			building* temp_pointer;
			temp_pointer = new building[new_max_number_of_buildings];

			for(int i = 0; i< current_building; i++)
			{
				temp_pointer[i] = building_store_pointer[i];
			}

			delete[] building_store_pointer;

			building_store_pointer = temp_pointer;
			max_number_of_buildings = new_max_number_of_buildings;
			return building_store_pointer;


		}
		else
		{
			cout<<"Remove buildings before scaling down"<<endl;
			return building_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero buildings"<<endl;
		return building_store_pointer;
	}
	
}

//same as renevate_ship_storage_capability but with office
office* company::rescale_office_budget(int new_max_number_of_offices)
{
	if(new_max_number_of_offices>=0)
	{
		if(current_office<=new_max_number_of_offices)
		{
			office* temp_pointer;
			temp_pointer = new office[new_max_number_of_offices];

			for(int i = 0; i< current_office; i++)
			{
				temp_pointer[i] = office_store_pointer[i];
			}

			delete[] office_store_pointer;

			office_store_pointer = temp_pointer;
			max_number_of_offices = new_max_number_of_offices;
			return office_store_pointer;


		}
		else
		{
			cout<<"You have zero offices"<<endl;
			return office_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero offices"<<endl;
		return office_store_pointer;
	}
	
}

//same as renevate_ship_storage_capability but with warehouse
warehouse* company::rescale_warehouse_budget(int new_max_number_of_warehouses)
{
	if(new_max_number_of_warehouses>=0)
	{
		if(current_warehouse<=new_max_number_of_warehouses)
		{
			warehouse* temp_pointer;
			temp_pointer = new warehouse[new_max_number_of_warehouses];

			for(int i = 0; i< current_warehouse; i++)
			{
				temp_pointer[i] = warehouse_store_pointer[i];
			}

			delete[] warehouse_store_pointer;

			warehouse_store_pointer = temp_pointer;
			max_number_of_warehouses = new_max_number_of_warehouses;
			return warehouse_store_pointer;


		}
		else
		{
			cout<<"Remove warehouse before scaling down"<<endl;
			return warehouse_store_pointer;
		}
	}
	else
	{
		cout<<"can't have less than zero warehouses"<<endl;
		return warehouse_store_pointer;
	}
	
}

/* This function deletes a ship from the ship storage pointer 
using its id. A message is printed
announcing the success of the process */
ship* company::remove_ship(int id_of_ship)
{
	if(current_ship != 0)
	{
		ship* temp_pointer; //creates a pointer with the same size as the inital pointer
		temp_pointer = new ship[max_number_of_ships];
		int old_current_ship = current_ship; // keep current amount of ships
		int keep_positon =0; // used to keep position if there is a match of id
		bool id_match = false; // checks if ships of the id exists

		for (int i = 0; i < old_current_ship; i++) // loops through ship pointer
		{
			if(ship_store_pointer[i].get_ship_id() != id_of_ship)  // if no match of id copy ship into new pointer
			{
				temp_pointer[i+keep_positon] = ship_store_pointer[i];
				

			}
			else //if matcth
			{
				current_ship--;  // remove a number of ships stored

				cout<<"ship of id "<<id_of_ship<<"has been removed"<<endl;
				keep_positon--; // keep positon of the array for next ship to be placed in. as nothing was placed for this i
				id_match = true; //match was found
			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] ship_store_pointer;

		ship_store_pointer = temp_pointer;
		return ship_store_pointer; // return pointer back to main file

	}
	else
	{
		cout<<"You already have no ships"<<endl;
		return ship_store_pointer;
	}
}

//same as remove_ship but with carrier
carrier* company::remove_carrier(int id_of_carrier)
{
	if(current_carrier != 0)
	{
		carrier* temp_pointer;
		temp_pointer = new carrier[max_number_of_carriers];
		int old_current_carrier = current_carrier;
		int keep_positon =0;
		bool id_match = false;

		for (int i = 0; i < old_current_carrier; i++)
		{
			if(carrier_store_pointer[i].get_ship_id() != id_of_carrier)
			{
				temp_pointer[i+keep_positon] = carrier_store_pointer[i];

			}
			else
			{
				current_carrier--;

				cout<<"carrier of id "<<id_of_carrier<<"has been removed"<<endl;
				keep_positon--;
				id_match = true;
			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] carrier_store_pointer;

		carrier_store_pointer = temp_pointer;
		return carrier_store_pointer;

	}
	else
	{
		cout<<"You already have no carrier"<<endl;
		return carrier_store_pointer;
	}
}

//same as remove_ship but with escort
escort* company::remove_escort(int id_of_escort)
{
	if(current_escort != 0)
	{
		escort* temp_pointer;
		temp_pointer = new escort[max_number_of_escorts];
		int old_current_escort = current_escort;
		int keep_positon =0;
		bool id_match = false;

		for (int i = 0; i < old_current_escort; i++)
		{
			if(escort_store_pointer[i].get_ship_id() != id_of_escort)
			{
				temp_pointer[i+keep_positon] = escort_store_pointer[i];

			}
			else
			{
				current_escort--;

				cout<<"escort of id "<<id_of_escort<<"has been removed"<<endl;
				keep_positon--;
				id_match = true;
			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] escort_store_pointer;

		escort_store_pointer = temp_pointer;
		return escort_store_pointer;
	}
	else
	{
		cout<<"You already have no escort ships"<<endl;
		return escort_store_pointer;
	}
}

//same as remove_ship but with building
building* company::remove_building(int id_of_building)
{
	if(current_building != 0)
	{
		building* temp_pointer;
		temp_pointer = new building[max_number_of_buildings];
		int old_current_building = current_building;
		int keep_positon =0;
		bool id_match = false;

		for (int i = 0; i < old_current_building; i++)
		{
			if(building_store_pointer[i].get_ID() != id_of_building)
			{
				temp_pointer[i +keep_positon] = building_store_pointer[i];
			}
			else
			{
				current_building--;

				cout<<"building of id "<<id_of_building<<"has been removed"<<endl;
				keep_positon--;
				id_match = true;

			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] building_store_pointer;

		building_store_pointer = temp_pointer;

		return building_store_pointer;
	}
	else
	{
		cout<<"You already have no buildings"<<endl;
		return building_store_pointer;
	}
}

//same as remove_ship but with office
office* company::remove_office(int id_of_office)
{
	if(current_office != 0)
	{
		office* temp_pointer;
		temp_pointer = new office[max_number_of_offices];
		int old_current_office = current_office;
		int keep_positon =0;
		bool id_match = false;

		for (int i = 0; i < old_current_office; i++)
		{
			if(office_store_pointer[i].get_ID() != id_of_office)
			{
				temp_pointer[i +keep_positon] = office_store_pointer[i];
			}
			else
			{
				current_office--;

				cout<<"office of id "<<id_of_office<<"has been removed"<<endl;
				keep_positon--;
				id_match = true;

			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] office_store_pointer;

		office_store_pointer = temp_pointer;

		return office_store_pointer;
	}
	else
	{
		cout<<"You already have no offices"<<endl;
		return office_store_pointer;
	}
}

//same as remove_ship but with warehouse
warehouse* company::remove_warehouse(int id_of_warehouse)
{
	if(current_warehouse != 0)
	{
		warehouse* temp_pointer;
		temp_pointer = new warehouse[max_number_of_warehouses];
		int old_current_warehouse = current_warehouse;
		int keep_positon =0;
		bool id_match = false;

		for (int i = 0; i < old_current_warehouse; i++)
		{
			if(warehouse_store_pointer[i].get_ID() != id_of_warehouse)
			{
				temp_pointer[i +keep_positon] = warehouse_store_pointer[i];
			}
			else
			{
				current_warehouse--;

				cout<<"warehouse of id "<<id_of_warehouse<<"has been removed"<<endl;
				keep_positon--;
				id_match = true;

			}
		}

		if(id_match == false)
		{
			cout<<"No match of id"<<endl;
		}

		delete[] warehouse_store_pointer;

		warehouse_store_pointer = temp_pointer;

		return warehouse_store_pointer;
	}
	else
	{
		cout<<"You already have no warehouses"<<endl;
		return warehouse_store_pointer;
	}
}

//destructor function, for when the program is terminated
company::~company()
{
	delete[] ship_store_pointer;
	delete[] carrier_store_pointer;
	delete[] escort_store_pointer;
	delete[] building_store_pointer;
	delete[] office_store_pointer;
	delete[] warehouse_store_pointer;

	cout<<"----Program ended----"<<endl;
}
