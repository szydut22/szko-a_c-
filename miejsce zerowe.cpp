#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x1, x2,xs, i, j,stop,w=0.0001,a,s;
	
	cout<<" f(x) = x^3 - 5.1x + 2 \n";
	cout<<" Podaj przedzial: \n";
	cout<<" Od ";
	cin>>x1;
	cout<<" do ";
	cin>>x2;
	cout<<"\n";
	
	i=x1*x1*x1 - 5.1 * x1 + 2;
	//cout<<i;
	
	a=x1;
	s=x2;
	if(i<0)
	{
		x1=s;
		x2=a;
		
	}
	do{
	
	xs=(x1+x2)/2;
	stop=(xs*xs*xs)- 5.1 * xs + 2;
	if(stop<0)
	{
		stop=-stop;
		x2=xs;
	}
	else
	{
		x1=xs;
	}
}
	while(stop>w);
	
	cout<<xs;
	
	
	
	
	
	
	
	return 0;
}
