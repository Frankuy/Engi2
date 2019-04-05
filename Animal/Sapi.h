#ifndef SAPI_H
#define SAPI_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    public:
    //KONSTRUKTOR
    Sapi(Point lokasi, string nama, string suara, int lapar);
    char render();
    string getType();
};
#endif