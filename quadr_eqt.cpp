#include <iostream>
#include <cmath>

using namespace std;

struct parametry {

	float a;
	float b;
	float c;

};

struct x_zerowe {

    float x0;
    float x1;
    float x2;

};

float delta (parametry *wsk) {

	float *delta = new float;
	return *delta = wsk->b*wsk->b - 4*wsk->a*wsk->c;
	delete [] delta;

}

void m_zerowe (parametry *wsk) {

    x_zerowe *m_zerowe = new x_zerowe;
	float d = delta(wsk);

	m_zerowe->x0 = -wsk->b/(2*wsk->a);
	m_zerowe->x1 = (-wsk->b-sqrt(d))/(2*wsk->a);
	m_zerowe->x2 = (-wsk->b+sqrt(d))/(2*wsk->a);

	if (d < 0) {
		cout << "Funkcja nie ma miejsc zerowych" << endl;
	}

	else if (d == 0) {
		cout << "Funkcja ma 1 miejsce zerowe" << endl;
		cout << "x0 = " << m_zerowe->x0 << endl;
	}

	else {
		cout << "Funkcja ma 2 miejsca zerowe" << endl;
		cout << "x1 = " << m_zerowe->x1 << endl;
		cout << "x2 = " << m_zerowe->x2 << endl;
	}

	delete m_zerowe;

}


int main() {

	parametry *wsk = new parametry;

	cout << "Wypisz wspolczynniki a,b,c funkcji kwadratowej ax^2+bx+c" << endl;
	cout << "a = "; cin >> wsk->a;
	cout << "b = "; cin >> wsk->b;
	cout << "c = "; cin >> wsk->c;
	cout << "delta = " << delta(wsk) << endl;

    m_zerowe (wsk);

    delete wsk;

}
