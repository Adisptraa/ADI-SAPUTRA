#include <iostream>
#include <string>
using namespace std;

class Orang {
	private:
		string nama;
		int npm;
		
		public:
			
			void setNama (string n){
				nama = n;
			}
			
			void setNPM (int m){
				npm = m;
			}
			
			string getNama(){
				return nama;
			}
			
			int getNPM(){
				return npm;
			}
};


int main(){
	
	Orang orang;
	string nama;
		int npm;
	orang.setNama(nama);
	orang.setNPM(npm);

	
	cout<< "Masukkan Nama Mahasiswa :"<<endl;
getline(cin,nama);
		cout << "Masukan NPM Mahasiswa : "<<endl;
cin>>npm;
	cout << "Nama Mahasiswa :"<<nama<<orang.getNama()<<endl;
	cout << "NPM Mahasiswa :"<<npm<< orang.getNPM()<<endl;

	
	
}
