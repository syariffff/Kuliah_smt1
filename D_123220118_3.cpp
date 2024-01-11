#include<iostream>
#include<string.h>
using namespace std;
int main(){
 char kalimat[50];
 cout<<"Masukan kalimat :"; cin.getline (kalimat , sizeof (kalimat) );
 int a = strlen(kalimat);
 for(int pengubah=a-1;pengubah>=0;pengubah--){
	if (kalimat[pengubah]=='a')
		kalimat[pengubah]='x';
  cout<<kalimat[pengubah];
 }
}
