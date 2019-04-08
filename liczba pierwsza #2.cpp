#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,j,n;
	bool pierwsza;
	cout<<"\nPodaj liczbe: ";
	cin>>n;
	pierwsza= true;
	if (n == 1 || n%2 == 0)
	pierwsza= false;
	if (n == 2)
	pierwsza= true;
	i= 3;
	j= n/2;
	if(n > 2)
    do{
    	
    	if (n%i == 0)
    	
		
	pierwsza= false;
   
    	i+= 2;
    	cout<<"-0-";
    }while (pierwsza == true && i <= j);
    if (pierwsza)
    cout<< "tak";
    else
    cout<<"nie";
    cout<<endl;
    getch();
    return 0;
	}	
