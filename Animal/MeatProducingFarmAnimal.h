#ifndef MEATANIMAL_H
#define MEATANIMAL_H
    
#include <iostream>
#include <string>
#include "FarmAnimal.h"
#include "../Product/FarmProduct/FarmProduct.h"
using namespace std;


class MeatProducingFarmAnimal : public FarmAnimal {
    /* Kelas ini merepresentasikan Hewan yang dapat menghasilkan daging */
    protected:
        bool ableProduceMeat; //apakah hewan sudah bisa memproduksi daging atau tidak.
                              //tergantung status lapar dan produknya sudah diambil atau belum
        FarmProduct meatType;
    public:
        //KONSTRUKTOR
        MeatProducingFarmAnimal(Point, string, string, int);
        
        //SETTER AND GETTER
        void setAbleProduceMeat(bool);
        bool getAbleProduceMeat();
        
        //METHOD
        virtual FarmProduct produceMeat() = 0; //menghasilkan farmproduct berupa meat
};
#endif