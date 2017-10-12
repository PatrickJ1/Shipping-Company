#ifndef CARRIER_H
#define CARRIER_H
#include "ship.h"

class carrier : public ship //inherits the public function from ship.h
{
private:
	int storage_capacity; // 1 is equivalent to 1 container
public:
	carrier();
	carrier(int initial_storage_capacity,int initial_crew_capacity, std::string inital_ship_name);
	int get_storage_capacity();
	void ship_capactiy_renevation(int new_stroage_capacity);
	int get_maintance_cost();
	//~carrier();
	
};
#endif
