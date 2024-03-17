#include <iostream>
#include <algorithm>

using namespace std;

void selectionSortDesc(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int maxIndex = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}
		swap(arr[i], arr[maxIndex]);
	}
}

int main() {
	int n;
	cout << "Masukan banyak array: ";
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cout << "Masukan angka ke-" << i + 1 << ": ";
		cin >> arr[i];
	}
	
	selectionSortDesc(arr, n);
	
	cout << "\nHasil Akhir: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
