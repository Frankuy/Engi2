#ifndef PAKETSTEAK_H
#define PAKETSTEAK_H

#include <iostream>
#include <string>
#include "SideProduct.h"
#include "../FarmProduct/DagingSapi.h"
#include "../FarmProduct/TelurAyam.h"

using namespace std;

class PaketSteak: public SideProduct{
    //Kelas turunan side product yang merupakan gabungan
    //dari telur ayam, daging sapi, dan susu sapi
    /* Recipe :
        - Daging Sapi
        - Telur Ayam
       Price : 200000
     */
    public:
        //KONSTRUKTOR
        PaketSteak();
};

#endif