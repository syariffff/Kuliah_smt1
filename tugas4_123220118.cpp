#include <iostream>
#include <iomanip>
using namespace std;
void aritmatika(),bangundatar(),bangunruang(),pola();
int pilih,pilih1;
char pilih2;
int main(){
	//Daftar menu utama
	cout<<string(60,'=')<<endl;
	cout<<"\tSelamat Datang Di Program Kami"<<endl<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"1. Aritmatika"<<endl;
	cout<<"2. Hitung Bangun Datar"<<endl;
	cout<<"3. Hitung Bangun Ruang"<<endl;
	cout<<"4. Buat Pola"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<string(60,'=')<<endl;
	
	//Memilih menu
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih;
	switch(pilih){
	case 1 : aritmatika(); break;
	case 2 : bangundatar(); break;
	case 3 : bangunruang();break;
	case 4 : pola();break;
	case 0 : break;
	default : {cout<<"Menu yang Anda pilih tidak tersedia"<<endl;
			   main();}}
	return 0;	
}
//Fungsi aritmatika
void aritmatika(){
	float angka1,angka2,total;
	//Daftar menu yang ada di fungsi aritmatika
	cout<<string(60,'=')<<endl;
	cout<<"\tSelamat Datang Menu Aritmatika"<<endl<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"0. Back"<<endl;
	cout<<string(60,'=')<<endl;
	
	//Memilih menu di fungsi aritmatika
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih1;
	
	//Perintah dari menu yang telah dipilih
	switch (pilih1){
	case 1 : {cout<<string(60,'=')<<endl;
			cout<<"\tPENJUMLAHAN"<<endl;
			cout<<string(60,'=')<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka1;
			cout<<'+'<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka2;
			total=angka1+angka2;
			cout<<endl<<"Totalnya adalah = "<<total<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				aritmatika();
			else if (pilih2=='n' || pilih2=='N')
				main();}
			break;
	case 2 : {cout<<string(60,'=')<<endl;
			cout<<"\tPENGURANGAN"<<endl;
			cout<<string(60,'=')<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka1;
			cout<<'-'<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka2;
			total=angka1-angka2;
			cout<<endl<<"Totalnya adalah = "<<total<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				aritmatika();
			else if (pilih2=='n' || pilih2=='N')
				main();}
			break;
	case 3 : {cout<<string(60,'=')<<endl;
			cout<<"\tPERKALIAN"<<endl;
			cout<<string(60,'=')<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka1;
			cout<<'x'<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka2;
			total=angka1*angka2;
			cout<<endl<<"Totalnya adalah = "<<total<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				aritmatika();
			else if (pilih2=='n' || pilih2=='N')
				main();}
			break;
	case 4 : {cout<<string(60,'=')<<endl;
			cout<<"\tPEMBAGIAN"<<endl;
			cout<<string(60,'=')<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka1;
			cout<<'/'<<endl;
			cout<<"Masukkan Angka = ";
			cin>>angka2;
			total=angka1/angka2;
			cout<<endl<<"Totalnya adalah = "<<total<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				aritmatika();
			else if (pilih2=='n' || pilih2=='N')
				main();}
			break;
	case 0 : main(); break;
	//Error handling fungsi aritmatika
	default : {cout<<"Menu Tidak Tersedia"<<endl;
			  main();}}
}
//Fungsi bangun datar
void bangundatar(){
	float luas;
	//Menu yan ada pada fungsi bangun datar
	cout<<string(60,'=')<<endl;
	cout<<"\tSelamat Datang Menu Bangun Datar"<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"1. Lingkaran"<<endl;
	cout<<"2. Segitiga"<<endl;
	cout<<"3. Persegi"<<endl;
	cout<<"0. Back"<<endl;
	cout<<string(60,'=')<<endl;
	//User memilih menu di fungsi
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih1;
	//Perintah menu yang telah dipilih
	switch (pilih1){
	case 1 : {
		float r;
		cout<<string(60,'=')<<endl;
		cout<<"\tHitung Luas Lingkaran"<<endl;
		cout<<string(60,'=')<<endl;
		cout<<"Masukkan panjang jari-jari : ";
		cin>>r;
		cout<<"Luas lingkaran = "<<r<<" x "<<r<<" x 3.14"<<endl;
		luas=r*r*3.14;
		cout<<"Luasnya adalah "<<luas<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				bangundatar();
			else if (pilih2=='n' || pilih2=='N')
				main();}
		break;
	case 2 : {
		float a,t;
		cout<<string(60,'=')<<endl;
		cout<<"\tHitung Luas Segitiga"<<endl;
		cout<<string(60,'=')<<endl;
		cout<<"Masukkan nilai alas : ";
		cin>>a;
		cout<<"Masukkan nilai tinggi : ";
		cin>>t;
		cout<<"Luas Segitiga = "<<a<<" x "<<t<<" x 1/2"<<endl;
		luas=a*t*1/2;
		cout<<"Luasnya adalah "<<luas<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				bangundatar();
			else if (pilih2=='n' || pilih2=='N')
				main();}
		break;
	case 3 : {
		float s;
		cout<<string(60,'=')<<endl;
		cout<<"\tHitung Luas Segitiga"<<endl;
		cout<<string(60,'=')<<endl;
		cout<<"Masukkan nilai sisi : ";
		cin>>s;
		cout<<"Luas Persegi = "<<s<<" x "<<s<<endl;
		luas=s*s;
		cout<<"Luasnya adalah "<<luas<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				bangundatar();
			else if (pilih2=='n' || pilih2=='N')
				main();}
		break;		
	case 0 : main(); break;
	//Error handling fungsi bangun datar
	default : {cout<<"Menu Tidak Tersedia"<<endl;
			  main();}}	
}
//Fungsi bangun ruang
void bangunruang(){
	float volume;
	//Menu yang ada pada fungsi bangun ruang
	cout<<string(60,'=')<<endl;
	cout<<"\tSelamat Datang Menu Bangun Ruang"<<endl<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"1. Balok"<<endl;
	cout<<"2. Tabung"<<endl;
	cout<<"0. Back"<<endl;
	cout<<string(60,'=')<<endl;
	//User memilih menu di fungsi
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih1;
	//Perintah menu yang telah dipilih
	switch (pilih1) {
	case 1 : {
		float t,p,l;
		cout<<string(60,'=')<<endl;
		cout<<"\tHitung Volume Balok"<<endl;
		cout<<string(60,'=')<<endl;
		cout<<"Masukkan nilai tinggi : ";
		cin>>t;
		cout<<"Masukkan nilai panjang : ";
		cin>>p;
		cout<<"Masukkan nilai lebar : ";
		cin>>l;
		volume=p*l*t;
		cout<<"Volume nya adalah "<<volume<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				bangunruang();
			else if (pilih2=='n' || pilih2=='N')
				main();}
		break;
	case 2 : {
		float t,r;
		cout<<string(60,'=')<<endl;
		cout<<"\tHitung Volume Balok"<<endl;
		cout<<string(60,'=')<<endl;
		cout<<"Masukkan nilai tinggi : ";
		cin>>t;
		cout<<"Masukkan nilai jari-jari : ";
		cin>>r;
		volume=3.14*r*r*t;
		cout<<"Volume nya adalah "<<volume<<endl;
			//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
			cout<<"Kembali y/n : ";
			cin>>pilih2;
			if (pilih2=='y' || pilih2=='Y')
				bangunruang();
			else if (pilih2=='n' || pilih2=='N')
				main();}
	case 0 : main(); break;
	//Error handling fungsi bangun ruang
	default : {cout<<"Menu Tidak Tersedia"<<endl;
			  main();}}
	}
//Fungsi pola
void pola(){
	cout<<string(60,'=')<<endl;
	//Menu yang ada di fungsi pola
	cout<<"\tSelamat Datang Menu Pola"<<endl<<endl;
	cout<<string(60,'=')<<endl;
	cout<<"1. Kotak"<<endl;
	cout<<"2. Segitiga"<<endl;
	cout<<"3. Love"<<endl;
	cout<<"0. Back"<<endl;
	cout<<string(60,'=')<<endl;
	//User memilih menu pada fungsi ini
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih1;
	//Perintah pembentukan pola sesuai pilihan user
	switch (pilih1){
		case 1 : {for(int p=1;p<=7;p++) {
				 for(int l=1;l<=7;l++) {
				 cout << " *";}
				 cout<<endl;}
				 //Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
				 cout<<"Kembali y/n : ";
				 cin>>pilih2;
				 if (pilih2=='y' || pilih2=='Y')
					pola();
				 else if (pilih2=='n' || pilih2=='N')
					main();}
				 break;
		case 2 : {for (int b=1;b<=7;b++)
				{for (int s=1;s<=7-b;s++)
				{cout<<" ";}
				for (int bi=1;bi<=b;bi++)
				{cout<<"* ";}
				cout<<endl;}
				//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
				cout<<"Kembali y/n : ";
				cin>>pilih2;
				if (pilih2=='y' || pilih2=='Y')
					pola();
				else if (pilih2=='n' || pilih2=='N')
					main();}
				break;
		case 3 : {for (int a=1;a<=5;a++)
					{for (int b=5;b>=a;b--)
					{cout<<" ";}
						for (int c=1;c<=a;c++)
						{if (a==1)
						 cout<<" ";
						 else if (a==2 && c==1)
						 cout<<" ";
						 else cout<<"* ";}
							for (int d=a;d<=5;d++)
							{if (a==1 && a==2)
							cout<<" ";
							else cout<<"  ";}
								for (int e=1;e<=a;e++)
								{if (a==1)
								cout<<" ";
								else if (a==2 && e==1)
								cout<<"  ";
								else cout<<"* ";}
           
				cout<<endl;}
				for (int a=1;a<=11;a++)
				{for (int g=1;g<=a;g++)
				{cout<<" ";}
				for (int h=11;h>=a;h--)
				{cout<<"* ";}
				cout<<endl;}
				//Pemilihan user ingin mengulang fungsi yang telah dipilih atau tidak
				cout<<"Kembali y/n : ";
				cin>>pilih2;
					if (pilih2=='y' || pilih2=='Y')
						pola();
					else if (pilih2=='n' || pilih2=='N')
						main();}
				break;
		case 0 : main(); break;
		//Error handling fungsi pola
		default : {cout<<"Menu Tidak Tersedia"<<endl;
			  main();}
		}
	}
