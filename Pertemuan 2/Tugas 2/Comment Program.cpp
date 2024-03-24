#include <iostream>
using namespace std;

void swap( int arr[], int pos1, int pos2) { //fungsi swap dipakai untuk menukar nilai dua elemen dalam array. fungsi ini juga menerima tiga parameter : arr, pos 1, dan pos2//
	int temp;
	temp = arr[pos1]; //Simpan nilai elemen pos1 ke dalam temp
	arr[pos1] = arr[pos2]; //Ganti nilai elemen pos 1 dengan nilai elemen pos 2
	arr[pos2] = temp; //Ganti nilai elemen pos 2 dengan nilai yang sebelumnya disimpan di temp
}

int partition(int arr[], int low, int high, int pivot) { //fungsi partition dipakai untuk mempartisi array berdasarkan nilai pivot
	int i = low; //indeks untuk melacak elemen yang lebih kecil dari pivot
	int j = low; //indeks untuk melacak posisi elemen yang sudah di partisi
	while(i <= high) { //looping selama i belum melewati batas high
		if(arr[i] > pivot) { //elemen pada indeks i lebih besar dari pivot
			i++;
		}
		else{
			swap(arr,i,j); //Tukar posisi elemen i dengan elemen di indeks j
			i++; //Lanjutkan ke elemen berikutnya
			j++; //Pindahkan indeks j untuk penempatan elemen yang lebih kecil dari pivot
		}
	}
	return j-1;//Mengembalikan indeks terakhir partisi elemen yang lebih kecil dari pivot
}

void quicksort(int arr[], int low, int high) {//quicksort untuk mengurutkan array menggunakan metode quicksort
	if(low < high) {// jika low belum melewati high (masih ada elemen untuk diurutkan
		int pivot = arr[high];//elemen paling kanan sebagai pivot
		int pos = partition(arr, low, high, pivot);// partisi array berdasarkan pivot
		
		quicksort(arr, low, pos-1);//elemen lebih kecil dari pivot
		quicksort(arr, pos+1, high);//elemen lebih besar dari pivot
	}
}

int main()
{
	int n;
	cout << "Tentukan panjang array : "; //minta pengguna untuk memasukan panjang array
	cin>>n;
	int arr[n];//deklarasi array dengan panjang n
	for(int i = 0; i < n; i++) {//looping untuk meminta pengguna memasukan elemen array
		cin>>arr[i];
	}
	quicksort(arr, 0, n-1);//memanggil fungsi quicksort untuk mengurutkan array
	cout<<"Berikut adalah array yang telah di sortir: ";//mencetak pesan bahwa array sudah diurutkan
	for(int i = 0; i < n; i++) {//looping untuk mencetak elemen array yang sudah diurutkan
		cout<<arr[i]<<"\t";
	}
}
