#include <iostream>

using namespace std;

int main ()
{
 	int bilangan;
	cout<<"bilangan = ";
	cin>>bilangan;
	if(bilangan < 0)
	{
		cout<<"bilangan negatif";
	}	
	else if(bilangan > 0) 
	{
		cout<<"bilangan positif";
	}
	else 
	{
		cout<<"bilangan 0";
	}
return 0;
