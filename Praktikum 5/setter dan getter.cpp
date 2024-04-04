#include <iostream>
using namespace std;

class Bilangan {
private:
    double bil1;
    double bil2;

public:
    // Setter
    void setBil1(double bil) {
        bil1 = bil;
    }

    void setBil2(double bil) {
        bil2 = bil;
    }

    // Getter
    double getBil1() {
        return bil1;
    }

    double getBil2() {
        return bil2;
    }
    
    double tambah() {
        return bil1 + bil2;
    }
    
    double kurang() {
        return bil1 - bil2;
    }
    
    double kali() {
        return bil1 * bil2;
    }
    
    double bagi() {
    	if (bil2 == 0) {
    		return -1;
		}
        return bil1 / bil2;
    }
};

int main() {
    Bilangan bilangan;
	double bilangan1;
	double bilangan2;
	
	cout << "Masukkan angka pertama: "; cin >> bilangan1;
	cout << "Masukkan angka kedua: "; cin >> bilangan2;

    bilangan.setBil1(bilangan1);
    bilangan.setBil2(bilangan2);

    double hasilPenambahan = bilangan.tambah();
    double hasilPengurangan = bilangan.kurang();
    double hasilPerkalian = bilangan.kali();
    double hasilPembagian = bilangan.bagi();

    cout << "Hasil penambahan: " << hasilPenambahan << endl;
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;
    cout << "Hasil perkalian: " << hasilPerkalian << endl;
    if (hasilPembagian == -1) {
    	cout << "ERROR!\nHasil pembagian: Error: Pembagian dengan nol tidak dapat dilakukan\n0";
	} else {
		cout << "Hasil pembagian: " << hasilPembagian << endl;
	}

    return 0;
}

