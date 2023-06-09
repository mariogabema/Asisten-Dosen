// class dengan constructor menggunakan parameter

#include <iostream>

using namespace std;
int angka; // global

class Laptop {
	private:
		string pemilik;
		string merk;
	
	public:
		//constructor
		Laptop(string var1, string var2) {
			pemilik = var1; // pemilik = dani
			merk = var2;
			
			cout << "Pemilik laptop ini adalah " << pemilik << " dan merk laptopnya adalah " << merk;
			angka = 2;
			cout << endl << endl<< "Angkanya adalah " << angka;
		}
};

// fungsi utama, yang dijalanin terlebih dahulu
int main() {
	// pembuatan object
	Laptop myLaptop("Dani", "Asus");
	
	// local scope
//	int angka;
	angka = 5;
	cout << endl << angka;
	
	return 0;
}
