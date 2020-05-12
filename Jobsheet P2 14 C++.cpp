#include <iostream>
using namespace std;             
int main()
{
  int i , hasil,a=2,n=25;
  hasil=1;
  cout<<"menghitung pangkat"<<endl;
  cout<<" masukan nilai a : ";
  cin>>a;
  cout<<" masukan nilai n : ";
  cin>>n;
        for (i=1; i<=n;i++){
            hasil = hasil * a;
            }  
  cout<<" hasil a pangkat n adalah : "<<hasil;
  cout<<endl;
  return 0;
}
