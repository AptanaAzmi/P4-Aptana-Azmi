#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
void login(){
   string user, pass;
   int i, menu, awal, pilih;
   cout << " \t------------------------------------------------------\n";
   cout << "\tSelamat Datang Di Program Surat Masuk dan Surat Keluar\n";  
   cout << " \t------------------------------------------------------\n";
   int login=0;
   i = 1;
   do {
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user =="aptan" && pass =="1234"){
           cout << "--------------------\n";
           cout << "Anda Berhasil Login" <<endl;
           cout << "--------------------\n\n";
           system("pause");
           system("cls");
           i=4;
           login=1;
  }
       else {
           cout << "------------------------\n";          
           cout << "Maaf ID & PASSWORD Salah!" <<endl;
     cout << "-------------------------\n\n";          
           i = i +1;
       }
    }while (i <= 2);
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
       cout<< "Mohon Maaf Akun Anda Kami Blockir Untuk Sementara\n";
       cout<<"silahkan hubungi kami melalui e-mail aptanazmiii@gmail.com terima kasih";
    system("cls");
    }
}

int main(){
	login();
	awal:
	    system("cls");
	    int i, menu, awal, pilih,menu1, menu2, exit;
		cout<<"|=======Program Surat Masuk dan Surat Keluar=======|\n";
		cout<<"|================Assalamu'alaikum =================|\nSilahkan masukkan pilihan: ";
		cout<<"\n\n ===|1. Surat Masuk  |===\n ===|2. Surat Keluar |===\n ===|3. Exit         |===";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
		goto menu1;
		case 2:
	    goto menu2;
		case 3:
		goto exit;
	menu1:
	    system("cls");
	        cout<< "\tProgram Surat Masuk\n";
			cout<< "list Surat Masuk : \n";
			cout<<"1. Stay At Home\n";
			cout<<"2. Komunitas Motivator Muda\n";
			cout<<"3. Youtube\n";
			cout<<"4. Shutterstock\n";
			cout<<"5. Ammar TV\n";
			cout<<"6. Universitas Mataram\n";
			cout<<"7. Indihome\n";
			cout<<"8. XL Center\n";
            cout<<"9. Buat Surat\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" |Nomer surat     : |31/DinSos/XII/2020| \n"; 
			  	cout<<" |Tanggal surat   : |Mataram, 2 Mei 2020|\n";
			  	cout<<" Asal surat      : Dinas Sosial\n";
			  	cout<<" Isi Surat       : Himbauan kepada Bapak/Ibu untuk tetap diam Dirumah \n";}
			  	
			if (pilih == 2){
			  	cout<<" Nomer surat     : 1/KMM/II/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 2 Mei 2020\n";
			  	cout<<" Asal surat      : Komunitas Motivator Muda\n";
			  	cout<<" Isi Surat       : Selamat Anda Telah Resmi menjadi Anggota Komunitas Motivator Muda\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 2/Youtube/XX/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 2 Mei 2020\n";
			  	cout<<" Asal surat      : Youtube Contributor\n";
			  	cout<<" Isi Surat       : Selamat channel Anda Berhasil Di Monetisasi\n";}
			if (pilih == 4){
			  	cout<<" Nomer surat     : 4/Shutterstock/II/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 3 Mei 2020\n";
			  	cout<<" Asal surat      : ShutterStock Contributor\n";
			  	cout<<" Isi Surat       : Vektor Anda Telah di download oleh 1000 Orang\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 6/AmmarTV/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 3 Mei 2020\n";
			  	cout<<" Asal surat      : Ammar TV\n";
			  	cout<<" Isi Surat       : Rekaman Anda Telah diPublikasikan\n";}
			if (pilih == 6){
			  	cout<<" Nomer surat     : 20/UNRAM/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 4 Mei 2020\n";
			  	cout<<" Asal surat      : Universitas Mataram\n";
			  	cout<<" Isi Surat       : UKT Anda Berhasil Dibayarakan\n";}
			if (pilih == 7){
			  	cout<<" Nomer surat     : 5/Indihome/IV/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 4 Mei 2020\n";
			  	cout<<" Asal surat      : Indihome\n";
			  	cout<<" Isi Surat       : Pemasangan Paket Anda Telah Berhasil, Kode Transaksi IP092U76\n";}
			if (pilih == 8){
			  	cout<<" Nomer surat     : 100/XL/XIII/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 5 Mei 2020\n";
			  	cout<<" Asal surat      : XL Center\n";
			  	cout<<" Isi Surat       : Selamat Anda telah Mendapatkan Pake kuota internet Sebesar 30GB untuk 10 Hari\n";}
		
			  	system("pause");
			if (pilih == 9){
				 int n;
                 char a[1000][30],b[1000][30],c[1000][30],d[1000][30];
                 cout<<"Input:\n\n";
                 cout<<"Masukan banyak data yang ingin diinput = ";
                 cin>>n;
                 cout<<endl<<endl;
                 for (int i=0;i<n;i++){
                 cout<<"Data ke-"<<i+1<<endl;
                 cout<<"Masukan nomor surat\t= ";
                 scanf(" %[^\n]s",a[i]);
                 cout<<"Masukan alamat surat\t= ";
                 cin>>b[i];
                 cout<<"Masukan tanggal surat\t= ";
                 cin>>c[i];
                 cout<<"Masukan isi surat\t= ";
                 cin>>d[i];
                 }
                 system("CLS");
                 cout<<"Output:\n\n";
                 cout<<"===============================================================================================================\n";
                 cout<<"|  No  |           nomor surat           | alamat surat | tanggal surat |               isi surat              |\n";
                 cout<<"===============================================================================================================\n";
                 for(int i=0;i<n;i++){
                 cout<<"|  "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(32)<<a[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(13)<<b[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(14)<<c[i]<<"|";
                 cout<<" "<<setiosflags(ios::left)<<setw(36)<<d[i]<<"|";
                 cout<<"\n============================================================================================================\n";
			}
		system("pause");
		goto mmenu;
}
}
	
	mmenu:
	    system("cls");
		cout << "\tProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat masuk\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu1;
	menu2:
	   system("cls");
		    cout<< "\tProgram Surat Keluar\n";
			cout<< "list Surat Keluar : \n";
			cout<<"1. Stay At Home\n";
			cout<<"2. Komunitas Motivator Muda\n";
			cout<<"3. Youtube\n";
			cout<<"4. Shutterstock\n";
			cout<<"5. Ammar TV\n";
			cout<<"6. Buat Pesan\n";
			cout<<"Masukkan nomor surat yang ingin dibuka : ";
			cin>>pilih; 
			if (pilih == 1){
			  	cout<<" Nomer surat     : 1/Rizaldy/I/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Tujuan Surat    : Dinas Sosial\n";
			  	cout<<" Isi Surat       : Terima Kasih atas himbauan yang diberikan, kami akan menjalankannya \n";}
			if (pilih == 2){
			  	cout<<" Nomer surat     : 2/Rizaldy/II/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Tujuan Surat    : Komunitas Motivator Muda\n";
			  	cout<<" Isi Surat       : Terima Kasih atas kesempatan menjadi anggota Komunitas Motivator Muda\n";}
			if (pilih == 3){
			  	cout<<" Nomer surat     : 3/Rizaldy/III/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Tujuan Surat    : Youtube Contributor\n";
			  	cout<<" Isi Surat       : Terima kasih atas responnya untuk memonetisasi channel kami\n";}
			if (pilih == 4){
			  	cout<<" Nomer surat     : 4/Rizaldy/IV/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Tujuan Surat    : ShutterStock Contributor\n";
			  	cout<<" Isi Surat       : Terima kasih atas pemberitahuannya, dengan ini kami makin bersemangat menciptakan karya baru lagi\n";}
			if (pilih == 5){
			  	cout<<" Nomer surat     : 5/Rizaldy/V/2020 \n"; 
			  	cout<<" Tanggal surat   : Mataram, 10 Mei 2020\n";
			  	cout<<" Tujuan Surat    : Ammar TV\n";
			  	cout<<" Isi Surat       : Semoga bisa bermanfaat bagi semua orang\n";}
			if (pilih == 6){				
                char ks[50],ns[50],ts[50],as[50],is[50];
				cout<<"Silahkan Ketikkan Surat Anda  :\n"; 
				gets(ks);
			    cout<<"Masukkan Nomer surat    : ";
	            gets(ns);
	            cout<<"Masukkan Tanggal surat  : ";
	            gets(ts);
	            cout<<"Masukkan Asal surat     : ";
	            gets(as);
	            cout<<"Masukkan Isi Surat      : ";
	            gets(is);
	            cout<<"Nomer Surat Anda         :"<<ns;
	            cout<<"\nTanggal Surat Anda       :"<<ts;
	            cout<<"\nAlamat Tujuan Surat Anda :"<<as;
	            cout<<"\nIsi Surat Anda           :"<<is;}
	            cout<<"\n";
	            system("pause");
			    system("cls");
	        	goto kmenu;
	kmenu:
	     cout << "\nProgram Surat Masuk dan Surat Keluar\n";
		cout<<"\nSilahkan Pilih Menu selanjutnya";	
		cout<<"\n\n1. Menu Awal\n2. Surat keluar\n";
		cout<<"\n\nmasukkan pilihan Anda : ";
		cin>>menu;
		switch(menu){
		case 1:
			system("pause");
			system("cls");
			goto awal;
		case 2:
			system("pause");
			system("cls");
			goto menu2;
	exit:
	  cout<< "\tTerima Kasih Telah Mencoba";

	
}
}
}
