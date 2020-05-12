#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;

main(){
	cout<<"SELEMAT DATANG DI PRAKTIKUM ALPROG 2020"<<endl;
	cout<<"__MODUL 2__"<<endl;
	system("cls");
	int pin,menu,pilihan,awal;
	double transfer,tarik, setor;
	string rekening;
	char a;
	int saldo=1000000;
	
	awal:
	cout<<"==========Studi Kasus Mesin ATM K6==========\n\n";
	cout<<"masukkan pin Anda : ";
	cin>>pin;
	system("cls");
	if (pin==000000){
		system("cls");
			menu:
		cout<<"==========Studi Kasus Mesin ATM K6==========\n\n";
		cout<<"Assalamu'alaikum\nSilahkan masukkan pilihan:";
		cout<<"\n\n1. Cek Saldo\n2. Setoran\n3. Transfer";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("cls");
		    cout<<"==========Studi Kasus Mesin ATM K6==========\n\n";
			cout<<"Jumlah saldo Anda sebesar:\nRp."<<saldo;
			break;
		case 2:
			system("cls");
			cout<<"==========Studi Kasus Mesin ATM K6==========\n\n";
			cout<<"Masukkan jumlah uang yang ingin disetor:\n";
			cin>>setor;
			cout<<"\nAnda melakukan penyetoran sebesar: Rp. " << setor;
			cout<<"\nJumlah saldo anda sebelumnya sebesar: Rp. "<< saldo;
			saldo=saldo+setor;
			cout<<"\nJumlah Saldo Anda menjadi: Rp. " << saldo;
			break;
		case 3:
			system("cls");
			cout<<"==========Studi Kasus Mesin ATM K6==========\n\n";
			cout<<"Masukkan jumlah uang yang ingin ditransfer:\n";
			cin>>transfer;
			cout<<"\nMasukkan nomor rekening penerima:\n ";
			cin>>rekening;
			cout<<"\nTransfer ke nomor rekening ( "<<rekening<< " )\n";
			cout<<"dengan jumlah sebesar Rp. "<< transfer;
			cout<<"\ntelah berhasil dilakukan.\n\n";
			 saldo=saldo-transfer;
			cout<< "Sisa Saldo Anda sebesar: Rp. "<<saldo;  
			break;
		}
		cout<<"\n\nApakah Anda ingin melanjutkan transaksi? (y/n)"<<endl;
		cin>>a;
		if(a=='y'||a=='Y'){
			system("cls");
			goto menu;
			}
			else if (a=='n'||a=='N'){
				cout<<"\nTerima kasih telah menggunakan ATM kami";		
		}
	}
		else{
			cout<<"PIN Anda Salah, coba lagi!\n\n";
			goto awal;			
			}
		}
