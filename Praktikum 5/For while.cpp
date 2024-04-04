#include <iostream>
using namespace std;
 
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
 
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
 
    arr[j + 1] = key;
  }
}
 
int main() {
  int i, n;
 
  cout << "Masukan jumlah array :";
  cin >> n;
 
  int arr[n];
  cout <<  "Input "<< n << " angka : \n";
 
  for(i = 0; i < n; i++){
    cin >> arr[i];
  }
 
  cout << endl;
  cout << "Array sebelum diurutkan: ";
  for (i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
 
  insertionSort(arr, n);
  cout << endl;
  
  cout << "Array setelah diurutkan: ";
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
 
  return 0;
}
