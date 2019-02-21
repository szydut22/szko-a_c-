#include <iostream>
using namespace std;

int ilePaliwa;

int main(){
    pocz:
    cout << "ile paliwa masz?\n";
    cin >> ilePaliwa;

    switch(ilePaliwa){
        case 10:
            if(ilePaliwa == 8) cout << "nie mozesz jechac dalej !!\n";
            cout << "mozesz nie dojechac do stacji paliw !";
            return 0;
        break;

        case 20:
            cout << "mozesz jechać dalej\n";
        break;

        case 100:
            cout << "masz zepsuty silnik, poszukaj mechanika !\n";
        return 0;
        break;
    }
    goto pocz;

    system("pause");
}