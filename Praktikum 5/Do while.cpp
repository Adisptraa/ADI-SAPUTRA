#include <iostream>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    
    return (i + 1);
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        
        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

int main() {
    int n, a[100];
    
    do {
        cout << "Masukan jumlah elemen dalam array: ";
        cin >> n;
    } while (n <= 0 || n > 100);
    
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> a[i];
    }
    
    cout << "Array awal: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    quicksort(a, 0, n - 1);
    
    cout << "Array yang telah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}

