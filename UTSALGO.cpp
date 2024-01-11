#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main() {
	string garis(90, '-');
	char nim[10], nama[30], tgl[40];
	char jawab;
	int jmlhPertanyaan = 0;
	cout << "DIAGNOSA PENYAKIT JERAWAT" << endl;
	cout << garis << endl;
	cout << setw(30) << left << "No. Diagnosa (NIM Anda)" << setw(2) << right << ": ";
	cin.getline(nim, 10);
	cout << setw(30) << left << "Tgl. Diagnosa" << setw(2) << right << ": ";
	cin.getline(tgl, 40);
	cout << setw(30) << left << "Nama Pasien (Nama Anda)" << setw(2) << right << ": ";
	cin.getline(nama, 30);
	cout << garis << endl;
	cout << "\nPERTANYAAN GEJALA : ";
	jmlhPertanyaan++;
	cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G15] Tidak terasa sakit bila disentuh?";
	cin >> jawab;
	jawab = toupper(jawab); //y -> Y
	if (jawab == 'Y') {
		jmlhPertanyaan++;
		cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G12] Berukuran kecil?";
		cin >> jawab;
		jawab = toupper(jawab);
		if (jawab == 'Y') {
			jmlhPertanyaan++; //jumlahPertanyaan = jumlahPertanyaan + 1
			cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G13] Berwarna putih?";
			cin >> jawab;
			jawab = toupper(jawab);
			if (jawab == 'Y') {
				cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
				cout << garis << endl;
				cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
				cout << "[ P01 ] Whiteheads\n";
				cout << garis;
			}
			else if (jawab == 'T') {
				jmlhPertanyaan++;
				cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G14] Berwarna hitam?";
				cin >> jawab;
				jawab = toupper(jawab);
				if (jawab == 'Y') {
					cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
					cout << garis << endl;
					cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
					cout << "[ P02 ] Blackheads\n";
					cout << garis;
				}
				else if (jawab == 'T') {
					jmlhPertanyaan++;
					cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G01] Berwarna merah?";
					cin >> jawab;
					jawab = toupper(jawab);
					if (jawab == 'Y') {
						jmlhPertanyaan++;
						cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G03] Memliki jumlah yang banyak?";
						cin >> jawab;
						jawab = toupper(jawab);
						if (jawab == 'Y') {
							cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
							cout << garis << endl;
							cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
							cout << "[ P03 ] Papule\n";
							cout << garis;
						}
						else if (jawab == 'T') {
							jmlhPertanyaan++;
							cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G02] Berisi putih seperti nasi?";
							cin >> jawab;
							jawab = toupper(jawab);
							if (jawab == 'Y') {
								jmlhPertanyaan++;
								cout << endl << endl << jmlhPertanyaan << ". Apakah Anda mengalami gejala [G04] Berwarna merah dipinggir dan putih ditengah?";
								cin >> jawab;
								jawab = toupper(jawab);
								if (jawab == 'Y') {
									cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
									cout << garis << endl;
									cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
									cout << "[ P04 ] Postule\n";
									cout << garis;
								}
								else if (jawab == 'T') {
									cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
									cout << garis << endl;
									cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
									cout << "Tidak Ada Hasil\n";
									cout << garis;
								}
							}
							else if (jawab == 'T') {
								cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
								cout << garis << endl;
								cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
								cout << "Tidak Ada Hasil\n";
								cout << garis;
							}
						}
					}
					else if (jawab == 'T') {
						cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
						cout << garis << endl;
						cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
						cout << "Tidak Ada Hasil\n";
						cout << garis;
					}
				}
			}
		}
		else if (jawab == 'T') {
			cout << "\n\nJumlah Pertanyaan Gejala = " << jmlhPertanyaan << endl;
			cout << garis << endl;
			cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "):\n";
			cout << "Tidak Ada Hasil\n";
			cout << garis;
		}
	}
}
