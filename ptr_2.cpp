#include <iostream>

using namespace std;

int main(){

    char tab[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char *wsk_tab = tab;

    for(int i = 0; i<7; i+=2){
        cout << *(wsk_tab + i) << " ";
    }

    cout << "" << endl;

    int roz_tab = sizeof(tab)/sizeof(char);

    int n = 0;
    int a = 0;
    int m = 0;
    int *wsk_i;
    wsk_i = &n;
    int *wsk_a;
    wsk_a = &a;

    for(int i = 0; i < roz_tab; i = m + n + 1){
        cout << i+1 << ": " << *(wsk_tab + i) << " ";
        if (i < 1){
            m = 0
        }
        }
}

