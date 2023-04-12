#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
		cout << "Masukan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}

class Matakuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputMk() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan Nama matakuliah : ";
		cin >> namaMk;
		cout << "Masukan SKS : ";
		cin >> sks;
	}
	void tampil() {

	}
};