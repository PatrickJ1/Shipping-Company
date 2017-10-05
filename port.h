#ifndef PORT_H
#define PORT_H
#include <string>
#include <iostream>

class port
{
	static int portID;
	int number_of_loading_bays;
	int number_of_containers;
	std::string name_of_port;

public:
	port();
	~port();
	
};
#endif