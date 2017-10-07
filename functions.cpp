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

building building_creation()
{
	cout<<"Building creation:"<<endl;
	cout<<"Enter building width: ";
	int width;
	cin >> width;
	cout<<"Enter building height: ";
	int height;
	cin >> width;
	cout<<"Enter building material: ";
	string material;
	cin >> material;
	cout<<"Enter building worker capacity: ";
	int capacity;
	cin >> capacity;
	cout<<"Enter building location: ";
	string location;
	cin >> location;

	building house(width, height, material, capacity, location);

	return house;
}

office office_creation()
{
	cout<<"Building creation:"<<endl;

	cout<<"Enter number of office spaces: ";
	int no_office_space;
	cin >> no_office_space;
	
	cout<<"Enter number of meeting rooms";
	int no_meeting_rooms;
	cin >> no_meeting_rooms;


	cout<<"Enter building width: ";
	int width;
	cin >> width;

	cout<<"Enter building height: ";
	int height;
	cin >> width;

	cout<<"Enter building material: ";
	string material;
	cin >> material;

	cout<<"Enter building worker capacity: ";
	int capacity;
	cin >> capacity;

	cout<<"Enter building location: ";
	string location;
	cin >> location;

	office pro_house(no_office_space, no_meeting_rooms, width, height, material, capacity, location);
	return pro_house;
}