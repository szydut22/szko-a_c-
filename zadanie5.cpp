#include <iostream>
using namespace std;

int main(){
    cout << "Ograniczenie prędkości do 50km/h" << endl;
    
    pocz:
   
    double x;
    cout << " Podaj predkosc: ";
    cin >> x;
    if(x < 50; x == 50){
            cout << "Jest OK jedziesz dalej" << endl;
    }else if(x > 50; x <= 100){
            cout << "Jedziesz za szybko zwolnij" << endl;
    }else if(x > 100){
            cout << "Zabrano ci prawo jazdy nie moesz jechać dalej " << endl;
        return 0;
    }
    goto pocz;

    return 0;
}