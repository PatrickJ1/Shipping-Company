#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <iostream>
#include "cost.h"

//inheritace from abstract class cost
class ship : public cost
{
private:
	static int currentID;
	int shipID;
	std::string ship_name;

protected:
	int crew_capacity;

//initializing funcitons
public:
	ship();
	ship(int initial_crew_capacity, std::string inital_ship_name);
	void crew_quaters_renevation(int new_crew_capacity);
	int get_crew_amount();
	std::string get_ship_name();
	void change_ship_name(std::string new_name);
	int get_ship_id();
	int get_maintance_cost();
};
#endif
