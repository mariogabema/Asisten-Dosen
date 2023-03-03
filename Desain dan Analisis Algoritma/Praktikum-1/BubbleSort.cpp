#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
	int i, j, tmp;
	
	// looping array two dimensions
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-i-1; j++) {
			// swap if first number greather than second number
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main() {
	int array[100], n, i, j;
	
	cout << "masukkan banyak elemen: ";
	cin >> n;
	cout << "masukkan nilai: \n";
	
	for (i = 0; i < n; i++) {
		cin >> array[i];
	}
	
	// call bubble sort function
	bubbleSort(array, n);
	
	cout << "hasil pengurutan dengan algoritma bubble sort: \n";
	
	for (i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	
	cout << "\n";
}
