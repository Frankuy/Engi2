#include "PaketSteak.h"
#include <iostream>
using namespace std;

#include "PaketSteak.h"

PaketSteak::PaketSteak() : SideProduct("Paket Steak", 200000){
    DagingSapi a;
    TelurAyam b;
    requirements.push_back(a);
    requirements.push_back(b);
}