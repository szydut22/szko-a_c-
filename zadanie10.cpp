#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int compare( const string& lewy, const string& prawy){
    return lewy.length() < prawy.length();
}

int main(){
    int currentLine = 0;
   vector<string> imiona;

    string line;
    ifstream wej("imiona.txt");
    ofstream wyj("wynik.txt");


    if(!wej){
        cout << "brak danych";
        return 1;
    }
    
    while(getline(wej, line)){
        imiona.push_back(line);
        wyj << line << " " << line.length() << endl;
        currentLine++;
    }

    // sort(imiona.begin(), imiona.end(),  [ ]( const string& lewy, const string& prawy )
    // {
    //     return lewy.length() < prawy.length();
    // });

    sort(imiona.begin(), imiona.end(), compare);


    for(int i=0; i < currentLine; i++){
        cout << imiona[i] << endl;
    }
    cout << "";
   
    return 0;
}