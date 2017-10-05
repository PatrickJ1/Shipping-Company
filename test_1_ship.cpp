#include <iostream>
#include <string>
using namespace std;
#include "ship.h"

//comment out virtual in ship.h when testing
int main()
{
	ship fleet;

	//ship fleet(3, "omega");

	fleet.change_ship_name("omega");
	fleet.crew_quaters_renevation(5);
	cout<<"ship name is:"<<fleet.get_ship_name()<<endl;
	cout<<"Crew amount is:"<<fleet.get_crew_amount()<<endl;
}

