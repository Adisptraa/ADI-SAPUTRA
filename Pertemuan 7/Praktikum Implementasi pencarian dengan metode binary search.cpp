#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;
int nim[N];

// Fungsi untuk melakukan binary search
int binarySearch(int x, int 1, int r) {
	if (r >= 1) {
		int mid = 1 + (r - 1) / 2;
		if (nim[mid] == x)
		   return mid;
		if (nim[mid] > x)
			return binarySearch(x, 1, mid - 1);
		return binarySearch(x, mid + 1, r);
	}
	return -1;
}

int main() {
	int n;
	cout << "Masukan jumlah mahasiswa: ";
	cin >> n;
	
	cout << "Masukan NIM mahasiswa:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> nim[i];
	}
	
	// Mengurutkan NIM mahasiswa
	sort(nim, nim + n);
	int x;
	cout << "Masukan NIM yang dicari: ";
	cin >> x;
	
	int hasil = binarySearch(x, 0, n - 1);
	if (hasil == -1)
	cout << "NIM tidak ditemukan" << endl;
	else
	cout << "NIM ditemukan pada indeks " << hasil << endl;
	
	return 0;
}
