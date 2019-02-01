#include <iostream>
using namespace std;

int main(){
    int podstawaTrojkata;
    int liczbaGwiazdek;
    int wysokoscTrojkata;

    cout << "Podaj podstawe trojkata" << endl;
    cin >> podstawaTrojkata;

    // wyliczam sobie podstawe trojka na podstaie liczby gwiazdek
    if( podstawaTrojkata % 2 == 0){
        wysokoscTrojkata = podstawaTrojkata /2;
        liczbaGwiazdek = 2;
    }else{
        wysokoscTrojkata = (podstawaTrojkata +1) /2;
        liczbaGwiazdek = 1;
    }
    //
    cout << "Wysokosc trojkata:" << wysokoscTrojkata << endl;

    for(int j = 0; j < wysokoscTrojkata; j++){
        
        for(int z = 0; z < (podstawaTrojkata - liczbaGwiazdek) / 2 ; z++) {
            cout << " ";
        }
        for(int i = 0; i < liczbaGwiazdek; i++){
            cout << "*";
        }

        cout << "\n";
        liczbaGwiazdek = liczbaGwiazdek + 2;
    }

    cout << "\n\n\n";
    return 0;
}
