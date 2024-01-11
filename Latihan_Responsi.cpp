#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void input();
void output();
void cukup();
void kurang();
void pemisah();

string tahun[10], judul[10], kode[10],temp[10];
int menu,j,sewa[10], total1[10], total2,i;
string genre1[10], k;
string genre[5]={"Horror","Action","Sci-Fi","Romance","Comedy"};

int main() {
	cout<<"== Sewa Film dan Series Lengkap =="<<endl;
	cout<<"Pendataan Film"<<endl;
	cout<<"1. Input Data Film \n2. Output Data Film \n0. Exit"<<endl;
	cout<<"Pilih menu : ";
	cin>>menu;
	switch (menu) {
		case 0: cout<<"\nProgram Selesai"<<endl; break;
		case 1: input(); break;
		case 2: output(); break;
		}
	}

void input() {
	cout<<"\n== Input data film yang disewa =="<<endl;
	cout<<"Jumlah film yang ingin disewa : ";
	cin>>j;
	for(int i=1; i<=j; i++){
	cout<<"Judul Film\t :";
	cin.ignore();
	getline(cin,judul[i]);
	cout<<"Kode Film\t :";
	cin>>kode[i];
	cout<<"Lama sewa/hari\t :";  
	cin>>sewa[i];
	cout<<endl;
	pemisah();}
	cout<<"\nIsi apa saja untuk kembali : ";
	cin>>k;
	cout<<endl;
	main();
	}
	
void output() {
	cout<<string(33,'=')<<" Output data film ";
	cout<<string(33,'=')<<endl;
	cout<<left<<setw(20)<<setfill(' ')<<"Judul"<<" | ";
	cout<<left<<setw(10)<<setfill(' ')<<"Kode"<<" | ";
	cout<<left<<setw(10)<<setfill(' ')<<"Genre"<<" | ";
	cout<<left<<setw(6)<<setfill(' ')<<"Tahun"<<" | ";
	cout<<left<<setw(15)<<setfill(' ')<<"Lama sewa/hari"<<" | ";
	cout<<left<<setw(6)<<setfill(' ')<<"Total"<<" | "<<endl;
	
	for (int i=1; i<=j; i++) {
		cout<<left<<setw(20)<<setfill(' ')<<judul[i]<<" | ";
		cout<<left<<setw(10)<<setfill(' ')<<kode[i]<<" | ";
		cout<<left<<setw(10)<<setfill(' ')<<genre1[i]<<" | ";
		cout<<left<<setw(6)<<setfill(' ')<<tahun[i]<<" | ";
		cout<<left<<setw(15)<<setfill(' ')<<sewa[i]<<" | ";
		cout<<left<<setw(6)<<setfill(' ')<<total1[i]<<" | "<<endl;
		}
		
	cout<<"\nTotal semua harga : "<<total2<<endl;
	cukup();
	}

void cukup() {
	int b, kembali;
	
	cout<<"Bayar\t: ";
	cin>>b;
	if (b>total2) {
		kembali=b-total2;
		cout<<"Kembali\t: "<<kembali<<endl;
		cout<<"Terima kasih, harap dikembalikan tepat waktu :)"<<endl;
		}
	else {kurang();}
	main();
	}

void kurang() {
	cout<<"Uang anda kurang..."<<endl;
	cukup();
	}
	
void pemisah(){
	temp[i]=kode[i];
	if (temp[i][0]=='H' || temp[i][0]=='h')
	{genre1[i]=genre[0];}
	else if (temp[i][0]=='A' || temp[i][0]=='a')
	{genre1[i]=genre[1];}
	else if (temp[i][0]=='S' || temp[i][0]=='s')
	{genre1[i]=genre[2];}
	else if (temp[i][0]=='R' || temp[i][0]=='r')
	{genre1[i]=genre[3];}
	else if (temp[i][0]=='C' || temp[i][0]=='c')
	{genre1[i]=genre[4];}
	tahun[i]=kode[i].substr(1, 4);
	}
	
