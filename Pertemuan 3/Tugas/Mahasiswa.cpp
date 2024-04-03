#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> nama;
	vector<int> npm;
	
	for (int i = 0; i < 14; i++) {
		string nama_mahasiswa;
		int npm_mahasiswa;
		
		cout << "Masukan nama Mahasiswa " << i + 1 << ": ";
		cin >> nama_mahasiswa;
		
		cout << "Masukan NPM Mahasiswa " << i + 1 << ": ";
		cin >> npm_mahasiswa;
		
		nama.push_back(nama_mahasiswa);
		npm.push_back(npm_mahasiswa);
	}
	
	for (int i = 0; i < 14; i++) {
		cout << "Mahasiswa " << i + 1 << ":" << endl;
		cout << "  Nama: " << nama[i] << endl;
		cout << "  NPM: " << npm[i] << endl;
	}
	return 0;
}

