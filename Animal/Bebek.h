#ifndef BEBEK_H
#define BEBEK_H

#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Bebek : public EggProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Bebek : kelas ini merepresentasikan kelas rill Bebek */
    //KONSTRUKTOR
    Bebek(Point lokasi, string nama, string suara, int lapar);
    char render();
    string getType();
};
#endif