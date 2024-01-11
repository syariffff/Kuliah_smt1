#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	//Dekklarasi variabel
	char nama[30],nim[10],plug[10];
	
	//Input data
	cout << "Masukkan :" <<endl;
	cout << "Nama\t:";
	cin.getline (nama, sizeof (nama));
	cout << "NIM\t:";
	cin  >> nim;
	cout << "Plug\t:";
	cin.ignore();
	cin.getline (plug, sizeof (plug));
	
	//Konfirmasi data
	cout << "\nInilah data Anda :"<<endl;
	cout << "Nama\t:" << nama << endl;
	cout << "NIM\t:" << nim <<endl;
	cout << "Plug\t:" << plug <<endl<<endl;
	
	//Tampilan data dalam bentuk tabel
	cout << "Dalam bentuk tabel :"<<endl;
	cout << string(80,'=')<<endl;
	cout << left<<setw(15)<<"NIM"<<setw(30)<<"|\tNama"<<setw(20)<<"|\tPlug"<<endl;
	cout << string(80,'=')<<endl;
	cout << left<<setw(15)<<nim <<"|\t"<<setw(28)<<nama<<"|\t"<<setw(20)<<plug<<endl;
	cout << string(80,'-')<<endl;
	return 0;
	}
