#include <iostream>
using namespace std;

// class induk
class BangunDatar {
	protected:
		int lebar, tinggi;
		
		public:
			void setValue(int a, int b) {
				lebar = a;
				tinggi = b;
			}
};

//class turunan
class PersegiPanjang: public BangunDatar {
	public:
		int getValue() {
			return (lebar * tinggi);
		}
};

//class turunan
class Segitiga: public BangunDatar {
	public:
		int getValue() {
			return (lebar * tinggi / 2);
		}
};

//program utama
int main() {
	
	//Inisiasi Object
	PersegiPanjang Persegi_Panjang;
	Segitiga Segitiga;
	
	//Inisiasi Nilai
	Persegi_Panjang.setValue(4,5);
	Segitiga.setValue(10,5);
	
	//Mendapatkan Nilai Kembalian
	cout << Persegi_Panjang.getValue() << endl;
	cout << Segitiga.getValue() << endl;
	
	return 0;
}
