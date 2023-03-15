#include <iostream>
using namespace std;
int main(){

	int kendaraan, masuk, keluar, lama, biaya;
	
	cout << "Jenis Kendaraan (1.Motor || 2.Mobil || 3.Bus/Truck) : "; cin >> kendaraan;
	cout << endl;

	cout << "Jam masuk	(Bilangan bulat 1-24): "; cin >> masuk;	
	cout << "Jam keluar	(Bilangan bulat 1-24): "; cin >> keluar;

	lama = keluar-masuk;
	
	if(kendaraan == 1){
	cout << "Jenis Kendaraan " << ":" << " Motor " << endl;
	}
	else if(kendaraan == 2){
	cout << "Jenis Kendaraan " << ":" << " Mobil " << endl;
	}
	else if(kendaraan == 3){
	cout << "Jenis Kendaraan " << ":" << " Bus/Truck " << endl;
	}
	else{
	cout << "Maaf anda salah memasukkan jenis kendaraan";
	}


	// Biaya parkir motor

	if (lama<12 && kendaraan==1){
	biaya = (lama-1)*3000+3000;
	}
	else if (lama>=12 && kendaraan==1){
	biaya  = 50000;
	}


	// Biaya parkir mobil

	if (lama<12 && kendaraan==2){
	biaya = (lama-1)*5000+5000;
	}
	else if (lama>=12 && kendaraan==2){
	biaya  = 75000;
	}
	


	// Biaya parkir Truk/Bus

	if (lama<8 && kendaraan==3){
	biaya = (lama-1)*25000+25000;
	}
	else if (lama>=8 && kendaraan==3){
	biaya  = 250000;
	}

	cout << "Lama Parkir" << ": " << lama << "jam" << endl;
	cout << "Biaya Parkir" << ": Rp." << biaya << endl;

	return 0;
}