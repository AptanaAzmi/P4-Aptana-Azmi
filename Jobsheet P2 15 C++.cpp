#include <iostream> 
using namespace std; 
  int main() 
{ 
    int n,x;
	cout << "masukan nilai n : ";
	cin >> n;
	cout << "Berapa kali perulangan : ";
	cin >> x;
	label: 
    	cout << n; 
    	x--; 
    	if (x >= 0){
    		goto label;
	}       	        	
    return 0;
}
