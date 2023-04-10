#include <iostream>
using namespace std;

struct car{
  int sits;
  float range;
};

int main() {

  car tab[10];
  tab[0].sits = 5;
  tab[0].range = 500;
  car audi = {30, 1335};
  car bmw = {2, 323};

  tab[2] = audi;
  car *fiat;
  fiat = &bmw;

  cout << (*fiat).sits << endl;
  cout << (*fiat).range << endl;
  cout <<  fiat->sits << endl;
  cout << fiat->range<< endl;

  cout << audi.sits << endl;
  cout << audi.range << endl;

  cout << tab[0].sits << endl;
  cout << tab[0].range << endl;

  cout << "rozmiar tablicy: " << sizeof(tab) / sizeof(car) << endl;

  return 0;
}
