#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main() {
	int bilangan1[100] = { 0 };
	int bilangan2 = 0;
	char penjumlahan[100] = " ";
	int j;
	char simbol;

	cout << "Program Kalkulator Sederhana\n"; 
	cout << "Nama: Ardhis Parahita 23.11.5769\n";
	cout << "Nama: Andre Aditia 23.11.5756\n";
	cout << "Nama: Irvanza D.K 23.11.57584\n";
	cout << "Nama: Irsyad Rifki P 23.11.5778\n";
	cout << "\nBilangan Pertama : ";
	cin >> bilangan1[0];
	bilangan2 = bilangan1[0];

tampil:
	for (int i = 0; i <= 90; i++) {
		if (bilangan1[i] != 0) {
			cout << bilangan1[i] << " " << penjumlahan[i] << " ";
			j = i;
		}
	}
	cout << endl << "Total : " << bilangan2;
	cout << endl;
	cout << "Masukkan bilangan dan penjumlahan(*,/,+,-) : ";
	cin >> simbol;
	if (simbol == '*') {
		penjumlahan[j] = '*';
		cin >> bilangan1[j + 1];
		bilangan2 *= bilangan1[j + 1];
	}
	else if (simbol == '+') {
		penjumlahan[j] = '+';
		cin >> bilangan1[j + 1];
		bilangan2 += bilangan1[j + 1];
	}
	else if (simbol == '/') {
		penjumlahan[j] = '/';
		cin >> bilangan1[j + 1];
		bilangan2 /= bilangan1[j + 1];
	}
	else if (simbol == '-') {
		penjumlahan[j] = '-';
		cin >> bilangan1[j + 1];
		bilangan2 -= bilangan1[j + 1];
	}
	else {
		goto tampil;
	}

	system("cls");
	goto tampil;

	return 0;
}