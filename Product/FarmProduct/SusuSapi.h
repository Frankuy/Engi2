#ifndef SUSUSAPI_H
#define SUSUSAPI_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class SusuSapi: public FarmProduct{
    //Kelas yang merepresentasikan susu sapi
    // Parameter Nama : "Susu Sapi"
    // Parameter Harga: 6000
    public:
        //KONSTRUKTOR
        SusuSapi();
};

#endif