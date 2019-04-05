#ifndef GEPREKSUSU_H
#define GEPREKSUSU_H

#include <iostream>
#include <string>
#include "SideProduct.h"
#include "../FarmProduct/DagingAyam.h"
#include "../FarmProduct/SusuSapi.h"
using namespace std;

class GeprekSusu: public SideProduct{
    //Kelas turunan sideProduct yang menggabungkan:
    //daging ayam dan susu sapi
    /* Requirements:
        - "Susu Sapi"
        - "Daging Ayam"
     */
    public:
        //KONSTRUKTOR
        GeprekSusu();
};

#endif