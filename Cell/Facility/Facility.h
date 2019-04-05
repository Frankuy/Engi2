#ifndef _FACILITY_H
#define _FACILITY_H

#include <iostream>
#include <string>
#include "../Cell.h"

using namespace std;

class Facility
{
	/* Kelas ini merepresentasikan facilty pada permainan */
	protected:
		Point lokasi;
			//Lokasi dari faciltiy
	public:
		// KONSTRUKTOR
		Facility(Point);
		Point getLokasi() const;
			//Membentuk fasilitas dan mengeset Lokasinya
};
#endif