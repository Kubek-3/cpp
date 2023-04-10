#include <iostream>

using namespace std;

class mojWektor{

    private:
        int x_;
        int y_;

    public:
        mojWektor(int a, int b){
            x_ = a;
            y_ = b;
        }

        mojWektor(){};
        void setWektor(){
            int x1, y1;
            cout << "Podaj wsporzedne wektora" << endl;
            cout << "x:";
            cin >> x1;
            cout << "y:";
            cin >> y1;
            x_ = x1;
            y_ = y1;
        }
        void print(){
            cout << "Wynik to: ";
			cout << "[" << x_ <<", " << y_ << "]" << endl;
        }

        mojWektor operator+ (mojWektor &wektor){
			mojWektor wynik;
			wynik.x_ = x_ + wektor.x_;
			wynik.y_ = y_ + wektor.y_;
			return wynik;
        }

		mojWektor operator- (mojWektor &wektor){
			mojWektor wynik;
			wynik.x_ = x_ - wektor.x_;
			wynik.y_ = y_ - wektor.y_;
			return wynik;
        }

		mojWektor operator* (mojWektor &wektor){
			mojWektor wynik;
			wynik.x_ = x_ * wektor.x_;
			wynik.y_ = y_ * wektor.y_;
			return wynik;
        }

        mojWektor operator* (int a){
            mojWektor wynik;
			wynik.x_ = x_ * a;
			wynik.y_ = y_ * a;
			return wynik;
        }

};

int main() {
 /*   mojWektor a(3, 6); //test
    mojWektor b(4, 8);
    mojWektor c;
    mojWektor d;
    mojWektor e;
    c = a + b;
    d = c * a;
    e = d - c;
    c.print();
    d.print();
    e.print();
/*int x1, y1, x2, y2;
	cout << "Podaj wsporzedne 1 wektora" << endl;
	cout << "x:";
    cin >> x1;
	cout << "y:";
	cin >> y1;
	mojWektor w1(x1, y1);
*/
    mojWektor w1;
    mojWektor w2;
    w1.setWektor();
    w2.setWektor();
	cout << "Wybierz operacje, ktora chcesz wykonac na wektorach" << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie dwoch wektorow" << endl;
	cout << "4. Mnozenie wektora i liczby" << endl;
	int wybor;
	cin >> wybor;
	mojWektor nowy;
	while(true)
	{
		switch (wybor)
		{
			case 1:
				nowy = w1 + w2;
				nowy.print();
			break;
			case 2:
				nowy = w1 - w2;
				nowy.print();
			break;
			case 3:
				nowy = w1 * w2;
				nowy.print();
			break;
			case 4:
				int wybor2;
				int a;
				cout << "Wybierz przez jaka liczbe chcesz pomnozyc podany wektor" << endl;
				cin >> a;
				cout << "Wybierz ktory wektor chcesz pomnozyc" << endl;
				cin >> wybor2;
				switch(wybor2)
				{
					case 1:
						nowy = w1 * a;
						nowy.print();
					break;
					case 2:
						nowy = w2 * a;
						nowy.print();
					break;
					default:
						cout << "Nie ma takiego wektora" << endl;
						continue;
				}
			break;
			default:
				cout << "Nie ma takiej operacji" << endl;
				cout << "Wybierz jeszcze raz" << endl;
				cin >> wybor;
				continue;

		}
		break;
	}
}
