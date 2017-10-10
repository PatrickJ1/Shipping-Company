#include <iostream>
#include <string>
using namespace std;
#include "ship.h"
#include "escort.h"

int main()
{
	escort fleet;

	//ship fleet(3, "omega");

	fleet.change_ship_name("omega");//testing shit lol
	fleet.crew_quaters_renevation(5);
	fleet.change_peace_equiptment_amount(4);
	fleet.defence_center_renevation(5);
	cout<<"ship name is: "<<fleet.get_ship_name()<<endl;
	cout<<"Crew amount is: "<<fleet.get_crew_amount()<<endl;
	cout<<"Soldier amount is: "<<fleet.get_soldiers_amount()<<endl;
	cout<<"Equiptment of peace amount is: "<<fleet.get_peace_equiptment_amount()<<endl;
	cout<<"Maintance cost is: "<<fleet.get_maintance_cost()<<endl;
}
