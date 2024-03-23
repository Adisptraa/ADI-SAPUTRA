#include <iostream>
using namespace std;

void selectionSortAsc(int arr[], int arraySize) {
	for (int i = 0; i < arraySize - 1; ++i) {
		int minIndex = i;
		
		for ( int j = i + 1; j < arraySize; ++j) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		 
		if (minIndex != i) {
			swap(arr[i], arr[minIndex]);
		}
	}
	
	cout << "\nData Setelah Sorting: ";
	for (int i = 0; i < arraySize; ++i) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arraySize;
	
	cout << "Masukan Jumlah Elemen: ";
	cin >> arraySize;
	
	int arr[arraySize];
	cout << "\n";
	
	for (int i = 0; i < arraySize; ++i) {
		cout << "Masukan nilai elemen: ";
		cin >> arr[i];
	}
	
	cout << "\nData Sebelum Sorting: ";
	for (int i = 0; i < arraySize; ++i) {
		cout << arr[i] << " ";
	}
	
	selectionSortAsc(arr, arraySize);
	
	return 0;
}
