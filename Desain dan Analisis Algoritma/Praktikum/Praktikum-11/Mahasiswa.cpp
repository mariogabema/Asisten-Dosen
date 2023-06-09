#include <iostream>
#include <string>

using namespace std;

// implementasi destructor
class Mahasiswa {
	public:
		// constructor
		Mahasiswa(string nama, int umur): nama_(nama), umur_(umur) {
			cout << "Ini adalah constructor\n\n";
		}
		
		// destructor
		~Mahasiswa() {
			cout << "Ini adalah destructor\n";
		}
		
		void tampilkanBiodata() {
			cout << "Nama: " << nama_ << " dan umurnya adalah " << umur_ << endl << endl;
		}
	
	private:
		string nama_;
		int umur_;
};

int main() {
	{
		Mahasiswa mhs("Arya", 22);
		mhs.tampilkanBiodata();
	}
	
	return 0;
}
