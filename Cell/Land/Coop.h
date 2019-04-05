#ifndef _COOP_H
#define _COOP_H

#include <iostream>
#include <string>
#include "Land.h"
#include "../../Renderable.h"

using namespace std;

class Coop : public Land, public Renderable
{
	public:
	/* Coop : Kelas yang merepresentasikan Coop (subclass Land) dimana 
		kandang EggProducingFarmAnimal 
	*/
		// KONSTRUKTOR
		Coop(Point); 

		string getType();
		
		//METHOD
		char render();
			//Menampilkan representasi Coop
};	

#endif