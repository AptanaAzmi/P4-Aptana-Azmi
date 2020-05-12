#include <stdio.h>
void konversi(){
 printf("--Meenghitung skala suhu yang ingin dikonversi-- \n\n");}
void celcius(){
 int pilih;
 float bil, cel_reamur, cel_kel, cel_fahrein;
 while(pilih!=4){
  konversi();
  printf("1. Reamur\n2. Fahrenheit\n3. Kelvin\n4. Kembali ke Awal\n");
  printf("Celcius Konversi ke : ");
  scanf("%d", &pilih);
  system("cls");
  
  if (pilih == 1){
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_reamur = (bil * 4) / 5;
   printf("Jadi, Skala suhu %.2f C = %.2f R \n", bil, cel_reamur);}
 
  if (pilih == 2){
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_fahrein = ((9 * bil) / 5) + 32;
   printf("Jadi, Skala suhu %.2f C = %.2f F \n", bil, cel_fahrein);}
 
  if(pilih == 3){
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_kel = bil + 273;
   printf("Jadi, Skala suhu %.2f C = %.2f K \n", bil, cel_kel);}
   
  if (pilih == 4){
   return 0;}
  system("PAUSE");
  system("cls");
 } 
}

int main(){
 int menu;
 while(menu!=2){
   printf("--Pilihan Menu Konversi Suhu--\n\n");
   printf("1. Konversi Suhu Celcius \n" );
   printf("2. Exit \n");
   printf("Anda memilih menu : ");
   scanf("%d", &menu);
   system("cls");
 
  if (menu==1){
   celcius();}

  if (menu==2){
   printf("--Terima Kasih Telah Mencoba-- \n\n");}
  
  else{
   system("cls");}
 } 
 system("PAUSE");
 return 0;
}
