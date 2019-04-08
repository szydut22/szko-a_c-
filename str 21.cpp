#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	long int j,k,m,n;
	cout<<"\nPodaj liczbe n:";
	cin>> n;
	cout<<"\n Podaj liczbe m:";
	cin>>m;
	j=0;
	do{
		j++;
		if(m%j ==0 && n%j==0)
		{
		k=j;

	}
		cout<<"*\n";
	}while(j<=m || j<=n);
	cout<<"\n NWD ("<<n<<","<<m<<")="<<k<<endl;
	getch();
	return 0;		

}
