#include "ship.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ship fleet();

	fleet.change_ship_name("omega");
	fleet.crew_quaters_renevation(5);
	cout<<"ship name is:"<<fleet.get_ship_name()<<endl;
	cout<<"Crew amount is:"<<fleet.get_crew_amount()<<endl;
}

