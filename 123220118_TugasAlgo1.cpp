#include <iostream>
using namespace std;
int main () {
	//Deklarasi variabel
	float C, R, F, K;
	//Masukkan suhu yang ingin diubah
	cout << "KONVERSI SUHU"<<endl;
	cout << "Masukkan celcius\t:";
	cin >> C;
	//Suhu diubah ke satuan reamur
	cout << "Nilai Reamur\t\t:";
	R = (C*4/5);
	cout << R <<endl;
	//Suhu diubah ke satuan fahrenheit
	cout << "Nilai Fahrenheit\t:";
	F = (C*9/5)+32;
	cout << F << endl;
	//Suhu diubah ke satuan kelvin
	cout << "Nilai Kelvin \t\t:";
	K = C + 273;
	cout << K;
	return 0;
	}
