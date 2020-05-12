#include <iostream> 
using namespace std; 
int main ()
{
int i=199, a;
cout<<"Masukkan angka : ";cin>>a;
awal:
a++;
cout<<a<<",";
if(i>=a)
goto awal;
else
goto akhir;
akhir:
return 0;
}
