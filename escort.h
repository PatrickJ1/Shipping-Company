#ifndef ESCORT_H
#define ESCORT_H
#include "ship.h"

//inherits from the ship class
class escort : public ship
{
private:
	int number_of_soldiers;
	int equiptment_of_peace;

//initializing functions
public:
	escort();
	escort(int initial_crew_capacity, std::string inital_ship_name, 
			int initial_number_of_soldiers, int initial_eqiptment_of_peace);
	int get_soldiers_amount();
	int get_peace_equiptment_amount();
	void change_peace_equiptment_amount(int new_equiptment_of_peace);
	void defence_center_renevation(int new_numbers_of_soldiers);
	int get_maintance_cost();
};
#endif
