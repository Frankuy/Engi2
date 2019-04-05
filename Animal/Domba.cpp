#include <iostream>
#include "Domba.h"
#include "../Product/FarmProduct/DagingDomba.h"
#include "../Product/FarmProduct/SusuDomba.h"
using namespace std;

Domba::Domba(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
    DagingDomba d;
    SusuDomba s;
    milkType = s;
    meatType = d;
}

char Domba::render(){
    return 'd';
}

string Domba::getType() {
    return "Domba";
}