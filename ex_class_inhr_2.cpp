#include <iostream>

using namespace std;

class vector2d{

    private:
    int tab[2];

    public:
    vector2d(int, int);
    void print2d();
    void add(vector2d suma);
    int getVector();
    void setVector(int a, int b);
};

vector2d::vector2d(int a, int b){
    tab[0] = a;
    tab[1] = b;
}

void vector2d::print2d(){
    cout << "[" << tab[0] << ", " << tab[1] << "]" << endl;
}

void vector2d::add(vector2d suma){
    tab[0] += suma.tab[0];
    tab[1] += suma.tab[1];
}

int vector2d::getVector(){
    return tab[0];
}

void vector2d::setVector(int x1, int x2){
    tab[0] = x1;
    tab[1] = x2;
}


int main(){

    vector2d wektor(2, 6);
    vector2d kolejny(10, 20);

    kolejny.print2d();
    wektor.add(kolejny);
    wektor.print2d();

    return 0;
}
