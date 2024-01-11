#include <iostream>
using namespace std;
void konversi(int bilangan, int *jam,int *menit,int *detik);
int main(){
	int bilangan,jam,menit,detik;
	cout<<"bilangan = ";
	cin>>bilangan;
	konversi(bilangan,&jam,&menit,&detik);
	cout<<bilangan<<" detik = "<<jam<<" jam "<<menit<<" menit "<<detik<<" detik ";
	}
void konversi(int bilangan, int *jam,int *menit,int *detik){
	*jam=bilangan/3600;
	*menit=(bilangan-(*jam*3600))/60;
	*detik=bilangan-((*menit*60)+(*jam*3600));
	}
