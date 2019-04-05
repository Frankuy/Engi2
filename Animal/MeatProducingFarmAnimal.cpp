#include <iostream>
#include "MeatProducingFarmAnimal.h"
using namespace std;

MeatProducingFarmAnimal::MeatProducingFarmAnimal(Point l, string n, string s, int wl): FarmAnimal(l, n, s, wl), meatType("None", 0){
    ableProduceMeat = true;
}

bool MeatProducingFarmAnimal::getAbleProduceMeat(){
    return ableProduceMeat;
}
void MeatProducingFarmAnimal::setAbleProduceMeat(bool b){
    ableProduceMeat = b;
}

FarmProduct MeatProducingFarmAnimal::produceMeat(){
    return meatType;
}