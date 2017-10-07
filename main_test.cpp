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
int money(cost *object)
{
	int money1 = object ->get_maintance_cost();
	cout<<"money is"<<endl;
	return money1;
}
int main()
{
	/*company eco;

	//naming company and outputting name
	eco.change_company_name();
	cout<<eco.get_name()<<endl;

	building junk(3, 2, "stone", 3, "Paris");
	building Yard(2, 1, "paper", 0, "Paris-street");

	//cout<<junk.get_ID()<<endl;
	//cout<<Yard.get_ID()<<endl;

	eco.add_building(junk);
	eco.add_building(Yard);

	building* tracker = eco.get_buildings();
	cout<<"ID of building"<<endl;
	cout<<money(&junk)<<endl;

	for(int i = 0 ; i < eco.get_no_buildings(); i++)
	{
		cout << (tracker[i].get_ID())<<endl;
	}

	

	tracker = eco.remove_building(0);

	for(int i = 0 ; i < eco.get_no_buildings(); i++)
	{
		cout << (tracker[i].get_ID())<<endl;
	}*/


	company eco;
	eco.change_company_name("eco");
	cout<<eco.get_name()<<endl;
	int i =0;
	while(i ==0)
	{
		building junk(3, 2, "stone", 3, "Paris");
		cout<<"enter i"<<endl;
		cin >> i;
		cout<<junk.get_ID()<<endl;
	}

	


}

