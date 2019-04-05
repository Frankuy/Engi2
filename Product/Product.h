    
#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;
class Product {
    /* kelas ini merpresentasikan tentang product */
    protected:
        string nama;
        int harga;
    public:
        //KONSTRUKTOR
        Product(string, int);

        //GETTER AND SETTER
        int getHarga() const;
        string getNama() const;
        void setNama(string);
        void setHarga(int);
        friend ostream& operator<<(ostream& os, const Product& p);
        bool operator==(const Product& p) const;
};
#endif