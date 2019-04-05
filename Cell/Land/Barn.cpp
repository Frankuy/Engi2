    
#include "Barn.h"

Barn::Barn(Point P) : Land(P)
{
}

char Barn::render()
{
	return adaRumputnya ? '/' : 'B';
}

string Barn::getType() {
	return "Barn";
}