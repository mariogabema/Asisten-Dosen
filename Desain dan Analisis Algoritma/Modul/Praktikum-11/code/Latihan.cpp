#include <iostream>

using namespace std;

class Latihan {
	private:
		int nilai;
	
	public:
		Latihan(int n) {
			nilai = n;
		}
		
		int getNum() {
			return nilai;
		}
};

int main() {
	Latihan lat(10);
	cout << "Nilai yang diinputkan: " << lat.getNum() << endl;
	
	return 0;
}
