#include<iostream>

using namespace std;

int main() {
	int y;
	
	cout << "masukan banyak array: ";
	cin >> y;
	cout << "\n";
	
	int x[y];
	
	for (int i = 0; i < y; i++) {
		cout << "masukan angka ke "<< i <<" : ";
		cin >> x[i];
	}
	
	for (int i = 1; i < y; i++) {
		int key = x[i];
		int j = i-1;
		
		while(j >= 0 && x[j] > key) {
			x[j+1] = x[j];
			j--;
		}
		
		x[j+1] = key;
		cout << "\nproses sorting \n";
		
		for (int m = 0; m < y; m++) {
			cout << x[m] << " ";
		}
		
		cout << "\n";
	}
	
	cout << "\nhasil akhir \n";
	
	for (int m = 0; m < y; m++) {
		cout << x[m] << " ";
	}
	
}
