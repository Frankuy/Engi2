#ifndef DAGINGSAPI_H
#define DAGINGSAPI_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class DagingSapi: public FarmProduct{
    //Kelas yang merepresentasikan daging sapi
    // Parameter Nama : "Daging Sapi"
    // Parameter Harga: 179000
    public:
        //KONSTRUKTOR
        DagingSapi();
};

#endif