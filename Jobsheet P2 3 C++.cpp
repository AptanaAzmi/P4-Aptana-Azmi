#include <iostream>
using namespace std;
int main()
{
  int a;
  printf("Masukkan sebuah bilangan : ");
  cin >> a;
  if (a % 2 == 0){
    cout << "Bilangan " << a << " adalah genap.";
  } else {
    cout << "Bilangan " << a << " adalah ganjil.";
  }
  return 0;
}
