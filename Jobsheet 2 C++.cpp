#include<iostream>
using namespace std;

int main()
{
	int nim[2][2];	
	
	nim[0][0]= 2;
	nim[0][1]= 5;
	nim[1][0]= 4;
	nim[1][1]= 8;
	
	
	cout<<"NIM 1 :  "<<nim[0][0]<<"  "<<nim[0][1]<<endl;
	cout<<"NIM 2 :  "<<nim[1][0]<<"  "<<nim[1][1]<<endl;
	return 0;
}
