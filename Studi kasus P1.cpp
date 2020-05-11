#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	char kata[40];
         float V,panjang,lebar,tinggi;
     int a = 2, b = 6, c = 19, X,Pnt;
	cout<<"Masukkan Nama : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nim  : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nama : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nim  : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nama : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nim  : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nama : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nim  : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nama : ";
	cin.getline(kata,40);
	cout<<"Masukkan Nim  : ";
	cin.getline(kata,40);
	

    cout<<"Program Volume Balok"<<endl;
    cout<<"Panjang Balok : ";
    cin>>panjang;
    cout<<"Lebar Balok   : ";
    cin>>lebar;
    cout<<"Tinggi Balok  : ";
    cin>>tinggi;
    cout<<"Volume Balok  : ?";
    cout<<"\nVolume Balok  : panjang * lebar * tinggi?";
    V=panjang*lebar*tinggi;
    cout<<endl<<"Volume Balok  = "<<V<<endl;
    system("\npause");

    cout<<"Program mencari nilai X"<<endl;
     a++;
     cout<<"\na =  "<<a;
     b--;
     cout<<"\nb = "<<b;
     cout<<"\nc = "<<c;
     X = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
     cout<<"\nMaka Nilai akhir X =  "<<X;
     cout<<"\n";
     system("pause");
    
cout<<"\nProgram Perbandingan nilai terkecil (Pnt) antara 1dan 2"<<endl;
 Pnt = (X<V)?V:X;
 cout<<"nilai terkecil adalah "<<Pnt;
 cout<<"\n";
 system("\npause");
	
	 return 0;	

}
