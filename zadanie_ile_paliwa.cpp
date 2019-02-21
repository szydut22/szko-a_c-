#include <iostream>
using namespace std;

int main(){
    pocz:

int ile;
cout << "Ile masz paliwa?\n";
cin >> ile;

switch(ile){
    case 10:
        cout << "Nie masz wystarczająco paliwa aby jechać dalej\n";
        return 0;
    break;

    case 20:
        cout << "Masz wystarczjąco paliwa aby jechać dalej\n";
    break;

    case 100:
        cout << "Masz zepsuty silnik nie moesz jechać dalej\n";
        return 0;
    break;
}
    goto pocz;
    return 0;
}