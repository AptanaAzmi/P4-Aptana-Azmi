#include <iostream>
using namespace std;
int main(){
    int nilai;
    cout<<"Input Nilai: ";
    cin>>nilai;
    if(nilai > 85 && nilai <= 100){
    cout<<"Anda Mendapatkan: A";}
    else if(nilai > 75 && nilai <= 84){
    cout<<"Anda Mendapatkan: B";}
    else if(nilai > 60 && nilai <= 74){
    cout<<"Anda Mendapatkan: C";}
    return 0;
}
