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
#include <cstddef>
using namespace std;
int sti(string general_string)
{
	int general_int;
	do
	{
		cin >> general_string;
		stringstream convert(general_string);
		convert >> general_int;
		size_t found = general_string.find_first_not_of("0123456789 ");
		if(found != string::npos)
		{
			general_int = -1;
		}
		if(general_int<0)
		{
			cout<<"Enter a number 0 or greater"<<endl;
			cout<<"Re enter number: ";
		}
	}while(general_int<0);

}

/* creates a budget for the company while taking
into account all its aspects and assingning 
corresponding proportionalities*/
void budget_scale(int *int_creation, string * string_creation, int *budget, string type)
{
	int multiply;

	if((type == "building") || (type == "ship"))
		{
			multiply = 1;
			//cout<<multiply<<endl;
		}
		else if((type == "office") || (type == "warehouse"))
		{
			multiply = 5;
			//cout<<multiply<<endl;
		}
		else if(type == "escort")
		{
			multiply = 2;
			//cout<<multiply<<endl;
		}
		else if(type == "carrier")
		{
			multiply = 4;
			//cout<<multiply<<endl;
		}

	do
	{
		*int_creation= sti(*string_creation);
		//cout<<*int_creation<<endl;
		
		//prompts the user of exceeding the budget 
		if((*budget-multiply*int_creation[0]) < 0)
		{
			cout<<"Exceeds budget"<<endl;
			cout<<"Current budget is: "<<*budget<<endl;
			cout<<"Re enter number: ";
		}
		//cout<<multipy<<endl;
		//cout<<*budget - multiply*int_creation[0]<<endl;
		//cout<<50 -55<<endl;
	}while((budget[0]-multiply*int_creation[0]) < 0);
}

void print_budget(int* budget)
{
	cout<<"Current budget is: "<<*budget<<endl;	
}


company company_creation()
{
	int budget = 50;
	cout<<"Shipping Company creation:"<<endl
		<<"please enter company name: ";
	string inital_company_name;
	cin >> inital_company_name;

	cout<<"----Limited budget----"<<endl<<endl;
	cout<<"Your budget is: 50"<<endl;
	cout<<"You pay initialy for the creation of the storage capacity."<<endl;
	cout<<"Then adding to the capacity afterwards is ''free''."<<endl;
	cout<<"buildings cost: 1"<<endl;
	cout<<"office cost: 5"<<endl;
	cout<<"warehouse cost 5"<<endl;
	cout<<"ships cost: 1"<<endl;
	cout<<"carrier cost: 4"<<endl;
	cout<<"escort ship cost: 2"<<endl;
	cout<<"----Initial max storage capacity----"<<endl;


	int inital_building_capacity;
	string s_inital_building_capacity;
	cout<<"Enter building capacity: ";
	budget_scale(&inital_building_capacity, &s_inital_building_capacity, &budget, "building");
	budget = budget - inital_building_capacity;
	print_budget(&budget);


	int inital_office_capacity;
	string s_inital_office_capacity;
	cout<<"Enter office capacity: ";
	budget_scale(&inital_office_capacity, &s_inital_office_capacity, &budget, "office");
	budget = budget - inital_office_capacity*5;
	print_budget(&budget);
	

	int inital_warehouse_capacity;
	string s_inital_warehouse_capacity;
	cout<<"Enter warehouse capacity: ";
	budget_scale(&inital_warehouse_capacity, &s_inital_warehouse_capacity, &budget, "warehouse");
	budget = budget - inital_warehouse_capacity*5;
	print_budget(&budget);
	
	int inital_ship_capacity;
	string s_inital_ship_capacity;
	cout<<"Enter general ship capacity: ";
	budget_scale(&inital_ship_capacity, &s_inital_ship_capacity, &budget, "ship");
	budget = budget - inital_ship_capacity;
	print_budget(&budget);

	int inital_carrier_capacity;
	string s_inital_carrier_capacity;
	cout<<"Enter carrier capacity: ";
	budget_scale(&inital_carrier_capacity, &s_inital_carrier_capacity, &budget, "carrier");
	budget = budget - inital_carrier_capacity *4;
	print_budget(&budget);

	int inital_escort_capacity;
	string s_inital_escort_capacity;
	cout<<"Enter escort ship capacity: ";
	budget_scale(&inital_escort_capacity, &s_inital_escort_capacity, &budget, "escort");
	budget = budget - inital_escort_capacity *2;
	print_budget(&budget);	

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
	cout<<"Enter building worker capacity: ";
	capacity = sti(s_capacity);

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
	cout<<"Enter number of office spaces: ";
	no_office_space = sti(s_no_office_space);
	
	int no_meeting_rooms;
	string s_no_meeting_rooms;
	cout<<"Enter number of meeting rooms: ";
	no_meeting_rooms = sti(s_no_meeting_rooms);

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	
	int capacity;
	string s_capacity;
	cout<<"Enter building worker capacity: ";
	capacity = sti(s_capacity);

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
	cout<<"Enter number of ports: ";
	no_ports = sti(s_no_ports);
	
	int no_truck;
	string s_no_truck;
	cout<<"Enter number of truck loading bays: ";
	no_truck = sti(s_no_truck);
	
	int ship_repair;
	string s_ship_repair;
	cout<<"Enter number of ship repair stations: ";
	ship_repair = sti(s_ship_repair);

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	int capacity;
	string s_capacity;
	cout<<"Enter building worker capacity: ";
	capacity = sti(s_capacity);

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
	cout<<"Enter crew capacity: ";
	inital_crew = sti(s_inital_crew);

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
	cout<<"Enter crew capacity: ";
	inital_crew = sti(s_inital_crew);

	int storage_capacity;
	string s_storage_capacity;
	cout<<"Enter storage capacity: ";
	storage_capacity = sti(s_storage_capacity);


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
	cout<<"Enter crew capacity: ";
	inital_crew = sti(s_inital_crew);

	int number_soldiers;
	string s_number_soldiers;
	cout<<"Enter soldier capacity: ";
	number_soldiers = sti(s_number_soldiers);

	int peace_weapons;
	string s_peace_weapons;
	cout<<"Enter the number of equiptment of peace: ";
	peace_weapons = sti(s_peace_weapons);

	escort new_escort(inital_crew, ship_name, number_soldiers, peace_weapons);
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

bool id_print(bool *id_match)
{
	if(*id_match == false)
	{
		cout<<"No match of id"<<endl;
	}

	return false;
}




