#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int b = 8;
    int *wsk_a = &a;
    int *wsk_b = &b;

    cout << (*wsk_a) + (*wsk_b) << endl;
    cout << (*wsk_a) - (*wsk_b) << endl;

    cout << a + (*wsk_b) << endl;
    cout << a - (*wsk_b) << endl;

    return 0;
}

