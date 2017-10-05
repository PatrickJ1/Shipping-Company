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
	company eco;

	//naming company and outputting name
	eco.change_company_name();
	cout<<eco.get_name()<<endl;

	building junk, Yard;

	//cout<<junk.get_ID()<<endl;
	//cout<<Yard.get_ID()<<endl;

	eco.add_building(junk);
	eco.add_building(Yard);

	building* tracker = eco.get_buildings();
	cout<<"ID of building"<<endl;
	for(int i = 0 ; i < eco.get_no_buildings(); i++)
	{
		cout << (tracker[i].get_ID())<<endl;
	}

	cout<<money(&junk)<<endl;





}

