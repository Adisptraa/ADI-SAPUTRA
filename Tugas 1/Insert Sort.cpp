#include <iostream>
using namespace std;

void insertSortDesc(char data[], int n) {
	for (int i = 1; i < n; i++) {
		char key = data[i];
		int j = i - 1;
		
		while (j >= 0 && data[j] < key) {
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = key;
	}
}

int main() {
	int n;
	cout << "Masukan jumlah karakter: ";
	cin >> n;
	
	char data[n];
	for (int i = 0; i < n; i++) {
		cout << "Masukan karakter ke-" << i + 1 << ": ";
		cin >> data[i];
	}
	
	insertSortDesc(data, n);
	
	cout << "\nHasil Akhir: ";
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	
	return 0;
}
