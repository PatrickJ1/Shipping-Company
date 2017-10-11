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
extern company company_creation();
extern warehouse warehouse_creation();
extern void office_print(office*);
extern void warehouse_print(warehouse*);
extern ship ship_creation();
extern escort escort_creation();
extern carrier carrier_creation();
extern void ship_print(ship*);
extern void carrier_print(carrier*);
extern void escort_print(escort*);
#include <sstream>

int main()
{
	/*
	company eco = company_creation();

	building* building_storage_pointer= eco.get_buildings();


			eco.add_building(building_creation());

		
			eco.add_building(building_creation());

			cout<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()-1].get_ID()<<endl;
		
		for(int i =0; i<eco.get_no_buildings(); i++)
			{
				building_print(& building_storage_pointer[i]);
				cout<<endl;
			}

			building_storage_pointer = eco.rescale_building_budget(3);
			eco.add_building(building_creation());


			building_storage_pointer = eco.remove_building(0);
			cout<<"test"<<endl;

			for(int i =0; i<eco.get_no_buildings(); i++)
			{
				building_print(& building_storage_pointer[i]);
				cout<<endl;
			}*/
  


    string s = "j";

    // object from the class stringstream
    stringstream geek(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = -1;
    geek >> x;

    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;

    cout<<3*3<<endl;
}





