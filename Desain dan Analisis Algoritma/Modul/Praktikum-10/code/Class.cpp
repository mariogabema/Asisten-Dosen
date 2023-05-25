#include <iostream>

using namespace std;

class Karyawan {
	protected:
		string nama;
		int npm;
	
	public:
		void setNama(string input_nama) {
			nama = input_nama;
		}
		
		void setNpm(int input_npm) {
			npm = input_npm;
		}
		
		string getNama() {
			return nama;
		}	
		
		int getNpm() {
			return npm;
		}
};

int main() {
	Karyawan karyawan;
	karyawan.setNama("Raihan Dwi Pratama");
	karyawan.setNpm(202310034);
	
	cout << "Nama saya "  << karyawan.getNama() << " \nNPM saya adalah " << karyawan.getNpm();
	
	return 0;
}
