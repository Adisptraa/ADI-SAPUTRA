#include <iostream>
using namespace std;

struct Barang{
	string nama;
	int harga;
};

int searchItem(Barang daftarBarang[],int size, string itemName){
	for (int i = 0; i < size; ++i){
		if (daftarBarang[i].nama == itemName){
			return i;
		} 
	}
	return -1;
}

int main(){
	Barang daftarBarang[5] = {
	{"Buku", 5000},
	{"Pensil", 1000},
	{"Pulpen", 2000},
	{"Penghapus", 500},
	{"Penggaris", 1500}
	};
	
	string itemName;
	cout << "Masukan nama barang yang ingin dicari: ";
	cin >> itemName;
	
	int index =
	searchItem(daftarBarang, 5, itemName);
	
	if (index != -1){
		cout << "Nama Barang: " << daftarBarang[index].nama << ", Harga: "<< daftarBarang[index].harga << endl;
	} else {
		cout << "Maaf. barang tidak ditemukan dalam daftar" << endl;
	}
	
	return 0;
	}
