#include<iostream> 
using namespace std; 
void contoh(int *a, int *b){  
*a+=2;  *b+=3;    
cout<<"\nNilai dalam fungsi =  "<<*a;  
cout<<"\nNilai dalam fungsi =  "<<*b;
}
int main(){ 
int c=5; int d=2;

cout<<"Nilai sebelum digunakan = "<<c;
cout<<"\nNilai sebelum digunakan = "<<d;
contoh(&c , &d);
//pemannggilan fungsi dengan refrence
cout<<"\nNilai setelah digunakan = "<<c;
cout<<"\nNilai setelah digunakan = "<<d;
}
