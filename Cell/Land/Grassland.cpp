#include "Grassland.h"

Grassland::Grassland(Point P) : Land(P)
{
}

string Grassland::getType() {
	return "Grassland";
}

char Grassland::render()
{
	return adaRumputnya ? 'v' : 'G';
}