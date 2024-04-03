#include <iostream>
#include <vector>
using namespace std;

class Buku {
	 private:
		string judul;
		string penulis;
		int tahunTerbit;
		int harga;
		
	public:
		
		void setJudul(string judul) {
			this->judul = judul;
		}
		
		void setPenulis(string penulis) {
			this->penulis = penulis;
		}
		
		void setTahunTerbit(int tahunTerbit) {
			this->tahunTerbit = tahunTerbit;
		}
		
		void setHarga(int harga) {
			this->harga = harga;
		}
		
		string getJudul() {
			return judul;
		}
		
		string getPenulis() {
			return penulis;
		}
		
		int getTahunTerbit() {
			return tahunTerbit;
		}
		
		int getHarga() {
			return harga;
		}
		
		void tampilkanInformasi() {
			cout << "*Informasi Buku*"  << endl;
			cout << "Judul: " << judul << endl;
			cout << "Penulis: " << penulis << endl;
			cout << "Tahun Terbit: " << tahunTerbit << endl; 
			cout << "Harga: Rp" << harga << endl;
		}
};

int main() {
	Buku bukul;
	
	bukul.setJudul("Desain Dan Analisis Algoritma");
	bukul.setPenulis("Shania Oktaviani");
	bukul.setTahunTerbit(2023);
	bukul.setHarga(200000);
	
	bukul.tampilkanInformasi();
	
	return 0;
}
