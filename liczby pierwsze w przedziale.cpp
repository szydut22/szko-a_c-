#include <iostream>
using namespace std;

int main()
{
   int m, n, i, liczby, g;

   cout<<"Podaj dolny zakres: ";
   cin >>m;
   cout<<"Podaj gorny zakres: ";
   cin >>n;
   if (n<2)
   {
      cout<<"Brak liczb pierwszych";
      return 0;
   }
   cout<<"Oto liczby pierwsze z podanego przedzialu:\n ";
   
   if (m==1)
      m=m+2;
      
   if (m%2==0)
      m++;
      
   for (i=m; i<=n; i=i+2)
   {
      g=0; 
      for (liczby=2; liczby<=i/2; liczby++) 
      {
         if ((i%liczby)==0)
         {
            g=1;
         }
      }
      if (g==0)
         cout <<i<<" ";
   }
  return 0;
}
