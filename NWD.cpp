#include <iostream>
#include <conio.h>
using namespace std;
int nwd(int n, int m){

 if (m>0)
	   return nwd(m, n%m);
 else
       return n;}
int main(){

	long int m,n,r;
	
	cout<<"\nPodaj liczbe n:";
	cin>> n;
	cout<<"\n Podaj liczbe m:";
	cin>>m;
	cout<<nwd(n,m);
	
	
	return 0;		

}
