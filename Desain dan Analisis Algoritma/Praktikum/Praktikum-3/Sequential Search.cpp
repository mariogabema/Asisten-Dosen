#include<iostream>

using namespace std;

int main() { 
	//deklarasi variabel
	int Nilai[20];
	int Posisi[20];
	int i, n, Bil, jmlh=0;
	bool ketemu;
	
	cout<<"Masukkan jumlah deret bilangan = ";
	cin>>n;
	cout<<endl;
	
	//Membaca elemen Array
	for(i=0; i<n; i++) {
		cout << "Nilai bilangan ke-"<< i << " = ";
		cin >> Nilai[i];
	}
	
	//Mencetak Elemen Array
	cout << "\n\nDeret Bilangan = ";
	
	for(i=0; i<n; i++)
	cout<<Nilai[i]<<" ";
	
	cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
	cin>>Bil;
	
	//Melakukan Pencarian
	for(i=0; i<n; i++) {
		if(Nilai[i]==Bil) {
			ketemu = true;
			Posisi[jmlh]=i;
			jmlh++;
		}
	}
	
	if(ketemu) {
		cout << "Bilangan " << Bil <<" ditemukan sebanyak" << " " << jmlh;
		cout << "\npada posisi ke = ";
		for(i=0; i<jmlh; i++)
		cout<<Posisi[i]<<" ";
	}
	else
		cout<<"Maaf, bilangan "<<Bil<<" tidak ditemukan";
	getchar();
}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//	// deklarasi variabel
//	int nilai[20];
//	int posisi[20];
//	int i, n, bil, jumlah = 0;
//	bool ketemu;
//	
//	cout << "Masukkan jumlah deret bilangan = ";
//	cin >> n;
//	cout << endl;
//	
//	// membaca elemen array
//	for (i = 0; i < n; i++) {
//		cout << "Nilai bilangan ke-" << i << " = ";
//		cin >> nilai[i];
//	}
//	
//	// mencetak elemen array
//	cout << "\nDeret bilangan = ";
//	for (i = 0; i < n; i++) {
//		cout << nilai[i] << " ";
//		cout << "\n\nMasukkan bilangan yang akan dicari = ";
//		cin >> bil;
//		
//		// melakukan pencarian
//		for (i = 0; i < n; i++) {
//			if (nilai[i] == bil) {
//				ketemu = true;
//				posisi[jumlah] = i;
//				jumlah++;
//			}
//		}
//		
//		if (ketemu) {
//			cout << "Bilangan " << bil << " ditemukan sebanyak" << jumlah;
//			cout << "\npada posisi ke = ";
//			for (i = 0; i < jumlah; i++) {
//				cout << posisi[i] << " ";
//			}
//		} else
//		cout << "Maaf, bilangan " << bil << " tidak ditemukan";
//		getchar();
//	}
//}
