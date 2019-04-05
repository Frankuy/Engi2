#ifndef _LAND_H
#define _LAND_H

#include <iostream>
#include <string>
#include "../Cell.h"
#include "../../Renderable.h"

using namespace std;

class Land {
	/* Kelas ini merepresentasikan petak tanah pada setiap cell */
    protected:
			Point lokasi;
			//Lokasi dari land
			bool adaRumputnya;
			//ada rumput atau tidak
    public:
			// KONSTRUKTOR
			Land(Point lokasi);
				//Membuat Land (AKiri sampai BKanan) dengan semua petak ada rumput
		
			// SETTER GETTER
			Point getLokasi() const;
				//Mengembalikkan lokasi Land
			bool getAdaRumputnya() const;
				//Mengembalikkan adakah rumput di lokasi terhadap cell
			void setLokasi(Point);
			void setAdaRumputnya(bool);
};

#endif