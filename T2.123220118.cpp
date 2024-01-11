#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
	int warna, A1, A2, A3, A4, A5, A6, Comp, Split1, Split2, Triadic1, Triadic2, Tetrad1, Tetrad2, Tetrad3;
	char PW;
	
	//Separator
	cout << string(80, '-')<<endl;
	
	//Nama dan NIM
	cout << setw(50)<<"Nama\t: Rahmat Syarif Hidayatullah"<<endl; 
	cout << setw(32)<<"NIM\t: 123220118"<<endl;
	
	//Separator
	cout << string(80, '-')<<endl;
	
	//Daftar Pilihan Warna
	cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis."<<endl;
	cout << "Daftar Warna :"<<endl;
	cout << left<<setw(25)<<"1. Orange"<<setw(24)<<"2. Red-Orange"<<setw(25)<<"3. Red"<<endl;
	cout << left<<setw(25)<<"4. Red-Violet"<<setw(24)<<"5. Violet"<<setw(25)<<"6. Blue-Violet"<<endl;
	cout << left<<setw(25)<<"7. Blue"<<setw(24)<<"8. Blue-Green"<<setw(25)<<"9. Green"<<endl;
	cout << left<<setw(25)<<"10. Yellow-Green"<<setw(24)<<"11. Yellow"<<setw(25)<<"12. Yellow-Orange"<<endl<<endl;
	cout << "Pilihan Warna Nomor = "; 
	
	//Input Warna yang Diinginkan
	cin >> warna; cout<<endl;
	
	//Notasi dan Sifat dari Warna yang Telah Dipilih
	if (warna==3||warna==7||warna==11) 
		cout<<"Notasi Warna : Primer"<<endl;
	else if (warna==1||warna==5||warna==9)
			cout<<"Notasi Warna : Sekunder"<<endl;
		else if (warna==2||warna==4||warna==6||warna==8||warna==10||warna==12)
				cout<<"Notasi Warna : Tersier"<<endl;
			else cout<<"Pilihan yang Dimasukkan Salah";
	if (warna<7 && warna>0)
		cout<<"Sifat Warna : Hangat";
		else if (warna>=7&&warna<13) 
				 cout<<"Sifat Warna : Sejuk";
		
	//Daftar Pilihan Perpaduan Warna	
	cout << "\nPerpaduan Warna Harmonis"<<endl;
	cout << "a. Perpaduan Warna Analogous"<<endl;
	cout << "b. Perpaduan Warna Complementary"<<endl;
	cout << "c. Perpaduan Warna Split Complementary"<<endl;
	cout << "d. Perpaduan Warna Triadic Complementary"<<endl;
	cout << "e. Perpaduan Warna Tetrad Complementary"<<endl;
	cout << "Pilih Perpaduan Warna =";
	
	//Input Perpaduan Warna yang Diinginkan	
	cin >> PW; cout << endl;
	
	//Tampilan Perpaduan Warna yang Dipilih	
	switch (PW)
		{
		case 'a' : cout<<"Perpaduan Warna Analogus dengan Warna Nomor :"<<endl;
					if (warna==1) 
						{A1=warna+1; A2=warna+2; A3=warna+10; A4=warna+11; A5=warna+1; A6=warna+11;}
					  else if (warna==2) 
							  {A1=warna+1; A2=warna+2; A3=warna-1; A4=warna+10; A5=warna-1; A6=warna+1;}
						else if (warna>=3&&warna<=10) 
								{A1=warna+1; A2=warna+2; A3=warna-2; A4=warna-1; A5=warna-1;A6=warna+1;}
						  else if (warna==11) 
								  {A1=warna-10; A2=warna+1; A3=warna-2; A4=warna-1; A5=warna-1; A6=warna+1;}
						   else if (warna==12) 
								   {A1=warna-11; A2=warna-10; A3=warna-2; A4=warna-1; A1=warna-11; A4=warna-1;}
					cout<<A1<<","<<A2<<" atau "<<A3<<","<<A4<<" atau "<<A5<<","<<A6;
					break;
		case 'b' : cout << "Perpaduan Warna Complementary dengan Warna Nomor : "<<endl;
				   if (warna<=6 && warna>0) 
					  {Comp = warna+6;}
					 else if (warna>=7 && warna<=12) 
							 {Comp = warna-6;}
				 cout << Comp;
				 break;
		case 'c' : cout<<"Perpaduan Warna Split Complementary dengan Warna Nomor : "<<endl;
					if (warna<=5 && warna>0)
					   {Split1 = warna+5;
					    Split2 = warna+7;}
					  else if (warna>=6 && warna<=7)
							  {Split1 = warna-5;
							   Split2 = warna+5;}
						else if (warna>=8 && warna<=12)
								{Split1 = warna-7;
								 Split2 = warna-5;}
				 cout<<Split1<<","<<Split2;
				 break;
		case 'd' : cout << "Perpaduan Warna Triadic Complementary dengan Warna Nomor : " <<endl;
				if (warna<=4 && warna>0)
				    {Triadic1 = warna+4;
					 Triadic2 = warna+8;}
				  else if (warna>=5 && warna<=8)
						  {Triadic1 = warna-4;
						   Triadic2 = warna+4;}
					else if (warna>=9 && warna<=12)
							{Triadic1 = warna-8;
							 Triadic2 = warna-4;}
				 cout<<Triadic1<<","<<Triadic2;
				 break; 
		case 'e' : cout << "Perpaduan Warna Tetrad Complementary dengan Warna Nomor : " <<endl;
				   if (warna<=3 && warna>0)
					  {Tetrad1=warna+3; Tetrad2=warna+6; Tetrad3=warna+9;}
					 else if (warna>3 && warna<=6)
							 {Tetrad1=warna-3; Tetrad2=warna+3; Tetrad3=warna+6;}
					   else if (warna>6 && warna<=9)
						   	   {Tetrad1=warna-6; Tetrad2=warna-3; Tetrad3=warna+3;}
					     else if (warna>9 && warna<=12) 
							     {Tetrad1=warna-9; Tetrad2=warna-6; Tetrad3=warna-3;}
				 cout <<Tetrad1<<","<<Tetrad2<<","<<Tetrad3;
				 break;
		default : cout << "Pilihan yang Dimasukkan Salah";
		} 
	return 0;
	}
