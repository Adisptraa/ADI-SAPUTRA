#include <iostream>
using namespace std;

int main() {
	int arr[] = {0, 12, 18, 24, 35};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int x;
	cout << "Masukan nilai yang dicari: ";
	cin >> x;
	
	int i = 0;
	int mid = n / 2;
	while (i < n && arr[mid] != x) {
		if (x < arr[mid]) {
			n = mid;
			mid = (n - 1) / 2;
		} else {
			i = mid + 1;
			mid = (i + n) / 2;
		}
	}
	if (arr[mid] == x) {
		cout << "Bilangan " << x << " ditemukan pada indeks " << mid << endl;
	} else {
		cout << "Bilangan " << x << " tidak ditemukan" << endl;
	}
	
	return 0;
}
