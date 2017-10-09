#include "company.h"
#include "ship.h"
#include "carrier.h"
#include "escort.h"
#include "building.h"
#include "office.h"
#include "cost.h"
#include <iostream>
#include <string>
using namespace std;
company company_creation()
{
	cout<<"Company creation:"<<endl
		<<"please enter company name: ";
	string inital_company_name;
	cin >> inital_company_name;

	cout<<"----Limited budget----"<<endl<<endl;
	cout<<"----Inital max storage capacity----"<<endl;

	int inital_building_capacity;
	do
	{
		cout<<"Enter inital general building capacity: ";
		cin >> inital_building_capacity;

		if(inital_building_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_building_capacity<0);
	

	int inital_office_capacity;
	do
	{
		cout<<"Enter inital office capacity: ";
		cin >> inital_office_capacity;

		if(inital_office_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_office_capacity<0);
	

	int inital_warehouse_capacity;
	do
	{
		cout<<"Enter inital warehouse capacity: ";
		cin >> inital_warehouse_capacity;

		if(inital_warehouse_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_warehouse_capacity<0);
	

	int inital_ship_capacity;
	do
	{
		cout<<"Enter inital general ship capacity: ";
		cin >> inital_ship_capacity;

		if(inital_ship_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_ship_capacity<0);

	int inital_carrier_capacity;
	do
	{
		cout<<"Enter inital carrier capacity: ";
		cin >> inital_carrier_capacity;

		if(inital_carrier_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_carrier_capacity<0);
	

	int inital_escort_capacity;
	do
	{
		cout<<"Enter inital escort ship capacity: ";
		cin >> inital_escort_capacity;

		if(inital_escort_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_escort_capacity<0);
	

	company eco(inital_company_name, 
				inital_ship_capacity, 
				inital_carrier_capacity,
				inital_escort_capacity,
				inital_building_capacity,
				inital_office_capacity,
				inital_warehouse_capacity);

	cout<<"----Company created----"<<endl;

	return eco;
}

building building_creation()
{
	cout<<"Building creation:"<<endl;
	cout<<"Enter building width: ";
	int width;
	cin >> width;
	cout<<"Enter building height: ";
	int height;
	cin >> width;
	cout<<"Enter building material: ";
	string material;
	cin >> material;
	cout<<"Enter building worker capacity: ";
	int capacity;
	cin >> capacity;
	cout<<"Enter building location: ";
	string location;
	cin >> location;

	building house(width, height, material, capacity, location);

	return house;
}

office office_creation()
{
	cout<<"Building creation:"<<endl;

	cout<<"Enter number of office spaces: ";
	int no_office_space;
	cin >> no_office_space;
	
	cout<<"Enter number of meeting rooms: ";
	int no_meeting_rooms;
	cin >> no_meeting_rooms;


	cout<<"Enter building width: ";
	int width;
	cin >> width;

	cout<<"Enter building height: ";
	int height;
	cin >> width;

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	cout<<"Enter building worker capacity: ";
	int capacity;
	cin >> capacity;

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	office pro_house(no_office_space, no_meeting_rooms, width, height, material, capacity, location);
	return pro_house;
}

warehouse warehouse_creation()
{
	cout<<"Building creation:"<<endl;

	cout<<"Enter number of ports: ";
	int no_ports;
	cin >> no_ports;

	cout<<"Enter number of truck loading bays: ";
	int no_truck;
	cin >> no_truck;

	cout<<"Enter number of ship repair stations: ";
	int ship_repair;
	cin >> ship_repair;

	cout<<"Enter building width: ";
	int width;
	cin >> width;

	cout<<"Enter building height: ";
	int height;
	cin >> width;

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	cout<<"Enter building worker capacity: ";
	int capacity;
	cin >> capacity;

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	warehouse maintance(width, height, material, capacity, location, ship_repair, no_truck, no_ports);
	return maintance;
}

void building_print(building *house)
{
	cout<<"Building ID is: "<<house->get_ID()<<endl;
	cout<<"Building type is: "<<house->get_building_type()<<endl;
	cout<<"Building location is: "<<house->get_branch_location()<<endl;
	cout<<"Building area is: "<<house->get_building_area()<<endl;
	cout<<"Building material is: "<<house->get_building_material()<<endl;
	cout<<"Building worker capacity is: "<<house->get_worker_capacity()<<endl;
	cout<<"Building maintance cost is: "<<house->get_maintance_cost()<<endl;	
}

void office_print(office *house)
{
	cout<<"Number of office spaces are: "<<house->get_no_of_office_spaces()<<endl;
	cout<<"Number of meeting rooms are: "<<house->get_no_of_meeting_rooms()<<endl;
	
}

void warehouse_print(warehouse *house)
{
	cout<<"Number of ship repair stations are: "<<house->get_no_ship_repair_stations()<<endl;
	cout<<"Number of truck loading bays are: "<<house->get_no_truck_loading_bay()<<endl;
	cout<<"Number of ports are: "<<house-> get_no_ports()<<endl;
}

ship ship_creation()
{
	cout<<"ship creation: "<<endl;

	string ship_name;
	cout<<"Enter ship name: ";
	cin >> ship_name;

	int inital_crew;
	cout<<"Enter crew capacity: ";
	cin >> inital_crew;

	ship new_ship(inital_crew, ship_name);

	return new_ship;
}

carrier carrier_creation()
{
	string ship_name;
	cout<<"Enter ship name: ";
	cin >> ship_name;

	int inital_crew;
	cout<<"Enter crew capacity: ";
	cin >> inital_crew;

	int storage_capacity;
	cout<<"Enter storage capacity: ";
	cin >> storage_capacity;

	carrier new_carrier(storage_capacity, inital_crew, ship_name);

	return new_carrier;
}

escort escort_creation()
{
	string ship_name;
	cout<<"Enter ship name: ";
	cin >> ship_name;

	int inital_crew;
	cout<<"Enter crew capacity: ";
	cin >> inital_crew;

	int number_soliders;
	cout<<"Enter soldier capacity: ";
	cin >> number_soliders;

	int peace_weapons;
	cout<<"Enter the number of equiptment of peace: ";
	cin >> peace_weapons;

	escort new_escort(inital_crew, ship_name, number_soliders, peace_weapons);
	return new_escort; 
}

void ship_print(ship* boat)
{
	cout<<"Ship ID is: "<<boat->get_ship_id()<<endl;
	cout<<"Shape name is: "<<boat->get_ship_name()<<endl;
	cout<<"Ship crew capacity is: "<<boat->get_crew_amount()<<endl;
	cout<<"Ship maintance cost is: "<<boat->get_maintance_cost()<<endl;
}

void carrier_print(carrier* boat)
{
	cout<<"Ship storage capacity is: "<<boat->get_storage_capacity();
}

void escort_print(escort* boat)
{
	cout<<"Ship soldier capacity is: "<<boat->get_soldiers_amount()<<endl;
	cout<<"Ship number of equiptment of peace is: "<<boat->get_peace_equiptment_amount()<<endl;
}

