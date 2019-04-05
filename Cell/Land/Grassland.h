#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include <iostream>
#include <string>
#include "Land.h"
#include "../../Renderable.h"

using namespace std;

class Grassland : public Land, public Renderable
{
	/* Grassland : Kelas yang merepresentasikan Grassland (subclass Land) dimana 
		kandang MilkProducingFarmAnimal 
	*/
	public:
		// KONSTRUKTOR
		Grassland(Point);

		string getType();
		//METHOD
		char render();
			//Mencetak representasi grassland
};

#endif