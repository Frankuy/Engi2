#include <iostream>
#include "Bebek.h"
#include "../Product/FarmProduct/TelurBebek.h"
#include "../Product/FarmProduct/DagingBebek.h"
using namespace std;

Bebek::Bebek(Point lokasi, string nama, string suara, int lapar ): FarmAnimal(lokasi, nama, suara, lapar), EggProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
    TelurBebek t;
    DagingBebek d;
    eggType = t;
    meatType = d;
}

char Bebek::render(){
    return 'b';
}

string Bebek::getType() {
    return "Bebek";
}