#ifndef _CELL_H
#define _CELL_H

#include <iostream>
#include <string>

#include "../Point.h"
#include "../Renderable.h"
#include "../LinkedList.h"
#include "../Animal/FarmAnimal.h"
using namespace std;

class Cell {
	/* Cell : Kelas untuk merepresentasikan map permainan */
    protected:
			int nBrs; 
				//jumlah Baris Efektif
			int nKol; 
				//jumlah Kolom Efektif
			Renderable ***map;
				//Map yang berisikan objek yang dapat dirender
    public:
			// KONSTRUKTOR
			Cell(int nb, int nk); 
				//Membuat Cell kosong dengan ukuran nb x nk
			Cell(string namaFile); 
				//Membuat Cell dari File Eksternal

			// DESTRUKTOR
			~Cell();
				//Mengdealokasi map

			// SETTER GETTER
			int getNBrs() const;
				//Mengembalikkan jumlah baris efektif
			int getNKol() const;
				//Mengembalikkan jumlah kolom efektif
			Renderable* getIsi(Point);
				//Mendapatkan isi dari map pada Point

			void setNBrs(int);
				//Mengubah nBrs
			void setNKol(int);
				//Mengubah nKol
			void setIsi(Point, Renderable&);
				//Mengubah isi dari map

			//METHOD
			void cetakMap(Point lokasi, LinkedList<FarmAnimal>& animal);
				//Mencetak map Cell
};

#endif