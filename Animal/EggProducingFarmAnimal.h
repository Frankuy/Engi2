#ifndef EGGANIMAL_H
#define EGGANIMAL_H

#include <iostream>
#include "FarmAnimal.h"
#include "../Product/FarmProduct/FarmProduct.h"
#include <string>
using namespace std;

class EggProducingFarmAnimal : public FarmAnimal {
    /* Kelas ini merepresentasikan Hewan yang dapat menghasilkan telur */
    protected:
        bool ableProduceEgg; //apakah hewan sudah bisa memproduksi telur atau tidak.
                            //tergantung status lapar dan produknya sudah diambil atau belum
        FarmProduct eggType;

    public:
        //KONSTRUKTOR
        EggProducingFarmAnimal(Point, string, string, int);

        //SETTER AND GETTER
        bool getAbleProduceEgg();
        void setAbleProduceEgg(bool);

        //METHOD
        FarmProduct produceEgg(); //Menghasilkan FarmProduct yaitu egg
};
#endif