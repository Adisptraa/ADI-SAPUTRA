#include <iostream>
using namespace std;

class Kendaraan {
	public:
	virtual void info() const {
	cout << "Merek Mobil: " << merek << endl;
	cout << "Tahun produksi: " << tahunProduksi << endl;
	cout << "Jumlah Pintu: " << jumlahPintu << endl;
	}
	
	protected:
		string merek;
		int tahunProduksi;
		int jumlahPintu;
		
	public:
		Kendaraan(string merek, int tahunProduksi, int jumlahPintu)
		: merek(merek), tahunProduksi(tahunProduksi), jumlahPintu(jumlahPintu) {}
};

class Mobil : public Kendaraan {
	public:
	Mobil(string merek, int tahunProduksi, int jumlahPintu)
	: Kendaraan(merek, tahunProduksi, jumlahPintu) {}
	
	void info() const override {
	Kendaraan::info();
	cout << "Jumlah Pintu: " << jumlahPintu << endl;
	}
};

int main() {
	string merekMobil = "Mercedes Benz";
	int tahunProduksiMobil = 2020;
	int jumlahPintuMobil = 4;
	
	Mobil mobil(merekMobil, tahunProduksiMobil, jumlahPintuMobil);
	
	cout << "\nInformasi Mobil:\n";
	mobil.info();
	
	return 0;
}
