#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,delta,x1, x2, x3;

    cout<<"podaj a liczbe"<<endl;
     cin>>a;

    cout<<"podaj b liczbe"<<endl;

    cin>>b;

    cout<<"podaj c liczbe"<<endl;

    cin>>c;

       delta = (b*b)-(4*a*c); 
       cout << "delta wynosi" << delta << endl;
       if (delta>0){

        x1=(-b-sqrt(delta))/(2*a); 
        x2=(-b+sqrt(delta))/(2*a);

        cout << "x1 wynosi " << x1 << endl;
        cout << "x2 wynosi " << x2 << endl;
            }else
        
        if(delta == 0){
            x3=(-b-sqrt(delta))/(2*a);
            cout << "twoje x1 wynosi " << x3 << endl;
        }else

        if(delta < 0){
            cout << "nie ma miejsc zerowych" << endl;
        }
            
    return 0;
}
        

  
