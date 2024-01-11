#include <iostream>
#include <iomanip>
using namespace std;
void penjumlahan(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil);
void pengurangan(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil);
void perkalian(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil);
void pembagian(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil);
int main(){
	//Daftar menu utama
	float bilangan1,bilangan2,bilangan3,hasil;
	int pilih;
	cout<<string(60,'=')<<endl;
	cout<<"\tSelamat Datang Di Program Kami"<<endl<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"Masukkan Bilangan : "; cin>>bilangan1;
	cout<<"Masukkan Bilangan : "; cin>>bilangan2;
	cout<<"Masukkan Bilangan : "; cin>>bilangan3;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Pilih Menu : "; cin>>pilih;
	switch(pilih){
	case 1 : {penjumlahan(bilangan1,bilangan2,bilangan3,hasil); break;}
	case 2 : {pengurangan(bilangan1,bilangan2,bilangan3,hasil); break;}
	case 3 : {perkalian(bilangan1,bilangan2,bilangan3,hasil);break;}
	case 4 : {pembagian(bilangan1,bilangan2,bilangan3,hasil);break;}
	default : cout<<"Pilihan salah";}
	cout<<"Hasil = "<<hasil;
}
void penjumlahan(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil){
hasil=bilangan1+bilangan2+bilangan3;}
void pengurangan(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil){
hasil=bilangan1-bilangan2-bilangan3;}
void perkalian(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil){
hasil=bilangan1*bilangan2*bilangan3;}
void pembagian(float &bilangan1, float &bilangan2,float &bilangan3,float &hasil){
hasil=bilangan1/bilangan2/bilangan3;}

	
