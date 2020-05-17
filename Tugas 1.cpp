#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"NAMA : APTANA AZMI\n";
	cout<<"NIM  : F1B019025\n";
	cout<<"PROGRAM QUIZ PILIHAN GANDA TENTANG COVID19\n";
	cout<<"--------------------------------------------------------------------\n";
	cout<<"                                    Login dulu gan\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "aptan" && pass == "12345")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"Pilih jawaban yang menurut anda benar, opsion A, B, C,dan D\n";
	cout<<"-------------------------------------------------------------\n\n";
	cout<<"1. Covid-19 muncul pertama kali dinegara?\n";
	string pilgan1[50]={"a. china","b. Amerika","c. Indonesia ","d. Italia"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
        
else{
        salah++;}
    cout<<"\n";  
	system("cls");      
cout<<"2. Apa saja gejala awal terinfeksi virus corona?\n";
    string pilgan2[50]={"a. Deman,batuk kering,sesak napas,dll","b. Lapar","c. Muntah","d. Sakit perut"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"\n";   
	system("cls");     
	cout<<"3. Korona dapat menular dengan?\n";
	string pilgan3[50]={"a. Menatap orang lain","b. Bersentuhan dengan orang lain","c. Melihat dia dengan yang lain","d. Mabar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"\n";	
	system("cls");			
	cout<<"4. Untuk meredakan penyebaran virus corona, diharapakan seluruh masyarakat agar?\n";
	string pilgan4[50]={"a. Stay at home","b. Keluar negri","c. Bermain-main","d. Kumpul dengan teman"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"\n";       
    system("cls");
cout<<"5.Virus corona ini dibawa oleh hewan?\n";
    string pilgan5[50]={"a. Buaya","b. Ayam","c. lalat","d. kelelawar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	system("cls");
	cout<<"6. Apa nama pakaian perawat untuk menangani pasien yang terjangkit virus corona? \n";
	string pilgan6[50]={"a. Daster  ","b. APD ","c. pakaian adat ","d. Jas hujan "};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}     
	cout<<"\n";
	system("cls");
	cout<<"7. Bagaimanakah cara mencegah covid-19 ini?\n";
	string pilgan7[50]={"a. Jaga kebersihan","b. Tidur","c. olahraga","d. bermain-main"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	system("cls");
	cout<<"8. Apa itu ODP?\n";
	string pilgan8[50]={"a. Orang dalam peradaban","b. Orang dengan penyakit","c. Orang dalam pemantauan ","d. Orang dalam pengawasan"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	system("cls");
	cout<<"9. Apa nama lain virus corona?\n";
	string pilgan9[50]={"a. Covid-19","b. konoha virus","c. Demam berdarah","d. Flu burung"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n";
	system("cls");
	cout<<"10. Apakah virus ini berbahaya menurut anda? \n";
	string pilgan10[50]={"a. iya sangat bahaya","b. tidak","c. sedikit berbahaya","d. semua salah "};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}		
					system("cls");										

	}		nilai :
					cout<<"***************PENILAIAN AKHIR QUIZ PILIHAN GANDA 10 SOAL*********************\n";
					cout<<"Perolehan Nilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda  : "<<nilai<<"\n"<<endl;
			selesai :
		
			cout<<"*********TERIMAKASIH SUDAH MENCOBA************"<<endl;
}

