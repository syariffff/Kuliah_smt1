#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int tipe, hari, malam, total, diskon;
	
	//Judul
	cout<<string(20, '-');
	cout<<"HOTEL SUKA-SUKA SAYA";
	cout<<string(20, '-')<<endl;
	
	//Info Promo
	cout<<"Info :"<<endl;
	cout<<"Promo 15% Pemesanan Executive Suite minimal 3 malam"<<endl<<endl;
	
	//Pilihan Kamar
	cout<<"Pilih Kamar :"<<endl;
	cout<<"No  "<<left<<setw(25)<<"Tipe Kamar"<<setw(15)<<"Luas"<<setw(25)<<"Harga/malam"<<endl;
	cout<<string(60, '-')<<endl;
	cout<<"1.  "<<left<<setw(25)<<"Standar Room"<<setw(15)<<"40m2"<<setw(25)<<"Rp. 800000"<<endl;
	cout<<"2.  "<<left<<setw(25)<<"Deluxe Room"<<setw(15)<<"40m2"<<setw(25)<<"Rp. 2500000"<<endl;
	cout<<"3.  "<<left<<setw(25)<<"Executive Suite"<<setw(15)<<"80m2"<<setw(25)<<"Rp. 4650000"<<endl<<endl;
	
	//User Memilih Kamar dan Lama Menginap
	cout<<"Tipe Kamar\t\t:";
	cin>>tipe;
	cout<<"Lama menginap (hari)\t:";
	cin>>hari;
	cout<<endl;
	
	//Pengendalian 
	if (hari>=2)
	{malam = hari-1;
	cout<<"Terimakasih Atas Pesanan Anda!"<<endl;
	switch (tipe){
		case 1 :cout<<"Jenis Kamar\t\t: Standar Room"<<endl;
				cout<<"Lama menginap\t\t: "<<hari<<" hari "<<malam<<" malam"<<endl;
				total=malam*800000;
				cout<<"Total\t\t\t: Rp. "<<total<<endl;
				cout<<"Anda mendapat diskon\t: Rp. 0";
		break;
		case 2 :cout<<"Jenis Kamar\t\t: Deluxe Room"<<endl;
				cout<<"Lama menginap\t\t: "<<hari<<" hari "<<malam<<" malam"<<endl;
				total=malam*2500000;
				cout<<"Total\t\t\t: Rp. "<<total<<endl;
				cout<<"Anda mendapat diskon\t: Rp. 0";
		break;
		case 3 :cout<<"Jenis Kamar\t\t: Executive Room"<<endl; 
				cout<<"Lama menginap\t\t: "<<hari<<" hari "<<malam<<" malam"<<endl;
				total=malam*4650000;
				if (malam>=3)
					diskon=total*15/100;
					else diskon=0;
				total-=diskon;
				cout<<"Total\t\t\t: Rp. "<<total<<endl;
				cout<<"Anda mendapat diskon\t: Rp. "<<diskon;
		break;
		default :cout<<"Maaf, Pilihan Salah"<<endl;}}
	else cout<<"Maaf, Minimal Pemesanan 2 Hari";
	}
