#include <iostream>
using namespace std;
int main (){
	
	int JB1, H1, TH1,JB2, H2, TH2, JB3, H3, TH3, total;
	string nim, nama, NB1, NB2, NB3;
	
	cout << "PROGRAM KASIR"<<endl;
	cout << "NIM\t\t:"; 
	cin >> nim;
	cout << "Nama\t\t:";
	getline(cin >> ws, nama);
	cout << string(100, '-')<<endl;
	
	//Barang 1
	cout << "Nama barang 1\t\t\t\t:";
	getline(cin >> ws, NB1);
	cout << "Jumlah barang 1\t\t\t\t:";
	cin >> JB1;
	cout << "Harga @ barang 1(Rp)\t\t\t:";
	cin >> H1;
	cout << "Total harga setelah diskon 15% (Rp)\t:";
	TH1 = (JB1*H1)*85/100;
	cout << TH1<<endl<<endl;
	
	//Barang 2
	cout << "Nama barang 2\t\t\t\t:";
	getline(cin >> ws, NB2);
	cout << "Jumlah barang 1\t\t\t\t:";
	cin >> JB2;
	cout << "Harga @ barang 2(Rp)\t\t\t:";
	cin >> H2;
	cout << "Total harga setelah diskon 10% (Rp)\t:";
	TH2 = (JB2*H2)*90/100;
	cout << TH2<<endl<<endl;
	
	//Barang 3
	cout << "Nama barang 3\t\t\t\t:";
	getline(cin >> ws, NB3);
	cout << "Jumlah barang 3\t\t\t\t:";
	cin >> JB3;
	cout << "Harga @ barang 3(Rp)\t\t\t:";
	cin >> H3;
	cout << "Total harga setelah diskon 5% (Rp)\t:";
	TH3 = (JB3*H3)*95/100;
	cout << TH3<<endl<<endl<<endl;
	
	//Total
	cout << "PEMBELIAN \t:"<<endl;
	cout << string(100, '-')<<endl;
	cout << "No|Nama Barang\t\t\t|Jumlah \t|@ Harga\t|Discout\t|\tTotal "<<endl;
	cout << string(100, '-')<<endl;
	cout << "1 |" << NB1 <<"\t\t\t|"<<JB1<<"\t\t|"<<H1<<"\t\t|15%\t\t|\t"<<TH1<<endl;
	cout << "2 |" << NB2 <<"\t\t\t|"<<JB2<<"\t\t|"<<H2<<"\t\t|10%\t\t|\t"<<TH2<<endl;
	cout << "3 |" << NB3 <<"\t\t\t|"<<JB3<<"\t\t|"<<H3<<"\t\t|5%\t\t|\t"<<TH3<<endl;
	cout << string(100, '-')<<endl;
	total=TH1+TH2+TH3;
	cout << "Total Pembayaran (Rp)"<<string(67,' ')<<total<<endl;
	cout << string(100, '-')<<endl;
	cout << "Kasir"<<endl<<endl;
	cout << nama<<endl;
	cout << nim;
	return 0;
	}
