#include "PaketSate.h"
#include <iostream>
using namespace std;

#include "PaketSate.h"

PaketSate::PaketSate() : SideProduct("Paket Sate", 500000){
    DagingSapi a;
    DagingAyam b;
    DagingKambing c;
    requirements.push_back(a);
    requirements.push_back(b);
    requirements.push_back(c);
}