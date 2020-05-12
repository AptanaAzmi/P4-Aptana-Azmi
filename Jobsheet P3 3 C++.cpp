#include<iostream>
using namespace std;
int umur; //variabel global
int main (){
char nama[30], nim[10]; //variabel local
	cout << "Masukan Nama: ";
	cin.getline(nama, 30);
	cout << "\nMasukan NIM: ";
	cin >> nim;
	cout << "\nMasukan Umur: ";
	cin >> umur;
	cout <<"\n";
	cout << "OUTPUT\n";
	cout << "Nama :"<<nama;
	cout << "\nNIM  :"<<nim;
	cout << "\nUmur :"<<umur;
}
