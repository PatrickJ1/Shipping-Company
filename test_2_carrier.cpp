#include <iostream>
#include <string>
using namespace std;
#include "ship.h"
#include "carrier.h"

int main()
{
	carrier fleet;

	//ship fleet(3, "omega");

	fleet.change_ship_name("omega");
	fleet.crew_quaters_renevation(5);
	fleet.ship_capactiy_renevation(3);
	cout<<"ship name is: "<<fleet.get_ship_name()<<endl;
	cout<<"Crew amount is: "<<fleet.get_crew_amount()<<endl;
	cout<<"storage capacity is: "<<fleet.get_storage_capacity()<<endl;
	cout<<"Maintance cost is: "<<fleet.get_maintance_cost()<<endl;
}