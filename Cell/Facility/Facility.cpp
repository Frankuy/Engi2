#include "Facility.h"

Facility::Facility(Point P)
{
	this->lokasi.setX(P.getX());
	this->lokasi.setY(P.getY());
}

Point Facility::getLokasi() const
{
	return (this->lokasi);
}