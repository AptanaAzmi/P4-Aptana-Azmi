#include<iostream>
#include<string.h>
using namespace std;

int perkalian(int a, int c);
int pembagian(int b, int d);

int main()
{
	int a,b;
	float h1, h2; 
	cout<<"masukkan angka yang akan dikalikan\t:"<<endl;
	cout<<"angka pertama\t= ";
	cin>>a;
	cout<<"angka kedua\t= ";
	cin>>b;
	h1 = perkalian(a,b);
	cout<<"Hasil perkaliannya adalah\t= "<<h1<<endl;
	
	cout<<"\n\nmasukkan angka yang akan di lakukan operasi pembagian\t:"<<endl;
	cout<<"angka yang akan dibagi\t= ";
	cin>>a;
	cout<<"angka pembagi\t= ";
	cin>>b;
	h2 = pembagian(a, b);
	cout<<"Hasil pembagiannya adalah\t= "<<h2<<endl;


}

int perkalian(int a, int c)	
	{
		return(a*c);
	}
	
int pembagian(int b, int d)
	{
		return(b/d);
	}
