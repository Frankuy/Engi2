#ifndef KUDA_H
#define KUDA_H

#include "MilkProducingFarmAnimal.h"

class Kuda : public MilkProducingFarmAnimal, public Renderable {
    /* Kuda : kelas ini merepresentasikan kelas rill Kuda */
    public:
    //KONSTRUKTOR
    Kuda(Point lokasi, string nama, string suara, int lapar);
    char render();
    string getType();
};
#endif