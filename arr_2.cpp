#include <iostream>
using namespace std;

int main()
{
    int rozmiar = 0; //rozmiar tablicy
    int suma = 0; //suma tablicy
    int a = 0; //wartosci elemaentow tablicy
    int min = 0;
    int max = 0;
    int srednia = 0;

    cout << " Wprowadz rozmiar tablicy: ";
    cin >> rozmiar;

    if (rozmiar <= 0){
        cout << "Nieprawid³owy rozmiar tablicy." << endl;
        cout << "Wprodadz liczbe >0" << endl;
        cin >> rozmiar;
    }
    int tablica[rozmiar] = {};

    for (int i=0; i < rozmiar; i++){
        cout << "wprowadz liczbe do tablicy i wcisnij enter:";
        cin >> a;
        tablica[i]= {a};
    }
     for (int i=0; i < rozmiar; i++){
     if( i == 0 )
        {
            max = tablica[0]; // first possible max element
            min = tablica[0]; // first possible min element
        }
        else if(a < min)
        {
            min = a;
        }

        if( i != 0 && a > max )
        {
            max = a;
        }
     }


    for(int i = 0; i < (rozmiar); i = i + 2){
        suma = suma + tablica[i] + tablica[i+1];
  }
    srednia = suma / rozmiar;
    cout << "suma: " << suma << endl;
    cout << "min: " <<  min << endl;
    cout << "max: " <<  max << endl;
    cout << "srednia: " <<  srednia << endl;
}
