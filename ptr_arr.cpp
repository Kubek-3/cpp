#include <iostream>

using namespace std;

int main()
{
    struct liczba {
        int calkowita;
        float wymierna;
    };
    int *wsk_int[5];
    float *wsk_float[5];
    liczba tablica[5];
    tablica[0].calkowita = 1;
    tablica[0].wymierna = 1.01;
    tablica[1].calkowita = 2;
    tablica[1].wymierna = 2.003;
    tablica[2].calkowita = 3;
    tablica[2].wymierna = 3.56;
    tablica[3].calkowita = 4;
    tablica[3].wymierna = 4.9876;
    tablica[4].calkowita = 5;
    tablica[4].wymierna = 5.673;

    for (int i=0; i<5; i++){
            wsk_int[i]=&(tablica[i].calkowita);
            wsk_float[i]=&(tablica[i].wymierna);

            cout <<  "wartosc tablicy: " << (*wsk_int[i]) << endl;
            cout << "adres w pamieci: " << (wsk_int[i]) << endl;

            cout <<  "wartosc tablicy: " << (*wsk_float[i]) << endl;
            cout << "adres w pamieci: " << (wsk_float[i]) << endl;

    }


}
