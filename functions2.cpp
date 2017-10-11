#include "company.h"
#include "ship.h"
#include "carrier.h"
#include "escort.h"
#include "building.h"
#include "office.h"
#include "cost.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int sti(string general_string)
{
	int general_int;
	do
	{
		cin >> general_string;
		stringstream convert(general_string);
		convert >> general_int;
		if(general_int<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
			cout<<"Re enter number:";
		}
	}while(general_int<0);

}
company company_creation()
{
	cout<<"Shipping Company creation:"<<endl
		<<"please enter company name: ";
	string inital_company_name;
	cin >> inital_company_name;

	cout<<"----Limited budget----"<<endl<<endl;
	cout<<"----Inital max storage capacity----"<<endl;


	int inital_building_capacity;
	string s_inital_building_capacity;
	do
	{
		cout<<"Enter inital number of buildings: ";
		cin >> s_inital_building_capacity;
		stringstream ss_inital_building_capacity(s_inital_building_capacity);

		ss_inital_building_capacity >> inital_building_capacity;
		if(inital_building_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_building_capacity<0);
	

	int inital_office_capacity;
	string s_inital_office_capacity;
	do
	{
		cout<<"Enter inital office capacity: ";
		cin >> s_inital_office_capacity;
		stringstream ss_inital_office_capacity(s_inital_office_capacity);
		ss_inital_office_capacity >> inital_office_capacity;

		if(inital_office_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_office_capacity<0);
	

	int inital_warehouse_capacity;
	string s_inital_warehouse_capacity;
	do
	{
		cout<<"Enter inital warehouse capacity: ";
		cin >> s_inital_warehouse_capacity;
		stringstream ss_inital_warehouse_capacity(s_inital_warehouse_capacity);
		ss_inital_warehouse_capacity >> inital_warehouse_capacity;

		if(inital_warehouse_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_warehouse_capacity<0);
	

	int inital_ship_capacity;
	string s_inital_ship_capacity;
	do
	{
		cout<<"Enter inital general ship capacity: ";
		cin >> s_inital_ship_capacity;
		stringstream ss_inital_ship_capacity(s_inital_ship_capacity);
		ss_inital_ship_capacity >> inital_ship_capacity;

		if(inital_ship_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_ship_capacity<0);

	int inital_carrier_capacity;
	string s_inital_carrier_capacity;
	do
	{
		cout<<"Enter inital carrier capacity: ";
		cin >> s_inital_carrier_capacity;
		stringstream ss_inital_carrier_capacity(s_inital_carrier_capacity);
		ss_inital_carrier_capacity >> inital_carrier_capacity;

		if(inital_carrier_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(inital_carrier_capacity<0);
	

	int inital_escort_capacity;
	string s_inital_escort_capacity;
	do
	{
		cout<<"Enter inital escort ship capacity: ";
		cin >> s_inital_escort_capacity;

		stringstream ss_inital_escort_capacity(s_inital_escort_capacity);

		ss_inital_escort_capacity >> inital_escort_capacity;

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
	cout<<"Enter building material: ";
	string material;
	cin >> material;

	int capacity;
	string s_capacity;
	do
	{
		cout<<"Enter building worker capacity: ";
		cin >> s_capacity;
		stringstream ss_capacity(s_capacity);
		ss_capacity >> capacity;
		if(capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(capacity<0);

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	building house(material, capacity, location);

	return house;
}

office office_creation()
{
	cout<<"Building creation:"<<endl;

	
	int no_office_space;
	string s_no_office_space;
	do
	{
		cout<<"Enter number of office spaces: ";
		cin >> s_no_office_space;
		stringstream ss_no_office_space(s_no_office_space);
		ss_no_office_space >> no_office_space;
		if(no_office_space<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(no_office_space<0);
	
	int no_meeting_rooms;
	string s_no_meeting_rooms;
	do
	{
		cout<<"Enter number of meeting rooms: ";
		cin >> s_no_meeting_rooms;
		stringstream ss_no_meeting_rooms(s_no_meeting_rooms);
		ss_no_meeting_rooms >> no_meeting_rooms;

		if(no_meeting_rooms<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(no_meeting_rooms<0);

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	
	int capacity;
	string s_capacity;
	do
	{
		cout<<"Enter building worker capacity: ";
		cin >> s_capacity;
		stringstream ss_capacity(s_capacity);
		ss_capacity >> capacity;
		if(capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(capacity<0);

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	office pro_house(no_office_space, no_meeting_rooms, material, capacity, location);
	return pro_house;
}

warehouse warehouse_creation()
{
	cout<<"Building creation:"<<endl;

	
	int no_ports;
	string s_no_ports;
	do
	{
		cout<<"Enter number of ports: ";
		cin >> s_no_ports;
		stringstream ss_no_ports(s_no_ports);
		ss_no_ports >> no_ports;

		if(no_ports<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(no_ports<0);

	
	int no_truck;
	string s_no_truck;
	do
	{
		cout<<"Enter number of truck loading bays: ";
		cin >> s_no_truck;
		stringstream ss_no_truck(s_no_truck);
		ss_no_truck >> no_truck;

		if(no_truck<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}

	}while(no_truck<0);

	
	int ship_repair;
	string s_ship_repair;
	do
	{
		cout<<"Enter number of ship repair stations: ";
		cin >> s_ship_repair;
		stringstream ss_ship_repair(s_ship_repair);
		ss_ship_repair >> ship_repair;

		if(ship_repair<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(ship_repair<0);

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	int capacity;
	string s_capacity;
	do
	{
		cout<<"Enter building worker capacity: ";
		cin >> s_capacity;
		stringstream ss_capacity(s_capacity);
		ss_capacity >> capacity;
		if(capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(capacity<0);

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	warehouse maintance(material, capacity, location, ship_repair, no_truck, no_ports);
	return maintance;
}

void building_print(building *house)
{
	cout<<"Building ID is: "<<house->get_ID()<<endl;
	cout<<"Building type is: "<<house->get_building_type()<<endl;
	cout<<"Building location is: "<<house->get_branch_location()<<endl;
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
	string s_inital_crew;
	do
	{
		cout<<"Enter crew capacity: ";
		cin >> s_inital_crew;
		stringstream ss_inital_crew(s_inital_crew);
		ss_inital_crew >> inital_crew;
		if(inital_crew<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(inital_crew<0);

	ship new_ship(inital_crew, ship_name);

	return new_ship;
}

carrier carrier_creation()
{
	string ship_name;
	cout<<"Enter ship name: ";
	cin >> ship_name;

	int inital_crew;
	string s_inital_crew;
	do
	{
		cout<<"Enter crew capacity: ";
		cin >> s_inital_crew;
		stringstream ss_inital_crew(s_inital_crew);
		ss_inital_crew >> inital_crew;
		if(inital_crew<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(inital_crew<0);

	int storage_capacity;
	string s_storage_capacity;
	do
	{
		cout<<"Enter storage capacity: ";
		cin >> s_storage_capacity;
		stringstream ss_storage_capacity(s_storage_capacity);

		ss_storage_capacity >> storage_capacity;

		if(storage_capacity<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(storage_capacity<0);

	carrier new_carrier(storage_capacity, inital_crew, ship_name);

	return new_carrier;
}

escort escort_creation()
{
	string ship_name;
	cout<<"Enter ship name: ";
	cin >> ship_name;

	int inital_crew;
	string s_inital_crew;
	do
	{
		cout<<"Enter crew capacity: ";
		cin >> s_inital_crew;
		stringstream ss_inital_crew(s_inital_crew);
		ss_inital_crew >> inital_crew;
		if(inital_crew<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(inital_crew<0);

	int number_soliders;
	string s_number_soliders;
	do
	{
		cout<<"Enter soldier capacity: ";
		cin >> number_soliders;
		stringstream ss_number_soliders(s_number_soliders);
		ss_number_soliders >> number_soliders;

		if(number_soliders<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(number_soliders<0);

	int peace_weapons;
	string s_peace_weapons;
	do
	{
		cout<<"Enter the number of equiptment of peace: ";
		cin >> s_peace_weapons;
		stringstream ss_peace_weapons(s_peace_weapons);
		ss_peace_weapons >> peace_weapons;

		if(peace_weapons<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
		}
	}while(peace_weapons<0);

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

int id_convert(string s_id)
{
	int id;

	do
	{

		cin >> s_id;
		stringstream ss_id(s_id);
		ss_id >> id;
		if(id<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
			cout<<"re enter id: ";
		}
	}while(id<0);

	return id;

}

