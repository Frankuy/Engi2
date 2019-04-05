#include "Land.h"
#include <random>
#include <time.h>
using namespace std;

Land::Land(Point lokasi)
{
	this->lokasi.setX(lokasi.getX());
	this->lokasi.setY(lokasi.getY());

	int i = rand();
	int random;
	for (int i = 0; i < rand(); i++) {
		random = rand() % 2;
	}
	
	if (random == 0) {
		this->setAdaRumputnya(false);
	}
	else {
		this->setAdaRumputnya(true);
	}
}

Point Land::getLokasi() const
{
	return (this->lokasi);
}

bool Land::getAdaRumputnya() const
{
	return (this->adaRumputnya);
}

void Land::setLokasi(Point P)
{
	this->lokasi.setX(P.getX());
	this->lokasi.setY(P.getY());
}

void Land::setAdaRumputnya(bool cek)
{
	this->adaRumputnya = cek;
}



