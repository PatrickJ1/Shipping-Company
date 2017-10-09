//initialise company

// have while loop
//switch statment intside loop
//can initialise generic ship then put it into array

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
extern building building_creation();
extern office office_creation();
extern void building_print(building*);

int main()
{
	

	cout<<"Company has been created"<<endl
		<<"please enter company name: ";
	string inital_company_name;
	cin >> inital_company_name;

	int inital_building_capacity;
	cout<<"Enter inital building capacity: ";
	cin >> inital_building_capacity;

	int inital_ship_capacity;
	cout<<"Enter inital ship capacity: ";
	cin >> inital_ship_capacity;

	company eco(inital_company_name, inital_ship_capacity, inital_building_capacity);

	building* building_storage_pointer;

	building_storage_pointer = eco.get_buildings();

	ship* ship_storage_pointer = eco.get_ships();

	bool program_run = true;
	string command;
	int id;

	while(program_run == true)
	{
		cout<<endl<<"Enter command: ";
		
		cin >> command;

		if(command == "end_program")
		{
			program_run = false;
		}
		else if(command == "add_ship")
		{
			cout<<"works"<<endl;
		}
		else if(command == "add_building")
		{
			eco.add_building(building_creation());

			cout<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()].get_ID()<<endl;
			cout<<eco.get_no_buildings()<<endl;
		}
		else if(command == "print_buildings")
		{
			for(int i =0; i<eco.get_no_buildings(); i++)
			{
				if(building_storage_pointer[i].get_building_type() == "building")
				{
					building_print(& building_storage_pointer[i]);
				}
				else if(building_storage_pointer[i].get_building_type() == "office")
				{
					building_print(& building_storage_pointer[i]);
				}
			}
		}
		else if(command == "add_office")
		{	//cout<<office_creation().get_building_type()<<endl;
			eco.add_building(office_creation());
			cout<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()].get_ID()<<endl;
			cout<<&building_storage_pointer[eco.get_no_buildings()]->get_building_type()<<endl;
		}
		else if(command == "change_building_location")
		{
			cout<<"Enter id of building you wish to modify: ";
			cin >> id;
			cout<<eco.get_no_buildings()<<endl;
			for(int i = 0; i<eco.get_no_buildings(); i++)
			{
				cout<<"check";
				if(id == building_storage_pointer[i].get_ID())
				{
					string new_location;
					cout<<"old location is: "<<building_storage_pointer[i].get_branch_location()<<endl;
					cout<<"Enter new location: ";
					cin >> new_location;
					building_storage_pointer[i].change_branch_location(new_location);
				}
			}
		}
		else if(command == "change_ship_name")
		{
			cout<<"Enter id of ship you wish to modify: ";
			cin >> id;

			for(int i =0 ; i<eco.get_no_ships(); i++)
			{
				if(id == ship_storage_pointer[i].get_ship_id())
				{
					string new_name;
					cout<<"Enter new ship name: ";
					cin >> new_name;
					ship_storage_pointer[i].change_ship_name(new_name);
				}
			}
		}
		else
		{
			cout<<"Error"<<endl<<
			"Input does not match any known commands"<<endl;
		}
	}
}