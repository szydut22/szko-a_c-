#include <iostream>
using namespace std;
 
void Witamy(){
    cout << "Witamy w naszym programie" << endl;
}



void kwadrat(){
    int a, PoleKwadratu;
    cout << "Podaj a" << endl;
    cin >> a; 
    PoleKwadratu = a * a;
    cout << "Pole Twojego kwadratu jest równe " << PoleKwadratu << endl;
}


void trojkat(){
    int a, h, PoleTrojkata;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj h" << endl;
    cin >> h;
    
    PoleTrojkata = (a * h)/2;
    cout << "pole trojkata rownoramiennego " << PoleTrojkata << endl;

}

int main(){
    cout << "Witamy w naszym programie" << endl;
    pocz:
    cout << "[1] pole kwadratu" << endl;
    cout << "[2] pole trojkata" << endl;
    int liczba;
    cin >> liczba;
        switch(liczba){
            case 1:
                kwadrat();
            break;

            case 2:
                trojkat();
            break;
        }
    goto pocz;
    return 0;
}