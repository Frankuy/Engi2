#ifndef _TRUCK_H
#define _TRUCK_H

#include <iostream>
#include <string>
#include "Facility.h"

using namespace std;

class Truck : public Facility, public Renderable
{
	public:
		Truck(Point);
		char render();
		string getType();
};

#endif