#include <iostream> // standard library input output
#include <string> // optional

using namespace std; // std::cin, std::cout
// parent class atau kelas induk
class Hewan {
	public:
		// didalam c++, kalau mau ngasih tau ke komputer kita
		// polymorphism ditandai dengan keyword "virtual"
		virtual void bersuara() {
			cout << "...";
		}
};

// kelas kucing adalah turunan dari kelas hewan
class Kucing: public Hewan {
	public:
		void bersuara() {
			cout << "Miawww\n";
		}
};

// kelas kambing adalah turunan dari kelas hewan
class Kambing: public Hewan {
	public:
		void bersuara() {
			cout << "embekkk\n";
		}
};

class Serigala: public Hewan {
	public:
		void bersuara() {
			cout << "auuuu\n";
		}
};

int main() {
	// kalau mau nunjuk, harus punya arah
	// pointer == petunjuk
	Hewan *h1 = new Kucing(); // bikin objek Hewan dengan kelas kucing
	Hewan *h2 = new Kambing();
	Hewan *h3 = new Serigala();
	
	h1->bersuara(); // mau akses fungsi yang bernama bersuara
	h2->bersuara();
	h3->bersuara();
	
	return 0; // artinya tampilin semua output, kalau ga ada error 
}











