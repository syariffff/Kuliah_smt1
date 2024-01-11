#include <iostream>
#include <iomanip>
using namespace std;
int output(),input();
void pembayaran(),pemisahan(int &i),totalharga(int &i);
int lama[1000],jumlah,bayar,totalsemua,kembalian,total[1000],awal[1000],diskon[1000];
string judul[1000],pilih,kode[1000],genre1[1000],temp[1000],tahun[1000];
char g[1000];
int main(){
	cout<<"== Sewa Film dan Series Lengkap =="<<endl;
	cout<<"Pendataan Film"<<endl;
	cout<<"1. Input Data Film"<<endl;
	cout<<"2. Output Data Film"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"Pilih menu = ";
	cin>>pilih;
	if (pilih=="1")
		input();
	else if (pilih=="2")
		output();
	else if (pilih=="0")
	return 0;
	}
	
//Fungsi untuk input data
int input(){
	cout<<"== Input data film yang disewa =="<<endl;
	cout<<"Jumlah film yang ingin disewa =";
	cin>>jumlah;
	for(int i=1; i<=jumlah; i++){
	cout<<"Judul Film\t :";
	cin.ignore();
	getline(cin,judul[i]);
	cout<<"Kode Film\t :";
	cin>>kode[i];
	cout<<"Lama sewa/hari\t :";  
	cin>>lama[i];
	cout<<endl;
	pemisahan(i);
	totalharga(i);}
	return main();
	}
int output(){
	cout<<"== Output data film =="<<endl;
	cout<<setw(30)<<right<<"Judul |"<<setw(10)<<"Kode |"<<setw(10)<<"Genre |";
	cout<<setw(6)<<" Tahun |"<<setw(20)<<"Lama Sewa/hari |"<<setw(10)<<"Total |"<<endl;
	cout<<setw(85)<<setfill('=')<<'='<<endl;
	for(int i=1; i<=jumlah; i++){
	cout<<setw(29)<<setfill(' ')<<right<<judul[i]<<"|"<<setw(8)<<kode[i]<<" |"<<setw(8)<<genre1[i];
	cout<<" |"<<setw(6)<<tahun[i]<<" |"<<setw(18)<<lama[i]<<" |"<<setw(8)<<awal[i]<<" |"<<endl;
	if (lama[i]>3)
	cout<<left<<setw(45)<<"Anda mendapatkan diskon sebesar 10% untuk film "<<setw(34)<<judul[i]<<-diskon[i]<<endl;}
	cout<<setw(30)<<right<<"Total semua "<<setw(56)<<totalsemua<<endl;
	pembayaran();
	cout<<"Terimakasih, harap dikembalikan tepat waktu!"<<endl<<endl;
	system("pause");
	return main();
	}

//Fungsi untuk memisahkan kode
void pemisahan(int &i){
	temp[i]=kode[i];
	string genre[5]={"Horror","Action","Sci-Fi","Romance","Comedy"};
	if (temp[i][0] == 'H' || temp[i][0] == 'h'){
	genre1[i]=genre[0];}
	else if (temp[i][0] == 'A' || temp[i][0] == 'a'){
	genre1[i]=genre[1];}
	else if (temp[i][0] == 'S' || temp[i][0] == 's'){
	genre1[i]=genre[2];}
	else if(temp[i][0] == 'R' || temp[i][0] == 'r'){
	genre1[i]=genre[3];}
	else if (temp[i][0] == 'C' || temp[i][0] == 'c'){
	genre1[i]=genre[4];}
	tahun[i]=temp[i].substr(1, 4);}

//Fungsi pembayaran
void pembayaran(){
	cout<<"Bayar = ";
	cin>>bayar;
	if (bayar>=totalsemua){
		kembalian=bayar-totalsemua;
		cout<<"Kembalian = "<<kembalian<<endl;}
	else if (bayar<totalsemua){
		cout<<"Uang Anda kurang..."<<endl;
		pembayaran();}
	}

//Fungsi diskon
void totalharga(int &i){
	if (lama[i]>3){
	total[i]=lama[i]*10000;
	total[i]-=total[i]*10/100;}
	else total[i]=lama[i]*10000;
	totalsemua+=total[i];
	awal[i]=lama[i]*10000;
	diskon[i]=awal[i]*10/100;}
