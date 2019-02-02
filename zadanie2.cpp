#include <iostream>

int main(){
    using namespace std;
    int pln;
    int usd;
    int waluta;
    int waluta2;
    cout << "jaką masz walute USD(1) lub PLN(2)";
    cin >> waluta;
    cout << "podaj ile masz PLN lub USD";
    cin >> waluta2;

    if(waluta == 1){
        waluta2 = usd;
    }else{
        waluta2 = pln;   
    }

    usd = 3.72 * pln;
    pln = usd/3.72;

    cout << "wynik to" << pln << endl;
   
return 0;
}