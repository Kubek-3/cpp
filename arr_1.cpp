
#include <iostream>
using namespace std;

int main() {
    int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};
    int digits_size = sizeof(digits) / sizeof(int);

    int result[9] = {};

    for(int i = 0; i < digits_size; i++)
    {
        result[digits[i]]++;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << ": " << result[i] << endl;
    }

    return 0;
}
