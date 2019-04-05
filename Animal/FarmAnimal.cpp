#include <iostream>
#include "FarmAnimal.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

//Point lokasi; //lokasi hewan
//string nama; //nama hewan
//string suara; //suara hewan
//const int waktuLapar; //periode lapar hewan. Misal, tiap 5 tick lapar
//bool lapar; //apakah hewan lapar atau tidak

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "FarmAnimal.h"
#include "../Cell/Land/Land.h"
using namespace std;

//Point lokasi; //lokasi hewan
//string nama; //nama hewan
//string suara; //suara hewan
//const int waktuLapar; //periode lapar hewan. Misal, tiap 5 tick lapar
//bool lapar; //apakah hewan lapar atau tidak

FarmAnimal::FarmAnimal(Point l, string n, string s, int wl): waktuLapar(wl){
    lokasi = l;
    nama = n;
    suara = s;
    lapar = false;
    ticks = 0;
}

FarmAnimal::~FarmAnimal(){}

void FarmAnimal::setLokasi(Point p){
    lokasi = p;
}
void FarmAnimal::setNama(string s){
    nama = s;
}
void FarmAnimal::setSuara(string s){
    suara = s;
}
void FarmAnimal::setLapar(bool b){
    lapar = b;
}

Point FarmAnimal::getLokasi() const{
    return lokasi;
}
string FarmAnimal::getNama() const{
    return nama;
}
string FarmAnimal::getSuara() const{
    return suara;
}
bool FarmAnimal::getLapar() const{
    return lapar;
}

void FarmAnimal::gerak(){ 
    int iRand; 
    iRand = rand() % 4;
    
    if(iRand == 0){ //Gerak ke Kanan
        lokasi.setX(lokasi.getX() + 1); 
    }
    if(iRand == 1){ //Gerak ke Kiri
        lokasi.setX(lokasi.getX() - 1); 
    }
    if(iRand == 2){ //Gerak ke Atas
        lokasi.setY(lokasi.getY() + 1);
    }
    if(iRand == 3){ //Gerak ke Bawah
        lokasi.setY(lokasi.getY() - 1);
    }

    ticks++;
    if(ticks % waktuLapar == 0){
        lapar = true;
    }
}

void FarmAnimal::bersuara(){
    cout << suara << endl;
}

void FarmAnimal::mati(){
    cout << "Si " << nama << " telah mati." << endl; 
}

void FarmAnimal::makan() {
    lapar = false;
}
// void FarmAnimal::makan(Land* place){
//     if(place->getAdaRumputnya()){  
//         cout << "Si " << nama << " makan." << endl;
//         lapar = false;
//         place->setAdaRumputnya(false);
//     } 
//     else{
//         cout << "Tidak bisa makan disini" << endl;
//     }
// }