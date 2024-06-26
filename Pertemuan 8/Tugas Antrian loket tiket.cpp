#include <iostream>
#include <queue>

using namespace std;

struct pelanggan {
	string nama;
	int jenisTiket;
};

int main() {
	
	queue<pelanggan> antrian;
	
	antrian.push({ "Adi", 1 });
	antrian.push({ "Dani", 2});
	antrian.push({ "Azis", 1});
	antrian.push({ "Gilang", 2});
	
	while (!antrian.empty()) {
		pelanggan pelangganDepan = antrian.front();
		antrian.pop();
		
		cout << "Nama pelanggan: " << pelangganDepan.nama << endl;
		cout << "Jenis tiket: ";
		
		switch (pelangganDepan.jenisTiket) {
			case 1:
			cout << "Dewasa" << endl;
			break;
			case 2:
			cout << "Anak-anak" << endl;
			break;
			default:
				cout << "Jenis tiket tidak valid" << endl;
		}
		
		cout << endl;
	}
	
	cout << "Antrian loket tiket sudah habis" << endl;
	
	return 0;
}
