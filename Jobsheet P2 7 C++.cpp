#include <iostream>
using namespace std;
int main()
{
	int ipk;
	cout<<"masukkan ipk :"; 
	cin>>ipk;
	switch(ipk)
	{
		case 1 : cout<<"Anda cum laude";break;
		case 2 : cout<<"Anda lulus dengan nilai memuaskan";break;
		case 3 : cout<<"Anda lulus";break;
		default : cout<<"Anda tidak lulus";break;
	}
	return 0;
}
