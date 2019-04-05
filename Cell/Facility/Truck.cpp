#include "Truck.h"

Truck::Truck(Point P) : Facility(P)
{
}

char Truck::render()
{
	return 'T';
}

string Truck::getType() {
	return "Truck";
}