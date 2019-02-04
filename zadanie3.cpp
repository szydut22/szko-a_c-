#include <iostream>
using namespace std;

float x,y;
int wybor;

int main(){
    cout << "podaj 1 liczbe ";
    cin >> x;
    cout << "podaj 2 liczbe ";
    cin >> y;

    cout << endl;
    cout << "MENU GŁÓWNE";
    cout << endl;
    cout << "1. Dodawanie";
    cout << "2. Odejmowanie";
    cout << "3. Mnozenie";
    cout << "4. Dzielenie";

    cout << "Wybierz; ";
    cin >> wybor;

    switch(wybor){
        case 1:
            cout << "Suma = " << x + y;
        break;

        case 2:
            cout << "Ronica = " << x - y;
        break;

        case 3:
            cout << "Iloraz = " << x * y;
        break;

        case 4:
            if(y==0) cout << "nie dzielimy przez 0 !!";
            cout << "Iloczyn = " << x/y;
        break;

        default:
            cout << "Nie ma tego na liście";

    }

    return 0;
}