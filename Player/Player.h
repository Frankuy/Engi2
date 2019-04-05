#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "../Animal/FarmAnimal.h"
#include "../Cell/Facility/Facility.h"
#include "../Cell/Cell.h"
#include "../Product/Product.h"
#include "../Product/FarmProduct/FarmProduct.h"
#include "../Point.h"
#include "../Cell/Facility/Well.h"
#include "../Cell/Facility/Truck.h"
#include "../Cell/Land/Land.h"
#include "../Animal/MilkProducingFarmAnimal.h"
#include "../Animal/EggProducingFarmAnimal.h"
#include "../Animal/MeatProducingFarmAnimal.h"
#include "../Renderable.h"
#include "../LinkedList.h"
#include "../Cell/Land/Coop.h"
#include "../Cell/Land/Barn.h"
#include "../Cell/Land/Grassland.h"
using namespace std;

/*! Kelas ini menyatakan player yang memainkan permainan. */
class Player : public Renderable {
    private:
        int ember; /*!< Menyimpan jumlah air saat ini dalam satuan liter */
        LinkedList<Product> tas; /*!< Menyimpan product-product */
        int neffTas; /*!< N efektif dari tas */
        const int kapasitasEmber; /*!< Kapasitas maksimum dari Ember dalam menampung air */
        const int kapasitasTas; /*!< Kapasitas maksimum dari Tas dalam menampung Product */
        Point lokasi; /*!< Menampung lokasi player saat ini */
        int uang; /*!< Jumlah uang yang didapatkan */
    
    public:
        Player(); /*!< KONSTRUKTOR DEFAULT
                    ember = 0; tas = kosong; kapasitasTas = 10; 
                    kapasitasember = 6 (Liter); lokasi = 0,0; uang = 0
                */

        Player(int e, int ke, int kt, Point l, int u); /*!< KONSTRUKTOR USER-DEFINED
                    ember = e; tas = kosong; kapasitasTas = kt; 
                    kapasitasember = ke (Liter); lokasi =l; uang = u
                */

        //GETTER AND SETTER
        int getEmber() const; //!< Mengembalikkan air yang ditampung ember saat ini
        int getNeffTas() const; //!< Mengembalikkan jumlah product dalam tas
        int getKapasitasTas() const; //!< Mengembalikkan kapasitas maksimum dari tas
        int getKapasitasEmber() const; //!< Mengembalikkan kapasitas maksimum dari ember
        Point getLokasi() const; //!< Mengembalikkan Point dari Lokasi Player saat ini
        Product getProduct(int i /**< [in] indeks product pada tas */) const; //!< Mengembalikkan Product ke-i dari tas, sekaligus mengurangi neff (mengeluarkan nya dari tas)
        int getUang() const; //!< Mengembalikkan jumlah uang yang player punya

        void setNeffTas(int); //!< Mengubah neff dari tas

        /*! 
        * Menambahkan/mengurangkan Product ke/dari tas
        * @param[in] input true untuk memasukkan
        * @param[in] p Product yang ingin dimasukkan
        */
        void setTas(bool input, Product p);

        /*!
        * Mengubah jumlah air dalam ember
        * @param[in] air jumlah air yang ingin dimasukkan
        */
        void setEmber(int air);

        /*! 
        * Mengubah lokasi dari player saat ini
        * @param[in] lokasi lokasi player yang ingin dimasukkan
        */
        void setLokasi(Point lokasi);

        /*! 
        * Mengubah jumlah uang yang dimilikki player
        * @param[in] uang jumlah uang yang ingin dimasukkan
        */
        void setUang(int uang);


        //USEFUL FUNTION
        void lihatTas(); //!< Mengeprint semua isi tas
        void status(); //!< Mengeprint status terkini dari player

        //METHODD
        void talk(FarmAnimal*); //!< Berbicara dengan hewan
        void interact(FarmAnimal*); //!< Berinteraksi dengan hewan untuk mendapatkan FarmProduct
        void interact(MeatProducingFarmAnimal*); //!< Berinteraksi dengan hewan dengan kill lalu mendapatkan MeatProduct
        void interact(Well); //!< Interaksi dengan well
        void interact(Truck); //!< Interaksi dengan truck 
        void kill(MeatProducingFarmAnimal*); //!< Menyembelih hewan yang dapat menghasilkan daging
        void grow(Cell*); //!< Menumbuhkan rumput pada Land
        void mix(Cell*); //!<  Menggunakan mixers
        void gerak(int); //!< Bergerak pada cell selama di petak tidak ada Hewan
        char render(); //!< Mengembalikkan representasi objek Player 'P' untuk dicetak pada terminal
        string getType();
};
#endif