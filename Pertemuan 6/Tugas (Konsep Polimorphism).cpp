#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
	protected:
		string nama;
		int umur;
		string jurusan;
		string fakultas;
		string status;
		
	public:
		Mahasiswa(string nama, int umur, string jurusan, string fakultas, string status)
		: nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas), status(status) {}
		
	virtual void printInfo() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
		cout << "Fakultas: " << fakultas << endl;
		cout << "Status: " << status << endl;
	}
};

class Alumni : public Mahasiswa {
	public:
		Alumni(string nama, int umur, string jurusan, string fakultas)
		: Mahasiswa(nama, umur, jurusan, fakultas, "Alumni") {}
		
		void printInfo() override {
		Mahasiswa::printInfo();
		cout << "Tahun Lulus: " << tahunLulus << endl;
		}
		void setTahunLulus(string tahun) {
			tahunLulus = tahun;
		}
	private:
	string tahunLulus;	
};

class MahasiswaAktif : public Mahasiswa {
	public:
		MahasiswaAktif(string nama, int umur, string jurusan, string fakultas)
		: Mahasiswa(nama, umur, jurusan, fakultas, "Mahasiswa Aktif") {}
	
	void printInfo() override {
	Mahasiswa::printInfo();
	cout << "Semester: " << semester << endl;
	}
	
	void setSemester(int sem) {
		semester = sem;
	}
	
	private:
		int semester;
};

int main() {
	Mahasiswa *alumnil = new Alumni("ADI SAPUTRA", 20, "Teknologi Informasi", "IBIK Kesatuan");
	dynamic_cast<Alumni*>(alumnil)->setTahunLulus("2024");
	
	Mahasiswa *mahasiswal = new MahasiswaAktif("adi saputra", 20, "Sistem Informasi", "IBIK Kesatuan");
	dynamic_cast<MahasiswaAktif*>(mahasiswal)->setSemester(2);
	
	alumnil->printInfo();
	cout << endl;
	mahasiswal->printInfo();
	
	delete alumnil;
	delete mahasiswal;
	
	return 0;
}
