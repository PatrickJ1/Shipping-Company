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

int main()
{
	company eco;

	cout<<"Company has been created"<<endl
		<<"please enter company name: ";
		string inital_company_name;
		cin >> inital_company_name;
		eco.change_company_name(inital_company_name);
	cout<<"Your company is called: "<<eco.get_name()<<endl;	

	building* building_storage_pointer;

	building_storage_pointer = eco.get_buildings();

	ship* ship_storage_pointer = eco.get_ships();

	bool program_run = true;
	string command;

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
			building_storage_pointer[eco.get_no_buildings()] = building_creation();

			cout<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()].get_ID()<<endl;
		}
		else if(command == "add_office")
		{
			building_storage_pointer[eco.get_no_buildings()] = office_creation();
			out<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()].get_ID()<<endl;
		}
		else
		{
			cout<<"Error"<<endl<<
			"Input does not match any known commands"<<endl;
		}
	}
}