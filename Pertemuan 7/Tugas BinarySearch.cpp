#include <iostream>
#include <string>
#include <vector>

using namespace std;
int binarysearch(vector<string>& buku, string judul) {
	int low = 0;
	int high = buku.size() - 1;
	
	while (low <= high) {
		int mid = low + (high - low) / 2;
		
		if (buku[mid] == judul) {
			return mid;
		} else if (judul < buku[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	} 
	
	return -1;
}

int main() {
	vector<string> buku = {"Algoritma", "sejarah ibik", "matematika", "bahasa inggris"};
	string judul;
	
	cout << "Masukan judul buku yang anda cari: ";
	getline(cin, judul);
	
	int indeks = binarysearch(buku, judul);
	
	if (indeks != -1) {
		cout << "Buku ditemukan " << indeks << endl;
	} else {
		cout << "Buku tidak ditemukan di perpustakaan" << endl;
	}
	
	return 0;
}
