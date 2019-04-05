#ifndef PAKETSATE_H
#define PAKETSATE_H

#include <iostream>
#include <string>
#include "SideProduct.h"
#include "../FarmProduct/DagingSapi.h"
#include "../FarmProduct/DagingAyam.h"
#include "../FarmProduct/DagingKambing.h"
using namespace std;

class PaketSate: public SideProduct{
    //Kelas yang merepresentasikan Sate-satean,
    //gabungan dari daging ayam dan daging sate
    /* Recipe :
        - Daging Sapi
        - Daging Ayam
        - Daging Kambing
       Harga : 500000
     */
    public:
        //KONSTRUKTOR
        PaketSate();
};

#endif