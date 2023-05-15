#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) {nim = pNim;/* Definisi Function*/ }
	static int getNim() { return nim; /*Definsi Function*/ }

	mahasiswa(string pnama) : nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	nim = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1 ("Lila Kurnia");
	mahasiswa mhs2 ("Asroni");
	mahasiswa::setNim(9); //mengakses nim melalui member function "setNim
	mahasiswa mhs3 ("Andi Kurniawan");
	mahasiswa mhs4("Joko Purbo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;

	cout << "akses dari luar pproject = "<< mahasiswa::getNim() << endl; 
}


