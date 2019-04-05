#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

//KONSTRUKTOR
Player::Player() : kapasitasEmber(6), kapasitasTas(10) {
    ember = 0;
    tas = LinkedList<Product>();
    neffTas = 0;
    uang = 0;
    lokasi = Point(0,0);
}

Player::Player(int e, int ke, int kt, Point l, int u) : kapasitasEmber(ke), kapasitasTas(kt) {
    ember = e;
    tas = LinkedList<Product>();
    neffTas = 0;
    uang = u;
    lokasi = l;
}

string Player::getType() {
    return "Player";
}

//GETTER
int Player::getEmber() const{
    return ember;
}

int Player::getNeffTas() const {
    return neffTas;
}

int Player::getKapasitasTas() const {
    return kapasitasTas;
}

int Player::getKapasitasEmber() const {
    return kapasitasEmber;
}

Point Player::getLokasi() const {
    return lokasi;
}

Product Player::getProduct(int idx) const {
    return tas.get(idx);
}

int Player::getUang() const {
    return uang;
}

//SETTER
void Player::setNeffTas(int _n) {
    neffTas = _n;
}

void Player::setTas(bool input, Product p) {
    if (input) {
        if (neffTas < kapasitasTas) {
            tas.add(p);
            neffTas++;
        }
        else {
            cout << "Tas tidak cukup!" << endl;
        }
    }
    else {
        tas.remove(p);
    }
}

void Player::setEmber(int n) {
    ember = n;
}

void Player::setLokasi(Point p) {
    lokasi = p;
}

void Player::setUang(int u) {
    uang = u;
}

//USEFUL FUNTION
void Player::lihatTas() {
    Node<Product>* temp = tas.first;
    if (temp == NULL) {
        cout << "Tas Kosong" << endl;
    }
    else {
        cout << "Tas : " << endl;
        while (temp != NULL) {
            cout << ' ' << temp->value;
            temp = temp->next;
        }
    }
}

void Player::status() {
    cout << "Ember : " << getEmber() << endl;
    cout << "Lokasi : " << getLokasi() << endl;
    cout << "Uang : " << getUang() << endl;
    lihatTas();
}

//METHOD
void Player::talk(FarmAnimal *a) {
    a->bersuara();
}

void Player::interact(FarmAnimal *f) {
    //f.produce();
}

void Player::interact(MeatProducingFarmAnimal *m) {
    kill(m);
}

void Player::interact(Well w){
    ember += 10;
}

void Player::interact(Truck t) {
    int pendapatan = 0;
    Node<Product>* temp = tas.first;
    while (temp != NULL) {
        pendapatan += temp->value.getHarga();
        temp = temp->next;
    }
    uang += pendapatan;
}

void Player::kill(MeatProducingFarmAnimal* m) {
    m->mati();
}

void Player::grow(Cell* map) {
    if (ember > 0) {
        if (map->getIsi(lokasi)->getType() == "Coop") {
            ember--;
            Coop *c = new Coop(lokasi);
            c->setAdaRumputnya(true);
            Renderable *a = c;
            map->setIsi(lokasi, *a);
        }
        else if (map->getIsi(lokasi)->getType() == "Barn") {
            ember--;
            Barn *c = new Barn(lokasi);
            c->setAdaRumputnya(true);
            Renderable *a = c;
            map->setIsi(lokasi, *a);
        }
        else if (map->getIsi(lokasi)->getType() == "Grassland") { 
            ember--;
            Grassland *c = new Grassland(lokasi);
            c->setAdaRumputnya(true);
            Renderable *a = c;
            map->setIsi(lokasi, *a);
        }
    }
    else {
        cout << "Tidak cukup air!" << endl;
    }
}

void Player::mix(Cell* c) {
    //
}

void Player::gerak(int arah) {
    if (arah == 0) { //ATAS
        lokasi.setX(lokasi.getX() - 1);
    }
    else if (arah == 1) { //KANAN
        lokasi.setY(lokasi.getY() + 1);
    }
    else if (arah == 2) { //KIRI
        lokasi.setX(lokasi.getX() + 1);
    }
    else if (arah == 3) { //BAWAH
        lokasi.setY(lokasi.getY() - 1);
    }
}

char Player::render() {
    return 'P';
}
