#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int suma=0;
	int i,n;
	bool pierwsza;
	cout<<"\n Podaj liczbe: ";
	cin>>n;
	pierwsza=true;
	if(n==1)
	pierwsza==false;
	if(n>2)
	for(i=2;i<n-1;i++)
	{
	
	if(n%i==0)
	pierwsza= false;
	
	
	cout<<"-0-";}
	if(pierwsza==true)
	
	cout<<"TAK";
	else
	cout<<"NIE";
	cout<<"\n";
	getch();
	return 0;
}
