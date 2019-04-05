#include <iostream>
#include "Ayam.h"
#include "../Product/FarmProduct/TelurAyam.h"
#include "../Product/FarmProduct/DagingAyam.h"
using namespace std;

Ayam::Ayam(Point lokasi, string nama, string suara, int lapar ): EggProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar) {
    TelurAyam t;
    DagingAyam d;
    eggType = t;
    meatType = d;
}

char Ayam::render(){
    return 'a';
}

string Ayam::getType() {
    return "Ayam";
}