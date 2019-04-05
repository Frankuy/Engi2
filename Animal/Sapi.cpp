#include <iostream>
#include "Sapi.h"
#include "../Product/FarmProduct/DagingSapi.h"
#include "../Product/FarmProduct/SusuSapi.h"
using namespace std;

Sapi::Sapi(Point lokasi, string nama, string suara, int lapar ): FarmAnimal(lokasi, nama, suara, lapar),  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
    SusuSapi s;
    DagingSapi d;
    meatType = d;
    milkType = s;
}

char Sapi::render(){
    return 's';
}

string Sapi::getType() {
    return "Sapi";
}