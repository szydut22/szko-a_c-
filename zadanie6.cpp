#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])

{
    double a,b,c,delta,x1;

    cout<<"podaj 1 liczbe"<<endl;
     cin>>a;

    cout<<"podaj 2 liczbe"<<endl;
     cin>>b;
    cout<<"podaj 3 liczbe"<<endl;
     cin>>c;
    if(a==0) cout<<"To nie jest rownanie kwadratowe\n"<<endl;
    else 
     { 
       delta = (b*b)-(4*a*c); 
       cout << "delta wynosi" << delta << endl;
       if (delta>0){
 
           x1=(-b-sqrt(delta))/(2*a); 
            }
            cout<<"x1 wynosi "<< x1 << endl;
        }
        

    return 0;
}