#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector <string> arr;
	string temp;
	int i = 1;
	
	cout << "INPUT BUKU\n";
	while (i <= 5) {
		cout << "Masukan Nama Buku Ke-" << i << ": ";
		getline(cin >> std::ws, temp);
		if (temp.empty()) {
			break;
		}
		arr.push_back(temp);
		i++;
	}
	sort(arr.begin(), arr.end());
	cout << "\n5 Data Buku Terurut:\n";
	for (int j = 0; j < 5 ; j++) {
		cout << j + 1 << ". " << arr[j] << "\n";
	}
	return 0;
}
