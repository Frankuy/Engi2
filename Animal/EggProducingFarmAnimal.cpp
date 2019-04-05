#include <iostream>
#include "EggProducingFarmAnimal.h"
using namespace std;

EggProducingFarmAnimal::EggProducingFarmAnimal(Point l, string n, string s, int wl): FarmAnimal(l, n, s, wl), eggType("None", 0){
    ableProduceEgg = true;
}

bool EggProducingFarmAnimal::getAbleProduceEgg(){
    return ableProduceEgg;
}
void EggProducingFarmAnimal::setAbleProduceEgg(bool b){
    ableProduceEgg = b;
}

FarmProduct EggProducingFarmAnimal::produceEgg(){
    return eggType;
}