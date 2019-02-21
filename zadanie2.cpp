#include <iostream>
using namespace std;


int main(){
    cout << "Przeliczanie USD na PLN" << endl;
    int usd;
    int pln;
    cout << "Podaj ile masz $ ";
    cin >> usd;
    pln = usd * 3.79;
    cout << "Dostaniesz " << pln << "zł" << endl;
    return 0;
}
