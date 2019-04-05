#ifndef KAMBING_H
#define KAMBING_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Kambing: public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Kambing : kelas ini merepresentasikan kelas rill Kambing */
    public:
    //KONSTRUKTOR
    Kambing(Point lokasi, string nama, string suara, int lapar);
    char render();
    string getType();
};
#endif