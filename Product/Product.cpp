#include "Product.h"

Product::Product(string nama, int harga){
    this->nama = nama;
    this->harga = harga;
}

int Product::getHarga() const{
    return this->harga;
}

string Product::getNama() const{
    return this->nama;
}

void Product::setHarga(int harga){
    this->harga = harga;
}

void Product::setNama(string nama){
    this->nama = nama;
}

ostream& operator<<(ostream& os, const Product& p){
    os << p.getNama() << '\t' << p.getHarga() << '\n'; 
    return os;
}

bool Product::operator==(const Product& p) const{
    return (this->nama == p.getNama()) && (this->harga == p.getHarga());
}
