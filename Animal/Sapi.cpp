#include <iostream>
#include "Sapi.h"
using namespace std;

Sapi::Sapi(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
}

char Sapi::render(){
    return 's';
}

string Sapi::getType() {
    return "Sapi";
}