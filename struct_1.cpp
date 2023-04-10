#include <iostream>

using namespace std;

struct rownanie {
        int calkowita;
        float wymierna;
        char niewiadoma;
        };

int main(){

    rownanie tablica[] = { {1, 1.0156, 'x'}, {2, 2.00356, 'y'}, {3, 3.56546, 'z'},
                        {4, 4.9876, 'a'}, {5, 5.673, 'b'}, {6, 6.08963, 'c'} };

    int roz_tablica = sizeof(tablica)/sizeof(rownanie);
    rownanie *wsk_rownania = tablica;
    rownanie tymczasowe;

     for(int i=0; i<roz_tablica; i++){
        cout << (*(wsk_rownania + i)).calkowita << ", ";
        cout << (*(wsk_rownania + i)).wymierna << ", ";
        cout << (*(wsk_rownania + i)).niewiadoma << ".  ";
        }
    cout << "" << endl;

    for(int i=0; i<(roz_tablica/2); i++){
        tymczasowe = *(wsk_rownania + i);
        *(wsk_rownania + i) = *(wsk_rownania + (roz_tablica - 1) - i);
        *(wsk_rownania + (roz_tablica - 1) - i) = tymczasowe;
        }

    for(int i=0; i<roz_tablica; i++){
        cout << (*(wsk_rownania + i)).calkowita << ", ";
        cout << (*(wsk_rownania + i)).wymierna << ", ";
        cout << (*(wsk_rownania + i)).niewiadoma << ".  ";
        }
}

