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
#include <sstream>
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
extern int sti(string);

int main()
{
	//have more discription of what progtam does
	company eco = company_creation();

	building* building_storage_pointer= eco.get_buildings();

	office* office_storage_pointer = eco.get_office();

	warehouse* warehouse_storage_pointer = eco.get_warehouse();

	ship* ship_storage_pointer = eco.get_ships();

	carrier* carrier_storage_pointer = eco.get_carrier();

	escort* escort_storage_pointer = eco.get_escort();

	bool program_run = true;
	string command;
	int id;
	string s_id;

	while(program_run == true)
	{
		cout<<endl<<"Enter: 'list_commands' to see command options"
		<<endl<<"Enter command: ";
		
		cin >> command;

		if(command == "end_program")
		{
			program_run = false;
		}
		else if(command == "list_commands")
		{
			cout<<"----command list----"<<endl;
			cout<<"add_ship"<<endl;
			cout<<"add_carrier"<<endl;
			cout<<"add_escort"<<endl;
			cout<<"resize_ship_storage"<<endl;
			cout<<"resize_carrier_storage"<<endl;
			cout<<"resize_escort_storage"<<endl;
			cout<<"remove_ship"<<endl;
			cout<<"remove_carrier"<<endl;
			cout<<"remove_escort"<<endl;
			cout<<"print_all_ship_type"<<endl;
			cout<<"print_all_ships"<<endl;
			cout<<"print_all_carriers"<<endl;
			cout<<"print_all_escorts"<<endl;
			cout<<"print_id_ships"<<endl;
			cout<<"change_ship_name"<<endl;
			cout<<"change_ship_crew_capacity"<<endl;
			cout<<"change_carrier_storage"<<endl;
			cout<<"change_soldier_capacity"<<endl;
			cout<<"change_peace_capacity"<<endl;
			cout<<"add_building"<<endl;
			cout<<"add_office"<<endl;
			cout<<"add_warehouse"<<endl;
			cout<<"resize_building_storage"<<endl;
			cout<<"resize_office_storage"<<endl;
			cout<<"resize_warehouse_storage"<<endl;
			cout<<"remove_building"<<endl;
			cout<<"remove_office"<<endl;
			cout<<"remove_warehouse"<<endl;
			cout<<"change_building_location"<<endl;
			cout<<"change_building_worker_capacity"<<endl;
			cout<<"print_all_type_buildings"<<endl;
			cout<<"print_all_buildings"<<endl;
			cout<<"print_all_offices"<<endl;
			cout<<"print_all_warehouses"<<endl;
			cout<<"print_id_building"<<endl;
			cout<<"change_office_space"<<endl;
			cout<<"change_meeting_room_no"<<endl;
			cout<<"change_number_of_ports"<<endl;
			cout<<"change_number_of_repair_stations"<<endl;
			cout<<"change_number_truck_bays"<<endl;
			cout<<"total_maintance_cost"<<endl;
			cout<<"storage_stats"<<endl;
			cout<<"end_program"<<endl;
			cout<<"----end list----"<<endl;



		}
		else if(command == "add_ship")
		{
			//don't let them create if can't hold
			if(eco.get_no_ships()<eco.get_max_no_ships())
			{
				eco.add_ship(ship_creation());

				cout<<"Ship ID is: "<<ship_storage_pointer[eco.get_no_ships()-1].get_ship_id()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "add_carrier")
		{
			if(eco.get_no_carrier()<eco.get_max_no_carrier())
			{
				eco.add_carrier(carrier_creation());

				cout<<"Ship ID is: "<<carrier_storage_pointer[eco.get_no_carrier() -1].get_ship_id()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "add_escort")
		{
			if(eco.get_no_escort()<eco.get_max_no_carrier())
			{
				eco.add_escort(escort_creation());
				cout<<"Ship ID is: "<<escort_storage_pointer[eco.get_no_escort()-1].get_ship_id()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "resize_ship_storage")
		{
			cout<<"Enter new ship storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			ship_storage_pointer =  eco.renevate_ship_storage_capability(new_size);

		}
		else if(command == "resize_carrier_storage")
		{
			cout<<"Enter new carrier storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			carrier_storage_pointer =  eco.renevate_carrier_storage_capability(new_size);

		}
		else if(command == "resize_escort_storage")
		{
			cout<<"Enter new escort ship storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			escort_storage_pointer =  eco.renevate_escort_storage_capability(new_size);

		}
		else if(command == "remove_ship")
		{
			cout<<"Enter id of ship you wish to delete: ";
			id = sti(s_id);

			ship_storage_pointer = eco.remove_ship(id);
		}
		else if(command == "remove_carrier")
		{
			cout<<"Enter id of carrier you wish to delete: ";
			id = sti(s_id);

			carrier_storage_pointer = eco.remove_carrier(id);
		}
		else if(command == "remove_escort")
		{
			cout<<"Enter id of escort ship you wish to delete: ";
			id = sti(s_id);

			escort_storage_pointer = eco.remove_escort(id);
		}
		else if(command == "print_all_ship_type")
		{
			for(int i =0; i<eco.get_no_ships(); i++)
			{
				ship_print(&ship_storage_pointer[i]);
				cout<<endl;
			}

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				ship_print(&carrier_storage_pointer[i]);
				carrier_print(&carrier_storage_pointer[i]);
				cout<<endl;
			}

			for(int i =0; i<eco.get_no_escort(); i++)
			{
				ship_print(&escort_storage_pointer[i]);
				escort_print(&escort_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_all_ships")
		{
			for(int i =0; i<eco.get_no_ships(); i++)
			{
				ship_print(&ship_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_all_carriers")
		{
			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				ship_print(&carrier_storage_pointer[i]);
				carrier_print(&carrier_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_all_escorts")
		{
			for(int i =0; i<eco.get_no_escort(); i++)
			{
				ship_print(&escort_storage_pointer[i]);
				escort_print(&escort_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_id_ships")
		{
			cout<<"Enter id of ship you wish to print: ";
			id = sti(s_id);

			for(int i =0; i<eco.get_no_ships(); i++)
			{
				if(id == ship_storage_pointer[i].get_ship_id())
				{
					ship_print(&ship_storage_pointer[i]);
					cout<<endl;
				}
			}

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					ship_print(&carrier_storage_pointer[i]);
					carrier_print(&carrier_storage_pointer[i]);
					cout<<endl;
				}
			}

			for(int i =0; i<eco.get_no_escort(); i++)
			{
				if(id == escort_storage_pointer[i].get_ship_id())
				{
					ship_print(&escort_storage_pointer[i]);
					escort_print(&escort_storage_pointer[i]);
					cout<<endl;
				}
			}
		}
		else if(command == "change_ship_name")
		{
			cout<<"Enter id of ship you wish to modify: ";
			id = sti(s_id);
			string new_name;

			for(int i =0; i<eco.get_no_ships(); i++)
			{
				if(id == ship_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: ship"<<endl;
					cout<<"Old name is: "<<ship_storage_pointer[i].get_ship_name()<<endl;
					cout<<"Enter new ship name: ";
					cin >> new_name;
					ship_storage_pointer[i].change_ship_name(new_name);
				}
			}

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: carrier"<<endl;
					cout<<"Old name is: "<<carrier_storage_pointer[i].get_ship_name()<<endl;
					cout<<"Enter new ship name: ";
					cin >> new_name;
					carrier_storage_pointer[i].change_ship_name(new_name);
				}
			}

			for(int i =0; i<eco.get_no_escort(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: escort ship"<<endl;
					cout<<"Old name is: "<<escort_storage_pointer[i].get_ship_name()<<endl;
					cout<<"Enter new ship name: ";
					cin >> new_name;
					escort_storage_pointer[i].change_ship_name(new_name);
				}
			}
		}
		else if(command == "change_ship_crew_capacity")
		{
			cout<<"Enter id of ship you wish to modify: ";
			id = sti(s_id);
			int new_crew_capacity;
			string s_new_crew_capacity;

			for(int i =0; i<eco.get_no_ships(); i++)
			{
				if(id == ship_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: ship"<<endl;
					cout<<"Old crew capacity is: "<<ship_storage_pointer[i].get_crew_amount()<<endl;
					cout<<"Enter new crew capacity: ";
					new_crew_capacity = sti(s_new_crew_capacity);
					ship_storage_pointer[i].crew_quaters_renevation(new_crew_capacity);
				}
			}

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: carrier"<<endl;
					cout<<"Old crew capacity is: "<<carrier_storage_pointer[i].get_crew_amount()<<endl;
					cout<<"Enter new crew capacity: ";
					new_crew_capacity = sti(s_new_crew_capacity);
					carrier_storage_pointer[i].crew_quaters_renevation(new_crew_capacity);
				}
			}

			for(int i =0; i<eco.get_no_escort(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Ship type is: escort ship"<<endl;
					cout<<"Old crew capacity is: "<<escort_storage_pointer[i].get_crew_amount()<<endl;
					cout<<"Enter new crew capacity: ";
					new_crew_capacity = sti(s_new_crew_capacity);
					escort_storage_pointer[i].crew_quaters_renevation(new_crew_capacity);
				}
			}
		}
		else if(command == "change_carrier_storage")
		{
			cout<<"Enter id of carrier you wish to modify: ";
			id = sti(s_id);
			int new_storage;
			string s_new_storage;

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Old storage capacity is: "<<carrier_storage_pointer[i].get_storage_capacity()<<endl;
					cout<<"Enter new storage capacity: ";
					new_storage = sti(s_new_storage);
					carrier_storage_pointer[i].ship_capactiy_renevation(new_storage);
				}
			}
		}
		else if(command == "change_soldier_capacity")
		{
			cout<<"Enter id of escort ship you wish to modify: ";
			id = sti(s_id);
			int new_soldier;
			string s_new_soldier;
			for(int i =0; i<eco.get_no_escort(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Old soldier capacity is: "<<escort_storage_pointer[i].get_soldiers_amount()<<endl;
					cout<<"Enter new soldier capacity: ";
					new_soldier = sti(s_new_soldier);
					escort_storage_pointer[i].defence_center_renevation(new_soldier);
				}
			}
		}
		else if(command == "change_peace_capacity")
		{
			cout<<"Enter id of escort ship you wish to modify: ";
			id = sti(s_id);
			int new_peace;
			string s_new_peace;
			for(int i =0; i<eco.get_no_escort(); i++)
			{
				if(id == carrier_storage_pointer[i].get_ship_id())
				{
					cout<<"Old equiptment of peace capacity is: "<<escort_storage_pointer[i].get_peace_equiptment_amount()<<endl;
					cout<<"Enter new equiptment of peace capacity: ";
					new_peace = sti(s_new_peace);
					escort_storage_pointer[i].change_peace_equiptment_amount(new_peace);
				}
			}
		}
		else if(command == "add_building")
		{
			if(eco.get_no_buildings()<eco.get_max_no_buildings())
			{
				eco.add_building(building_creation());

				cout<<"Building ID is: "<<building_storage_pointer[eco.get_no_buildings()-1].get_ID()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "add_office")
		{	
			if(eco.get_no_office()<eco.get_max_no_office())
			{
				eco.add_office(office_creation());
				cout<<"Building ID is: "<<office_storage_pointer[eco.get_no_office()-1].get_ID()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "add_warehouse")
		{
			if(eco.get_no_warehouse()<eco.get_max_no_warehouse())
			{
				eco.add_warehouse(warehouse_creation());
				cout<<"Building ID is: "<<warehouse_storage_pointer[eco.get_no_warehouse()-1].get_ID()<<endl;
			}
			else
			{
				cout<<"storage full"<<endl;
			}
		}
		else if(command == "resize_building_storage")
		{
			cout<<"Enter new building storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			building_storage_pointer =  eco.rescale_building_budget(new_size);

		}
		else if(command == "resize_office_storage")
		{
			cout<<"Enter new office storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			office_storage_pointer =  eco.rescale_office_budget(new_size);	
		}
		else if(command == "resize_warehouse_storage")
		{
			cout<<"Enter new warehouse storage size: ";
			int new_size;
			string s_new_size;
			new_size = sti(s_new_size);
			warehouse_storage_pointer =  eco.rescale_warehouse_budget(new_size);	
		}
		else if(command == "remove_building")
		{
			cout<<"Enter id of building you wish to delete: ";
			id = sti(s_id);

			building_storage_pointer = eco.remove_building(id);
		}
		else if(command == "remove_office")
		{
			cout<<"Enter id of office you wish to delete: ";
			id = sti(s_id);

			office_storage_pointer = eco.remove_office(id);
		}
		else if(command == "remove_warehouse")
		{
			cout<<"Enter id of warehouse you wish to delete: ";
			id = sti(s_id);

			warehouse_storage_pointer = eco.remove_warehouse(id);
		}
		else if(command == "change_building_location")
		{
			cout<<"Enter id of building you wish to modify: ";
			id = sti(s_id);
			cout<<"Building type is: ";
			string new_location;
			for(int i = 0; i<eco.get_no_buildings(); i++)
			{
				if(id == building_storage_pointer[i].get_ID())
				{
					cout<<building_storage_pointer[i].get_building_type()<<endl;
					cout<<"old location is: "<<building_storage_pointer[i].get_branch_location()<<endl;
					cout<<"Enter new location: ";
					cin >> new_location;
					building_storage_pointer[i].change_branch_location(new_location);
				}
			}

			for(int i =0; i < eco.get_no_office(); i++)
			{
				if(id == office_storage_pointer[i].get_ID())
				{
					cout<<office_storage_pointer[i].get_building_type()<<endl;
					cout<<"old location is: "<<office_storage_pointer[i].get_branch_location()<<endl;
					cout<<"Enter new location: ";
					cin >> new_location;
					office_storage_pointer[i].change_branch_location(new_location);
				}
			}

			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					cout<<warehouse_storage_pointer[i].get_building_type()<<endl;
					cout<<"old location is: "<<warehouse_storage_pointer[i].get_branch_location()<<endl;
					cout<<"Enter new location: ";
					cin >> new_location;
					warehouse_storage_pointer[i].change_branch_location(new_location);
				}
			}

		}
		else if(command == "change_building_worker_capacity")
		{
			cout<<"Enter id of building you wish to modify: ";
			id = sti(s_id);
			cout<<"Building type is: ";
			int new_worker_capacity;
			string s_new_worker_capacity;

			for(int i = 0; i<eco.get_no_buildings(); i++)
			{
				if(id == building_storage_pointer[i].get_ID())
				{
					cout<<building_storage_pointer[i].get_building_type()<<endl;
					cout<<"old worker capacity is: "<<building_storage_pointer[i].get_worker_capacity()<<endl;
					cout<<"Enter new worker capacity: ";
					new_worker_capacity = sti(s_new_worker_capacity);
					building_storage_pointer[i].change_worker_capacity(new_worker_capacity);
				}
			}

			for(int i =0; i < eco.get_no_office(); i++)
			{
				if(id == office_storage_pointer[i].get_ID())
				{
					cout<<office_storage_pointer[i].get_building_type()<<endl;
					cout<<"old worker capacity is: "<<office_storage_pointer[i].get_worker_capacity()<<endl;
					cout<<"Enter new worker capacity: ";
					new_worker_capacity = sti(s_new_worker_capacity);
					office_storage_pointer[i].change_worker_capacity(new_worker_capacity);
				}
			}

			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					cout<<warehouse_storage_pointer[i].get_building_type()<<endl;
					cout<<"old worker capacity is: "<<warehouse_storage_pointer[i].get_worker_capacity()<<endl;
					cout<<"Enter new worker capacity: ";
					new_worker_capacity = sti(s_new_worker_capacity);
					warehouse_storage_pointer[i].change_worker_capacity(new_worker_capacity);
				}
			}
		}
		else if(command == "print_all_type_buildings")
		{
			for(int i =0; i<eco.get_no_buildings(); i++)
			{
				building_print(& building_storage_pointer[i]);
				cout<<endl;
			}

			for(int i =0; i < eco.get_no_office(); i++)
			{

				building_print(& office_storage_pointer[i]);
				office_print(& office_storage_pointer[i]);
				cout<<endl;
			}

			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				building_print(& warehouse_storage_pointer[i]);
				warehouse_print(& warehouse_storage_pointer[i]);
				cout<<endl;
			}

			//two more for each type.
			// link to general function which adds more if buildig is office or warhouse. if type = office
		}
		else if(command == "print_all_buildings")
		{
			for(int i =0; i<eco.get_no_buildings(); i++)
			{
				building_print(& building_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_all_offices")
		{
			for(int i =0; i < eco.get_no_office(); i++)
			{

				building_print(& office_storage_pointer[i]);
				office_print(& office_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_all_warehouses")
		{
			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				building_print(& warehouse_storage_pointer[i]);
				warehouse_print(& warehouse_storage_pointer[i]);
				cout<<endl;
			}
		}
		else if(command == "print_id_building")
		{
			cout<<"Enter id of building you wish to print: ";
			id = sti(s_id);

			for(int i = 0; i<eco.get_no_buildings(); i++)
			{
				if(id == building_storage_pointer[i].get_ID())
				{
					building_print(& building_storage_pointer[i]);
					cout<<endl;
				}
			}

			for(int i =0; i < eco.get_no_office(); i++)
			{
				if(id == office_storage_pointer[i].get_ID())
				{
					
					building_print(& office_storage_pointer[i]);
					office_print(& office_storage_pointer[i]);
					cout<<endl;
				}
			}

			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					building_print(& warehouse_storage_pointer[i]);
					warehouse_print(& warehouse_storage_pointer[i]);
					cout<<endl;
				}
			}
		}
		else if(command == "change_office_space")
		{
			cout<<"Enter id of office you wish to modify: ";
			id = sti(s_id);

			int new_office;
			string s_new_office;
			for(int i =0; i < eco.get_no_office(); i++)
			{
				if(id == office_storage_pointer[i].get_ID())
				{
					cout<<"old number of office spaces are: "<<office_storage_pointer[i].get_no_of_office_spaces()<<endl;
					cout<<"Enter new number of office spaces: ";
					new_office = sti(s_new_office);
					office_storage_pointer[i].renevate_office_spaces(new_office);
				}
			}
		}
		else if(command == "change_meeting_room_no")
		{
			cout<<"Enter id of office you wish to modify: ";
			id = sti(s_id);

			int new_meeting;
			string s_new_meeting;
			for(int i =0; i < eco.get_no_office(); i++)
			{
				if(id == office_storage_pointer[i].get_ID())
				{
					cout<<"old number of meeting rooms are: "<<office_storage_pointer[i].get_no_of_meeting_rooms()<<endl;
					cout<<"Enter new number of meeting rooms: ";
					new_meeting = sti(s_new_meeting);
					office_storage_pointer[i].renevate_meeting_rooms(new_meeting);
				}
			}
		}
		else if(command == "change_number_of_ports")
		{
			cout<<"Enter id of warehouse you wish to modify: ";
			id = sti(s_id);

			int no_port;
			string s_no_port;
			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					cout<<"old number of ports: "<<warehouse_storage_pointer[i].get_no_ports()<<endl;
					cout<<"Enter new number of ports: ";
					no_port = sti(s_no_port);
					warehouse_storage_pointer[i].change__no_ports(no_port);
				}
			}
		}
		else if(command == "change_number_of_repair_stations")
		{
			cout<<"Enter id of warehouse you wish to modify: ";
			id = sti(s_id);

			int no_repair_stations;
			string s_no_repair_stations;
			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					cout<<"old number of ship repair stations: "<<warehouse_storage_pointer[i].get_no_ship_repair_stations()<<endl;
					cout<<"Enter new number of ship repair stations: ";
					no_repair_stations = sti(s_no_repair_stations);
					warehouse_storage_pointer[i].change_no_ship_repair_stations(no_repair_stations);
				}
			}
		}
		else if(command == "change_number_truck_bays")
		{
			cout<<"Enter id of warehouse you wish to modify: ";
			id = sti(s_id);

			int no_truck_bays;
			string s_no_truck_bays;
			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				if(id == warehouse_storage_pointer[i].get_ID())
				{
					cout<<"old number of truck loading bays: "<<warehouse_storage_pointer[i].get_no_truck_loading_bay()<<endl;
					cout<<"Enter new number of truck loading bays: ";
					no_truck_bays = sti(s_no_truck_bays);
					warehouse_storage_pointer[i].change_no_truck_loading_bay(no_truck_bays);
				}
			}
		}
		else if(command == "total_maintance_cost")
		{
			int cost =0;
			for(int i = 0; i<eco.get_no_buildings(); i++)
			{
				cost = building_storage_pointer[i].get_maintance_cost() + cost;
			}

			for(int i =0; i < eco.get_no_office(); i++)
			{
				cost = office_storage_pointer[i].get_maintance_cost() + cost;
			}

			for(int i =0; i < eco.get_no_warehouse(); i++)
			{
				cost = warehouse_storage_pointer[i].get_maintance_cost() + cost;
			}

			for(int i =0; i<eco.get_no_ships(); i++)
			{
				cost = ship_storage_pointer[i].get_maintance_cost() + cost;
			}

			for(int i =0; i<eco.get_no_carrier(); i++)
			{
				cost = carrier_storage_pointer[i].get_maintance_cost() + cost;
			}

			for(int i =0; i<eco.get_no_escort(); i++)
			{
				cost = escort_storage_pointer[i].get_maintance_cost() + cost;
			}

			cout<<"Current total maintance cost is: "<<cost<<endl;
		}
		else if(command == "storage_stats")
		{
			cout<<"building storage capacity is:"<<eco.get_max_no_buildings()<<endl;
			cout<<"Currently "<<eco.get_no_buildings()<<" stored"<<endl<<endl;

			cout<<"office storage capacity is:"<<eco.get_max_no_office()<<endl;
			cout<<"Currently "<<eco.get_no_office()<<" stored"<<endl<<endl;

			cout<<"warehouse storage capacity is:"<<eco.get_max_no_warehouse()<<endl;
			cout<<"Currently "<<eco.get_no_warehouse()<<" stored"<<endl<<endl;

			cout<<"ship storage capacity is:"<<eco.get_max_no_ships()<<endl;
			cout<<"Currently "<<eco.get_no_ships()<<" stored"<<endl<<endl;

			cout<<"carrier storage capacity is:"<<eco.get_max_no_carrier()<<endl;
			cout<<"Currently "<<eco.get_no_carrier()<<" stored"<<endl<<endl;

			cout<<"escort ship storage capacity is:"<<eco.get_max_no_escort()<<endl;
			cout<<"Currently "<<eco.get_no_escort()<<" stored"<<endl<<endl;
		}
		else
		{
			cout<<"Error"<<endl<<
			"Input does not match any known commands"<<endl;
		}
	}
}