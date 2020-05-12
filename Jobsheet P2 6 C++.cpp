#include <iostream>
using namespace std;
int main(){
    int ip;
    cout<<"Masukkan IP anda: ";
    cin>>ip;
    if(ip >= 0.00 && ip <= 1.49){
    cout<<"Anda bisa Mengambil 12 SKS";}
    else if(ip >= 1.50 && ip <= 1.99){
    cout<<"Anda bisa Mengambil 15 SKS";}
    else if(ip >= 2.00 && ip <= 2.49){
    cout<<"Anda bisa Mengambil 18 SKS";}
    else if(ip >= 2.50 && ip <= 2.99){
    cout<<"Anda bisa Mengambil 21 SKS";}
    else if(ip >= 3.00 && ip <= 4.00){
    cout<<"Anda bisa Mengambil 24 SKS";}
    return 0;
}
