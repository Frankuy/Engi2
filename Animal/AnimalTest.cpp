#include <iostream>
#include "FarmAnimal.h"
#include "../Point.h"
#include "../Player/Player.h"
#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"
#include "MilkProducingFarmAnimal.h"
#include "Ayam.h"
#include "Sapi.h"
using namespace std;

int main(){
    Player user;
    Point p1(3,3);
    Sapi s(p1, "Sapi", "Moo", 55);
    Ayam a(p1, "Ayam", "Kok", 24);
    FarmAnimal* fa = &s; 
    user.talk(fa);
        
}