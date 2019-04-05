#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

#include <iostream>
#include <string>
#include <vector>
#include "../Product.h"
#include "../FarmProduct/FarmProduct.h" 
#include "../../Player/Player.h" 

using namespace std;

class SideProduct : public Product{
    protected:
        vector<FarmProduct> requirements;
    public:
    // Constructor
        SideProduct(string name, int price);
    // Setter & getter
        int getNbMaterial();
        FarmProduct getMaterialN(int n);
    // Print
        void printRecipe();
};
#endif