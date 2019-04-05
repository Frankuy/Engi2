#include "SideProduct.h"

SideProduct::SideProduct(string name, int price): Product(name, price){
}

int SideProduct::getNbMaterial(){
    return requirements.size();
}

FarmProduct SideProduct::getMaterialN(int n){
    return requirements[n];
}

void SideProduct::printRecipe(){
  for (vector<FarmProduct>::iterator it = requirements.begin(); it != requirements.end(); ++it)
    cout << " -" << *it;
}