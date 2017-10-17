#include <string>
#include <iostream>
#include "port.h"
using namespace std;
int port::currentID = 0;

/*default constructor, takes in functions and variables from
the building abstract class */
port::port()
{
	portID = currentID;
	currentID++;
	name_of_port = "vacant"
	number_of_loading_bays = 0;
	number_of_containers =0;


}


