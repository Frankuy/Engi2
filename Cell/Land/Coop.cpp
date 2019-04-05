    
#include "Coop.h"

Coop::Coop(Point P) : Land(P)
{
}

char Coop::render()
{
	return adaRumputnya ? '*' : 'C';
}

string Coop::getType() {
	return "Coop";
}