all: test

test: Player.o Cell.o Mixer.o Point.o Facility.o Truck.o Well.o Product.o Coop.o Land.o Barn.o Grassland.o FarmAnimal.o Kambing.o Bebek.o Domba.o Ayam.o EggProducingFarmAnimal.o Kuda.o MeatProducingFarmAnimal.o MilkProducingFarmAnimal.o Sapi.o FarmProduct.o DagingAyam.o DagingBebek.o DagingKambing.o DagingSapi.o SusuDomba.o SusuKuda.o SusuSapi.o TelurAyam.o SideProduct.o GeprekSusu.o PaketSate.o PaketSteak.o SusuKambing.o TelurBebek.o DagingDomba.o
	g++ Player.o Cell.o Mixer.o Point.o Facility.o Truck.o Well.o Product.o Coop.o Land.o Barn.o Grassland.o FarmAnimal.o Kambing.o Bebek.o Domba.o Ayam.o EggProducingFarmAnimal.o Kuda.o MeatProducingFarmAnimal.o MilkProducingFarmAnimal.o Sapi.o FarmProduct.o DagingAyam.o DagingBebek.o DagingKambing.o DagingSapi.o SusuDomba.o SusuKuda.o SusuSapi.o TelurAyam.o SideProduct.o GeprekSusu.o PaketSate.o PaketSteak.o SusuKambing.o TelurBebek.o DagingDomba.o -o main

Ayam.o: Animal/Ayam.cpp
	g++ -c Animal/Ayam.cpp

Bebek.o: Animal/Bebek.cpp
	g++ -c Animal/Bebek.cpp

Domba.o: Animal/Domba.cpp
	g++ -c Animal/Domba.cpp
	
EggProducingFarmAnimal.o: Animal/EggProducingFarmAnimal.cpp
	g++ -c Animal/EggProducingFarmAnimal.cpp

FarmAnimal.o: Animal/FarmAnimal.cpp
	g++ -c Animal/FarmAnimal.cpp

Kambing.o: Animal/Kambing.cpp
	g++ -c Animal/Kambing.cpp

Kuda.o: Animal/Kuda.cpp
	g++ -c Animal/Kuda.cpp

MeatProducingFarmAnimal.o: Animal/MeatProducingFarmAnimal.cpp
	g++ -c Animal/MeatProducingFarmAnimal.cpp

MilkProducingFarmAnimal.o: Animal/MilkProducingFarmAnimal.cpp
	g++ -c Animal/MilkProducingFarmAnimal.cpp

Sapi.o: Animal/Sapi.cpp
	g++ -c Animal/Sapi.cpp

Cell.o: Cell/Cell.cpp
	g++ -c Cell/Cell.cpp

Facility.o: Cell/Facility/Facility.cpp
	g++ -c Cell/Facility/Facility.cpp

Mixer.o: Cell/Facility/Mixer.cpp
	g++ -c Cell/Facility/Mixer.cpp

Truck.o: Cell/Facility/Truck.cpp
	g++ -c Cell/Facility/Truck.cpp

Well.o: Cell/Facility/Well.cpp
	g++ -c Cell/Facility/Well.cpp

Land.o: Cell/Land/Land.cpp
	g++ -c Cell/Land/Land.cpp

Coop.o: Cell/Land/Coop.cpp
	g++ -c Cell/Land/Coop.cpp

Grassland.o: Cell/Land/Grassland.cpp
	g++ -c Cell/Land/Grassland.cpp

Barn.o: Cell/Land/Barn.cpp
	g++ -c Cell/Land/Barn.cpp

Player.o: Player/Player.cpp
	g++ -c Player/Player.cpp

Product.o: Product/Product.cpp
	g++ -c Product/Product.cpp

FarmProduct.o: Product/FarmProduct/FarmProduct.cpp
	g++ -c Product/FarmProduct/FarmProduct.cpp

DagingAyam.o: Product/FarmProduct/DagingAyam.cpp
	g++ -c Product/FarmProduct/DagingAyam.cpp

DagingBebek.o: Product/FarmProduct/DagingBebek.cpp
	g++ -c Product/FarmProduct/DagingBebek.cpp

DagingKambing.o: Product/FarmProduct/DagingKambing.cpp
	g++ -c Product/FarmProduct/DagingKambing.cpp

DagingSapi.o: Product/FarmProduct/DagingSapi.cpp
	g++ -c Product/FarmProduct/DagingSapi.cpp

SusuDomba.o: Product/FarmProduct/SusuDomba.cpp
	g++ -c Product/FarmProduct/SusuDomba.cpp

SusuKuda.o: Product/FarmProduct/SusuKuda.cpp
	g++ -c Product/FarmProduct/SusuKuda.cpp
	
SusuSapi.o: Product/FarmProduct/SusuSapi.cpp
	g++ -c Product/FarmProduct/SusuSapi.cpp

SusuKambing.o: Product/FarmProduct/SusuKambing.cpp
	g++ -c Product/FarmProduct/SusuKambing.cpp

TelurAyam.o: Product/FarmProduct/TelurAyam.cpp
	g++ -c Product/FarmProduct/TelurAyam.cpp

TelurBebek.o: Product/FarmProduct/TelurBebek.cpp
	g++ -c Product/FarmProduct/TelurBebek.cpp

DagingDomba.o: Product/FarmProduct/DagingDomba.cpp
	g++ -c Product/FarmProduct/DagingDomba.cpp

SideProduct.o: Product/SideProduct/SideProduct.cpp
	g++ -c Product/SideProduct/SideProduct.cpp

GeprekSusu.o: Product/SideProduct/GeprekSusu.cpp
	g++ -c Product/SideProduct/GeprekSusu.cpp

PaketSate.o: Product/SideProduct/PaketSate.cpp
	g++ -c Product/SideProduct/PaketSate.cpp

PaketSteak.o: Product/SideProduct/PaketSteak.cpp
	g++ -c Product/SideProduct/PaketSteak.cpp

Point.o: Point.cpp
	g++ -c Point.cpp

clean:
	rm -rf *o main


