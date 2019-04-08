#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	long int suma=0;
	long int i,j,k,m,n;
	cout<<"\nPodaj liczbe n:";
	cin>> n;
	cout<<"\n Podaj liczbe m:";
	cin>>m;
	i=n;j=m;
	if(m>n){
		k=n;n=m;m=k;
	}
	while(m>0){
		k=n%m;
		n=m;
		m=k;
	cout<<"*\n";
	}
	cout<<"\n NWD ("<<i<<","<<j<<")="<<n<<endl;
	getch();
	return 0;		

}
