//program hashtable dengan open addressing
//data ditampung dalam array
//implementasinya memakai quadric probing
//populasi data pakai nilai random

#include<iostream>
#include<math.h> // method random() angka 0-9 diacak
#include<ctime>
#include<cstdlib>

using namespace std;

// asumsi array limit 1024
int storage[1024];
int i = 0;
int hdt_boundary; // scope global

void quadric_probing(int n) {
	bool inserted = false;
	int hash;
	i = 0;
	
	// kalau nilai tidak dimasukkan, dan i kurang dari nilai hdt
	while( (!inserted) && (i < hdt_boundary) ) {
		// rumusnya
		hash = (n % hdt_boundary) + (i*i);
		
		// kalau ada penyimpanan kosong, maka inputan user akan disimpan
		if(storage[hash] == 0) {
			storage[hash] = n;
			inserted = true;  
		} else {
			++i;
			cout << "Telah terjadi collision di " << hash << endl;
		}
	}
	
	if(i == 0) {
		cout << "Langsung aja diisi" << endl;
	}
	
	cout << "Isi hash[" << hash << "] dengan " << n << endl;
}

void print(int n) {
	cout << "/nOutput program: " << endl;
	
	for(int a = 0; a < n; ++a) {
		cout << "hash[" << a << "] = " << storage[a] << endl;
	}
}

int getRandomNumber(int min, int max) {
	return min + (rand() % (max-min) );
}

int main() {
	int n, random_number;
	
	// panggil ini biar generate angka acak
	srand((unsigned)time(0));
	
	cout << "Masukkan jumlah data: ";
	cin >> n;
	
	cout << "Proses pemasukan data kedalam array hash table" << endl;
	
	// tentuin batas
	hdt_boundary = 100;
	
	for(int a = 0; a < n; ++a) {
		random_number = getRandomNumber(0,n);
		quadric_probing(random_number);
	}
	
	// tampilin rumusnya
	cout << "h(k) = (k mod" << hdt_boundary << ") + i*i " << endl;
}
